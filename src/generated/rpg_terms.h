/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_TERMS_H
#define LCF_RPG_TERMS_H

// Headers
#include <string>

/**
 * RPG::Terms class.
 */
namespace RPG {
	class Terms {
	public:
		std::string encounter;
		std::string special_combat;
		std::string escape_success;
		std::string escape_failure;
		std::string victory;
		std::string defeat;
		std::string exp_received;
		std::string gold_recieved_a;
		std::string gold_recieved_b;
		std::string item_recieved;
		std::string attacking;
		std::string enemy_critical;
		std::string actor_critical;
		std::string defending;
		std::string observing;
		std::string focus;
		std::string autodestruction;
		std::string enemy_escape;
		std::string enemy_transform;
		std::string enemy_damaged;
		std::string enemy_undamaged;
		std::string actor_damaged;
		std::string actor_undamaged;
		std::string skill_failure_a;
		std::string skill_failure_b;
		std::string skill_failure_c;
		std::string dodge;
		std::string use_item;
		std::string hp_recovery;
		std::string parameter_increase;
		std::string parameter_decrease;
		std::string enemy_hp_absorbed;
		std::string actor_hp_absorbed;
		std::string resistance_increase;
		std::string resistance_decrease;
		std::string level_up;
		std::string skill_learned;
		std::string battle_start;
		std::string miss;
		std::string shop_greeting1;
		std::string shop_regreeting1;
		std::string shop_buy1;
		std::string shop_sell1;
		std::string shop_leave1;
		std::string shop_buy_select1;
		std::string shop_buy_number1;
		std::string shop_purchased1;
		std::string shop_sell_select1;
		std::string shop_sell_number1;
		std::string shop_sold1;
		std::string shop_greeting2;
		std::string shop_regreeting2;
		std::string shop_buy2;
		std::string shop_sell2;
		std::string shop_leave2;
		std::string shop_buy_select2;
		std::string shop_buy_number2;
		std::string shop_purchased2;
		std::string shop_sell_select2;
		std::string shop_sell_number2;
		std::string shop_sold2;
		std::string shop_greeting3;
		std::string shop_regreeting3;
		std::string shop_buy3;
		std::string shop_sell3;
		std::string shop_leave3;
		std::string shop_buy_select3;
		std::string shop_buy_number3;
		std::string shop_purchased3;
		std::string shop_sell_select3;
		std::string shop_sell_number3;
		std::string shop_sold3;
		std::string inn_a_greeting_1;
		std::string inn_a_greeting_2;
		std::string inn_a_greeting_3;
		std::string inn_a_accept;
		std::string inn_a_cancel;
		std::string inn_b_greeting_1;
		std::string inn_b_greeting_2;
		std::string inn_b_greeting_3;
		std::string inn_b_accept;
		std::string inn_b_cancel;
		std::string possessed_items;
		std::string equipped_items;
		std::string gold;
		std::string battle_fight;
		std::string battle_auto;
		std::string battle_escape;
		std::string command_attack;
		std::string command_defend;
		std::string command_item;
		std::string command_skill;
		std::string menu_equipment;
		std::string menu_save;
		std::string menu_quit;
		std::string new_game;
		std::string load_game;
		std::string exit_game;
		std::string status;
		std::string row;
		std::string order;
		std::string wait_on;
		std::string wait_off;
		std::string level;
		std::string health_points;
		std::string spirit_points;
		std::string normal_status;
		std::string exp_short;
		std::string lvl_short;
		std::string hp_short;
		std::string sp_short;
		std::string sp_cost;
		std::string attack;
		std::string defense;
		std::string spirit;
		std::string agility;
		std::string weapon;
		std::string shield;
		std::string armor;
		std::string helmet;
		std::string accessory;
		std::string save_game_message;
		std::string load_game_message;
		std::string file;
		std::string exit_game_message;
		std::string yes;
		std::string no;
		const std::string& GetEncounter() const;
		std::string& GetEncounter();
		void SetEncounter(const std::string& encounter);

		const std::string& GetSpecialCombat() const;
		std::string& GetSpecialCombat();
		void SetSpecialCombat(const std::string& special_combat);

		const std::string& GetEscapeSuccess() const;
		std::string& GetEscapeSuccess();
		void SetEscapeSuccess(const std::string& escape_success);

		const std::string& GetEscapeFailure() const;
		std::string& GetEscapeFailure();
		void SetEscapeFailure(const std::string& escape_failure);

		const std::string& GetVictory() const;
		std::string& GetVictory();
		void SetVictory(const std::string& victory);

		const std::string& GetDefeat() const;
		std::string& GetDefeat();
		void SetDefeat(const std::string& defeat);

		const std::string& GetExpReceived() const;
		std::string& GetExpReceived();
		void SetExpReceived(const std::string& exp_received);

		const std::string& GetGoldRecievedA() const;
		std::string& GetGoldRecievedA();
		void SetGoldRecievedA(const std::string& gold_recieved_a);

		const std::string& GetGoldRecievedB() const;
		std::string& GetGoldRecievedB();
		void SetGoldRecievedB(const std::string& gold_recieved_b);

		const std::string& GetItemRecieved() const;
		std::string& GetItemRecieved();
		void SetItemRecieved(const std::string& item_recieved);

		const std::string& GetAttacking() const;
		std::string& GetAttacking();
		void SetAttacking(const std::string& attacking);

		const std::string& GetEnemyCritical() const;
		std::string& GetEnemyCritical();
		void SetEnemyCritical(const std::string& enemy_critical);

		const std::string& GetActorCritical() const;
		std::string& GetActorCritical();
		void SetActorCritical(const std::string& actor_critical);

		const std::string& GetDefending() const;
		std::string& GetDefending();
		void SetDefending(const std::string& defending);

		const std::string& GetObserving() const;
		std::string& GetObserving();
		void SetObserving(const std::string& observing);

		const std::string& GetFocus() const;
		std::string& GetFocus();
		void SetFocus(const std::string& focus);

		const std::string& GetAutodestruction() const;
		std::string& GetAutodestruction();
		void SetAutodestruction(const std::string& autodestruction);

		const std::string& GetEnemyEscape() const;
		std::string& GetEnemyEscape();
		void SetEnemyEscape(const std::string& enemy_escape);

		const std::string& GetEnemyTransform() const;
		std::string& GetEnemyTransform();
		void SetEnemyTransform(const std::string& enemy_transform);

		const std::string& GetEnemyDamaged() const;
		std::string& GetEnemyDamaged();
		void SetEnemyDamaged(const std::string& enemy_damaged);

		const std::string& GetEnemyUndamaged() const;
		std::string& GetEnemyUndamaged();
		void SetEnemyUndamaged(const std::string& enemy_undamaged);

		const std::string& GetActorDamaged() const;
		std::string& GetActorDamaged();
		void SetActorDamaged(const std::string& actor_damaged);

		const std::string& GetActorUndamaged() const;
		std::string& GetActorUndamaged();
		void SetActorUndamaged(const std::string& actor_undamaged);

		const std::string& GetSkillFailureA() const;
		std::string& GetSkillFailureA();
		void SetSkillFailureA(const std::string& skill_failure_a);

		const std::string& GetSkillFailureB() const;
		std::string& GetSkillFailureB();
		void SetSkillFailureB(const std::string& skill_failure_b);

		const std::string& GetSkillFailureC() const;
		std::string& GetSkillFailureC();
		void SetSkillFailureC(const std::string& skill_failure_c);

		const std::string& GetDodge() const;
		std::string& GetDodge();
		void SetDodge(const std::string& dodge);

		const std::string& GetUseItem() const;
		std::string& GetUseItem();
		void SetUseItem(const std::string& use_item);

		const std::string& GetHpRecovery() const;
		std::string& GetHpRecovery();
		void SetHpRecovery(const std::string& hp_recovery);

		const std::string& GetParameterIncrease() const;
		std::string& GetParameterIncrease();
		void SetParameterIncrease(const std::string& parameter_increase);

		const std::string& GetParameterDecrease() const;
		std::string& GetParameterDecrease();
		void SetParameterDecrease(const std::string& parameter_decrease);

		const std::string& GetEnemyHpAbsorbed() const;
		std::string& GetEnemyHpAbsorbed();
		void SetEnemyHpAbsorbed(const std::string& enemy_hp_absorbed);

		const std::string& GetActorHpAbsorbed() const;
		std::string& GetActorHpAbsorbed();
		void SetActorHpAbsorbed(const std::string& actor_hp_absorbed);

		const std::string& GetResistanceIncrease() const;
		std::string& GetResistanceIncrease();
		void SetResistanceIncrease(const std::string& resistance_increase);

		const std::string& GetResistanceDecrease() const;
		std::string& GetResistanceDecrease();
		void SetResistanceDecrease(const std::string& resistance_decrease);

		const std::string& GetLevelUp() const;
		std::string& GetLevelUp();
		void SetLevelUp(const std::string& level_up);

		const std::string& GetSkillLearned() const;
		std::string& GetSkillLearned();
		void SetSkillLearned(const std::string& skill_learned);

		const std::string& GetBattleStart() const;
		std::string& GetBattleStart();
		void SetBattleStart(const std::string& battle_start);

		const std::string& GetMiss() const;
		std::string& GetMiss();
		void SetMiss(const std::string& miss);

		const std::string& GetShopGreeting1() const;
		std::string& GetShopGreeting1();
		void SetShopGreeting1(const std::string& shop_greeting1);

		const std::string& GetShopRegreeting1() const;
		std::string& GetShopRegreeting1();
		void SetShopRegreeting1(const std::string& shop_regreeting1);

		const std::string& GetShopBuy1() const;
		std::string& GetShopBuy1();
		void SetShopBuy1(const std::string& shop_buy1);

		const std::string& GetShopSell1() const;
		std::string& GetShopSell1();
		void SetShopSell1(const std::string& shop_sell1);

		const std::string& GetShopLeave1() const;
		std::string& GetShopLeave1();
		void SetShopLeave1(const std::string& shop_leave1);

		const std::string& GetShopBuySelect1() const;
		std::string& GetShopBuySelect1();
		void SetShopBuySelect1(const std::string& shop_buy_select1);

		const std::string& GetShopBuyNumber1() const;
		std::string& GetShopBuyNumber1();
		void SetShopBuyNumber1(const std::string& shop_buy_number1);

		const std::string& GetShopPurchased1() const;
		std::string& GetShopPurchased1();
		void SetShopPurchased1(const std::string& shop_purchased1);

		const std::string& GetShopSellSelect1() const;
		std::string& GetShopSellSelect1();
		void SetShopSellSelect1(const std::string& shop_sell_select1);

		const std::string& GetShopSellNumber1() const;
		std::string& GetShopSellNumber1();
		void SetShopSellNumber1(const std::string& shop_sell_number1);

		const std::string& GetShopSold1() const;
		std::string& GetShopSold1();
		void SetShopSold1(const std::string& shop_sold1);

		const std::string& GetShopGreeting2() const;
		std::string& GetShopGreeting2();
		void SetShopGreeting2(const std::string& shop_greeting2);

		const std::string& GetShopRegreeting2() const;
		std::string& GetShopRegreeting2();
		void SetShopRegreeting2(const std::string& shop_regreeting2);

		const std::string& GetShopBuy2() const;
		std::string& GetShopBuy2();
		void SetShopBuy2(const std::string& shop_buy2);

		const std::string& GetShopSell2() const;
		std::string& GetShopSell2();
		void SetShopSell2(const std::string& shop_sell2);

		const std::string& GetShopLeave2() const;
		std::string& GetShopLeave2();
		void SetShopLeave2(const std::string& shop_leave2);

		const std::string& GetShopBuySelect2() const;
		std::string& GetShopBuySelect2();
		void SetShopBuySelect2(const std::string& shop_buy_select2);

		const std::string& GetShopBuyNumber2() const;
		std::string& GetShopBuyNumber2();
		void SetShopBuyNumber2(const std::string& shop_buy_number2);

		const std::string& GetShopPurchased2() const;
		std::string& GetShopPurchased2();
		void SetShopPurchased2(const std::string& shop_purchased2);

		const std::string& GetShopSellSelect2() const;
		std::string& GetShopSellSelect2();
		void SetShopSellSelect2(const std::string& shop_sell_select2);

		const std::string& GetShopSellNumber2() const;
		std::string& GetShopSellNumber2();
		void SetShopSellNumber2(const std::string& shop_sell_number2);

		const std::string& GetShopSold2() const;
		std::string& GetShopSold2();
		void SetShopSold2(const std::string& shop_sold2);

		const std::string& GetShopGreeting3() const;
		std::string& GetShopGreeting3();
		void SetShopGreeting3(const std::string& shop_greeting3);

		const std::string& GetShopRegreeting3() const;
		std::string& GetShopRegreeting3();
		void SetShopRegreeting3(const std::string& shop_regreeting3);

		const std::string& GetShopBuy3() const;
		std::string& GetShopBuy3();
		void SetShopBuy3(const std::string& shop_buy3);

		const std::string& GetShopSell3() const;
		std::string& GetShopSell3();
		void SetShopSell3(const std::string& shop_sell3);

		const std::string& GetShopLeave3() const;
		std::string& GetShopLeave3();
		void SetShopLeave3(const std::string& shop_leave3);

		const std::string& GetShopBuySelect3() const;
		std::string& GetShopBuySelect3();
		void SetShopBuySelect3(const std::string& shop_buy_select3);

		const std::string& GetShopBuyNumber3() const;
		std::string& GetShopBuyNumber3();
		void SetShopBuyNumber3(const std::string& shop_buy_number3);

		const std::string& GetShopPurchased3() const;
		std::string& GetShopPurchased3();
		void SetShopPurchased3(const std::string& shop_purchased3);

		const std::string& GetShopSellSelect3() const;
		std::string& GetShopSellSelect3();
		void SetShopSellSelect3(const std::string& shop_sell_select3);

		const std::string& GetShopSellNumber3() const;
		std::string& GetShopSellNumber3();
		void SetShopSellNumber3(const std::string& shop_sell_number3);

		const std::string& GetShopSold3() const;
		std::string& GetShopSold3();
		void SetShopSold3(const std::string& shop_sold3);

		const std::string& GetInnAGreeting1() const;
		std::string& GetInnAGreeting1();
		void SetInnAGreeting1(const std::string& inn_a_greeting_1);

		const std::string& GetInnAGreeting2() const;
		std::string& GetInnAGreeting2();
		void SetInnAGreeting2(const std::string& inn_a_greeting_2);

		const std::string& GetInnAGreeting3() const;
		std::string& GetInnAGreeting3();
		void SetInnAGreeting3(const std::string& inn_a_greeting_3);

		const std::string& GetInnAAccept() const;
		std::string& GetInnAAccept();
		void SetInnAAccept(const std::string& inn_a_accept);

		const std::string& GetInnACancel() const;
		std::string& GetInnACancel();
		void SetInnACancel(const std::string& inn_a_cancel);

		const std::string& GetInnBGreeting1() const;
		std::string& GetInnBGreeting1();
		void SetInnBGreeting1(const std::string& inn_b_greeting_1);

		const std::string& GetInnBGreeting2() const;
		std::string& GetInnBGreeting2();
		void SetInnBGreeting2(const std::string& inn_b_greeting_2);

		const std::string& GetInnBGreeting3() const;
		std::string& GetInnBGreeting3();
		void SetInnBGreeting3(const std::string& inn_b_greeting_3);

		const std::string& GetInnBAccept() const;
		std::string& GetInnBAccept();
		void SetInnBAccept(const std::string& inn_b_accept);

		const std::string& GetInnBCancel() const;
		std::string& GetInnBCancel();
		void SetInnBCancel(const std::string& inn_b_cancel);

		const std::string& GetPossessedItems() const;
		std::string& GetPossessedItems();
		void SetPossessedItems(const std::string& possessed_items);

		const std::string& GetEquippedItems() const;
		std::string& GetEquippedItems();
		void SetEquippedItems(const std::string& equipped_items);

		const std::string& GetGold() const;
		std::string& GetGold();
		void SetGold(const std::string& gold);

		const std::string& GetBattleFight() const;
		std::string& GetBattleFight();
		void SetBattleFight(const std::string& battle_fight);

		const std::string& GetBattleAuto() const;
		std::string& GetBattleAuto();
		void SetBattleAuto(const std::string& battle_auto);

		const std::string& GetBattleEscape() const;
		std::string& GetBattleEscape();
		void SetBattleEscape(const std::string& battle_escape);

		const std::string& GetCommandAttack() const;
		std::string& GetCommandAttack();
		void SetCommandAttack(const std::string& command_attack);

		const std::string& GetCommandDefend() const;
		std::string& GetCommandDefend();
		void SetCommandDefend(const std::string& command_defend);

		const std::string& GetCommandItem() const;
		std::string& GetCommandItem();
		void SetCommandItem(const std::string& command_item);

		const std::string& GetCommandSkill() const;
		std::string& GetCommandSkill();
		void SetCommandSkill(const std::string& command_skill);

		const std::string& GetMenuEquipment() const;
		std::string& GetMenuEquipment();
		void SetMenuEquipment(const std::string& menu_equipment);

		const std::string& GetMenuSave() const;
		std::string& GetMenuSave();
		void SetMenuSave(const std::string& menu_save);

		const std::string& GetMenuQuit() const;
		std::string& GetMenuQuit();
		void SetMenuQuit(const std::string& menu_quit);

		const std::string& GetNewGame() const;
		std::string& GetNewGame();
		void SetNewGame(const std::string& new_game);

		const std::string& GetLoadGame() const;
		std::string& GetLoadGame();
		void SetLoadGame(const std::string& load_game);

		const std::string& GetExitGame() const;
		std::string& GetExitGame();
		void SetExitGame(const std::string& exit_game);

		const std::string& GetStatus() const;
		std::string& GetStatus();
		void SetStatus(const std::string& status);

		const std::string& GetRow() const;
		std::string& GetRow();
		void SetRow(const std::string& row);

		const std::string& GetOrder() const;
		std::string& GetOrder();
		void SetOrder(const std::string& order);

		const std::string& GetWaitOn() const;
		std::string& GetWaitOn();
		void SetWaitOn(const std::string& wait_on);

		const std::string& GetWaitOff() const;
		std::string& GetWaitOff();
		void SetWaitOff(const std::string& wait_off);

		const std::string& GetLevel() const;
		std::string& GetLevel();
		void SetLevel(const std::string& level);

		const std::string& GetHealthPoints() const;
		std::string& GetHealthPoints();
		void SetHealthPoints(const std::string& health_points);

		const std::string& GetSpiritPoints() const;
		std::string& GetSpiritPoints();
		void SetSpiritPoints(const std::string& spirit_points);

		const std::string& GetNormalStatus() const;
		std::string& GetNormalStatus();
		void SetNormalStatus(const std::string& normal_status);

		const std::string& GetExpShort() const;
		std::string& GetExpShort();
		void SetExpShort(const std::string& exp_short);

		const std::string& GetLvlShort() const;
		std::string& GetLvlShort();
		void SetLvlShort(const std::string& lvl_short);

		const std::string& GetHpShort() const;
		std::string& GetHpShort();
		void SetHpShort(const std::string& hp_short);

		const std::string& GetSpShort() const;
		std::string& GetSpShort();
		void SetSpShort(const std::string& sp_short);

		const std::string& GetSpCost() const;
		std::string& GetSpCost();
		void SetSpCost(const std::string& sp_cost);

		const std::string& GetAttack() const;
		std::string& GetAttack();
		void SetAttack(const std::string& attack);

		const std::string& GetDefense() const;
		std::string& GetDefense();
		void SetDefense(const std::string& defense);

		const std::string& GetSpirit() const;
		std::string& GetSpirit();
		void SetSpirit(const std::string& spirit);

		const std::string& GetAgility() const;
		std::string& GetAgility();
		void SetAgility(const std::string& agility);

		const std::string& GetWeapon() const;
		std::string& GetWeapon();
		void SetWeapon(const std::string& weapon);

		const std::string& GetShield() const;
		std::string& GetShield();
		void SetShield(const std::string& shield);

		const std::string& GetArmor() const;
		std::string& GetArmor();
		void SetArmor(const std::string& armor);

		const std::string& GetHelmet() const;
		std::string& GetHelmet();
		void SetHelmet(const std::string& helmet);

		const std::string& GetAccessory() const;
		std::string& GetAccessory();
		void SetAccessory(const std::string& accessory);

		const std::string& GetSaveGameMessage() const;
		std::string& GetSaveGameMessage();
		void SetSaveGameMessage(const std::string& save_game_message);

		const std::string& GetLoadGameMessage() const;
		std::string& GetLoadGameMessage();
		void SetLoadGameMessage(const std::string& load_game_message);

		const std::string& GetFile() const;
		std::string& GetFile();
		void SetFile(const std::string& file);

		const std::string& GetExitGameMessage() const;
		std::string& GetExitGameMessage();
		void SetExitGameMessage(const std::string& exit_game_message);

		const std::string& GetYes() const;
		std::string& GetYes();
		void SetYes(const std::string& yes);

		const std::string& GetNo() const;
		std::string& GetNo();
		void SetNo(const std::string& no);

	};
}

#endif
