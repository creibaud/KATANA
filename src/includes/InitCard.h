#ifndef INIT_CARD_H
#define INIT_CARD_H

#include "../Card/Role/RoleCard.h"
#include "../Card/Action/ActionCard.h"
#include "../Card/Permanent/PermanentCard.h"
#include "../Card/Weapon/WeaponCard.h"
#include "../Card/Character/CharacterCard.h"

#define Shogun new RoleCard(TypeRoleCard::SHOGUN)
#define Samurai new RoleCard(TypeRoleCard::SAMURAI)
#define NinjaOne new RoleCard(TypeRoleCard::NINJA, 1)
#define NinjaTwo new RoleCard(TypeRoleCard::NINJA, 2)
#define NinjaThree new RoleCard(TypeRoleCard::NINJA, 3)
#define Ronin new RoleCard(TypeRoleCard::RONIN)

#define CriDeGuerre new ActionCard(TypeActionCard::CRI_DE_GUERRE)
#define Daimyo new ActionCard(TypeActionCard::DAIMYO)
#define Diversion new ActionCard(TypeActionCard::DIVERSION)
#define Geisha new ActionCard(TypeActionCard::GEISHA)
#define Meditation new ActionCard(TypeActionCard::MEDITATION)
#define Parade new ActionCard(TypeActionCard::PARADE)
#define CeremonieDuThe new ActionCard(TypeActionCard::CEREMONIE_DU_THE)
#define JuJitsu new ActionCard(TypeActionCard::JU_JITSU)

#define AttaqueRapide new PermanentCard(TypePermanentCard::ATTAQUE_RAPIDE)
#define CodeDuBushido new PermanentCard(TypePermanentCard::CODE_DU_BUSHIDO)
#define Armure new PermanentCard(TypePermanentCard::ARMURE)
#define Concentration new PermanentCard(TypePermanentCard::CONCENTRATION)

#define Nodachi new WeaponCard(TypeWeaponCard::NODACHI, 3, 3)
#define Naginata new WeaponCard(TypeWeaponCard::NAGINATA, 1, 4)
#define Nagayari new WeaponCard(TypeWeaponCard::NAGAYARI, 2, 4)
#define Tanegashima new WeaponCard(TypeWeaponCard::TANEGASHIMA, 1, 5)
#define Daikyu new WeaponCard(TypeWeaponCard::DAIKYU, 2, 5)
#define Bo new WeaponCard(TypeWeaponCard::BO, 1, 2)
#define Kusarigama new WeaponCard(TypeWeaponCard::KUSARIGAMA, 2, 2)
#define Katana new WeaponCard(TypeWeaponCard::KATANA, 3, 2)
#define Shuriken new WeaponCard(TypeWeaponCard::SHURIKEN, 1, 3)
#define Kanabo new WeaponCard(TypeWeaponCard::KANABO, 2, 3)
#define Bokken new WeaponCard(TypeWeaponCard::BOKKEN, 1, 1)
#define Kiseru new WeaponCard(TypeWeaponCard::KISERU, 2, 1)
#define Wakizashi new WeaponCard(TypeWeaponCard::WAKIZASHI, 3, 1)

#define Hanzo new CharacterCard(TypeCharacterCard::HANZO, 4)
#define Ushiwaka new CharacterCard(TypeCharacterCard::USHIWAKA, 4)
#define Chiyome new CharacterCard(TypeCharacterCard::CHIYOME, 4)
#define Hideyoshi new CharacterCard(TypeCharacterCard::HIDEYOSHI, 4)
#define Ginchyo new CharacterCard(TypeCharacterCard::GINCHIYO, 4)
#define Goemon new CharacterCard(TypeCharacterCard::GOEMON, 5)
#define Nobunaga new CharacterCard(TypeCharacterCard::NOBUNAGA, 5)
#define Tomoe new CharacterCard(TypeCharacterCard::TOMOE, 5)
#define Ieyasu new CharacterCard(TypeCharacterCard::IEYASU, 5)
#define Benkei new CharacterCard(TypeCharacterCard::BENKEI, 5)
#define Musashi new CharacterCard(TypeCharacterCard::MUSASHI, 5)
#define Kojiro new CharacterCard(TypeCharacterCard::KOJIRO, 5)

#endif // INIT_CARD_H