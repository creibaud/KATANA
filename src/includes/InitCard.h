#ifndef INIT_CARD_H
#define INIT_CARD_H

#include "../Card/Role/RoleCard.h"
#include "../Card/Action/ActionCard.h"
#include "../Card/Permanent/PermanentCard.h"
#include "../Card/Weapon/WeaponCard.h"
#include "../Card/Character/CharacterCard.h"

#define Shogun RoleCard(TypeRoleCard::SHOGUN)
#define Samurai RoleCard(TypeRoleCard::SAMURAI)
#define NinjaOne RoleCard(TypeRoleCard::NINJA, 1)
#define NinjaTwo RoleCard(TypeRoleCard::NINJA, 2)
#define NinjaThree RoleCard(TypeRoleCard::NINJA, 3)
#define Ronin RoleCard(TypeRoleCard::RONIN)

#define CriDeGuerre ActionCard(TypeActionCard::CRI_DE_GUERRE)
#define Daimyo ActionCard(TypeActionCard::DAIMYO)
#define Diversion ActionCard(TypeActionCard::DIVERSION)
#define Geisha ActionCard(TypeActionCard::GEISHA)
#define Meditation ActionCard(TypeActionCard::MEDITATION)
#define Parade ActionCard(TypeActionCard::PARADE)
#define CeremonieDuThe ActionCard(TypeActionCard::CEREMONIE_DU_THE)
#define JuJitsu ActionCard(TypeActionCard::JU_JITSU)

#define AttaqueRapide PermanentCard(TypePermanentCard::ATTAQUE_RAPIDE)
#define CodeDuBushido PermanentCard(TypePermanentCard::CODE_DU_BUSHIDO)
#define Armure PermanentCard(TypePermanentCard::ARMURE)
#define Concentration PermanentCard(TypePermanentCard::CONCENTRATION)

#define Nodachi WeaponCard(TypeWeaponCard::NODACHI, 3, 3)
#define Naginata WeaponCard(TypeWeaponCard::NAGINATA, 1, 4)
#define Nagayari WeaponCard(TypeWeaponCard::NAGAYARI, 2, 4)
#define Tanegashima WeaponCard(TypeWeaponCard::TANEGASHIMA, 1, 5)
#define Daikyu WeaponCard(TypeWeaponCard::DAIKYU, 2, 5)
#define Bo WeaponCard(TypeWeaponCard::BO, 1, 2)
#define Kusarigama WeaponCard(TypeWeaponCard::KUSARIGAMA, 2, 2)
#define Katana WeaponCard(TypeWeaponCard::KATANA, 3, 2)
#define Shuriken WeaponCard(TypeWeaponCard::SHURIKEN, 1, 3)
#define Kanabo WeaponCard(TypeWeaponCard::KANABO, 2, 3)
#define Bokken WeaponCard(TypeWeaponCard::BOKKEN, 1, 1)
#define Kiseru WeaponCard(TypeWeaponCard::KISERU, 2, 1)
#define Wakizashi WeaponCard(TypeWeaponCard::WAKIZASHI, 3, 1)

#define Hanzo CharacterCard(TypeCharacterCard::HANZO, 4)
#define Ushiwaka CharacterCard(TypeCharacterCard::USHIWAKA, 4)
#define Chiyome CharacterCard(TypeCharacterCard::CHIYOME, 4)
#define Hideyoshi CharacterCard(TypeCharacterCard::HIDEYOSHI, 4)
#define Ginchyo CharacterCard(TypeCharacterCard::GINCHIYO, 4)
#define Goemon CharacterCard(TypeCharacterCard::GOEMON, 5)
#define Nobunaga CharacterCard(TypeCharacterCard::NOBUNAGA, 5)
#define Tomoe CharacterCard(TypeCharacterCard::TOMOE, 5)
#define Ieyasu CharacterCard(TypeCharacterCard::IEYASU, 5)
#define Benkei CharacterCard(TypeCharacterCard::BENKEI, 5)
#define Musashi CharacterCard(TypeCharacterCard::MUSASHI, 5)
#define Kojiro CharacterCard(TypeCharacterCard::KOJIRO, 5)

#endif // INIT_CARD_H