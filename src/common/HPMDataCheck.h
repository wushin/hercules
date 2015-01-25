// Copyright (c) Hercules Dev Team, licensed under GNU GPL.
// See the LICENSE file
//
// NOTE: This file was auto-generated and should never be manually edited,
//       as it will get overwritten.
#ifndef HPM_DATA_CHECK_H
#define HPM_DATA_CHECK_H


HPExport const struct s_HPMDataCheck HPMDataCheck[] = {
	#ifdef CHAR_CHAR_H
		{ "char_interface", sizeof(struct char_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_CHAR_H
	#endif // CHAR_CHAR_H
	#ifdef CHAR_GEOIP_H
		{ "geoip_interface", sizeof(struct geoip_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_GEOIP_H
	#endif // CHAR_GEOIP_H
	#ifdef CHAR_INTER_H
		{ "inter_interface", sizeof(struct inter_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INTER_H
	#endif // CHAR_INTER_H
	#ifdef CHAR_INT_AUCTION_H
		{ "inter_auction_interface", sizeof(struct inter_auction_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_AUCTION_H
	#endif // CHAR_INT_AUCTION_H
	#ifdef CHAR_INT_ELEMENTAL_H
		{ "inter_elemental_interface", sizeof(struct inter_elemental_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_ELEMENTAL_H
	#endif // CHAR_INT_ELEMENTAL_H
	#ifdef CHAR_INT_GUILD_H
		{ "inter_guild_interface", sizeof(struct inter_guild_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_GUILD_H
	#endif // CHAR_INT_GUILD_H
	#ifdef CHAR_INT_HOMUN_H
		{ "inter_homunculus_interface", sizeof(struct inter_homunculus_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_HOMUN_H
	#endif // CHAR_INT_HOMUN_H
	#ifdef CHAR_INT_MAIL_H
		{ "inter_mail_interface", sizeof(struct inter_mail_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_MAIL_H
	#endif // CHAR_INT_MAIL_H
	#ifdef CHAR_INT_MERCENARY_H
		{ "inter_mercenary_interface", sizeof(struct inter_mercenary_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_MERCENARY_H
	#endif // CHAR_INT_MERCENARY_H
	#ifdef CHAR_INT_PARTY_H
		{ "inter_party_interface", sizeof(struct inter_party_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_PARTY_H
	#endif // CHAR_INT_PARTY_H
	#ifdef CHAR_INT_PET_H
		{ "inter_pet_interface", sizeof(struct inter_pet_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_PET_H
	#endif // CHAR_INT_PET_H
	#ifdef CHAR_INT_QUEST_H
		{ "inter_quest_interface", sizeof(struct inter_quest_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_QUEST_H
	#endif // CHAR_INT_QUEST_H
	#ifdef CHAR_INT_STORAGE_H
		{ "inter_storage_interface", sizeof(struct inter_storage_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_INT_STORAGE_H
	#endif // CHAR_INT_STORAGE_H
	#ifdef CHAR_LOGINIF_H
		{ "loginif_interface", sizeof(struct loginif_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_LOGINIF_H
	#endif // CHAR_LOGINIF_H
	#ifdef CHAR_MAPIF_H
		{ "mapif_interface", sizeof(struct mapif_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_MAPIF_H
	#endif // CHAR_MAPIF_H
	#ifdef CHAR_PINCODE_H
		{ "pincode_interface", sizeof(struct pincode_interface), SERVER_TYPE_CHAR },
	#else
		#define CHAR_PINCODE_H
	#endif // CHAR_PINCODE_H
	#ifdef COMMON_CONF_H
		{ "libconfig_interface", sizeof(struct libconfig_interface), SERVER_TYPE_ALL },
	#else
		#define COMMON_CONF_H
	#endif // COMMON_CONF_H
	#ifdef COMMON_DB_H
		{ "DBIterator", sizeof(struct DBIterator), SERVER_TYPE_ALL },
		{ "DBMap", sizeof(struct DBMap), SERVER_TYPE_ALL },
	#else
		#define COMMON_DB_H
	#endif // COMMON_DB_H
	#ifdef COMMON_ERS_H
		{ "eri", sizeof(struct eri), SERVER_TYPE_ALL },
	#else
		#define COMMON_ERS_H
	#endif // COMMON_ERS_H
	#ifdef COMMON_MAPINDEX_H
		{ "mapindex_interface", sizeof(struct mapindex_interface), SERVER_TYPE_ALL },
	#else
		#define COMMON_MAPINDEX_H
	#endif // COMMON_MAPINDEX_H
	#ifdef COMMON_SOCKET_H
		{ "socket_interface", sizeof(struct socket_interface), SERVER_TYPE_ALL },
	#else
		#define COMMON_SOCKET_H
	#endif // COMMON_SOCKET_H
	#ifdef COMMON_STRLIB_H
		{ "stringbuf_interface", sizeof(struct stringbuf_interface), SERVER_TYPE_ALL },
		{ "strlib_interface", sizeof(struct strlib_interface), SERVER_TYPE_ALL },
		{ "sv_interface", sizeof(struct sv_interface), SERVER_TYPE_ALL },
	#else
		#define COMMON_STRLIB_H
	#endif // COMMON_STRLIB_H
	#ifdef COMMON_SYSINFO_H
		{ "sysinfo_interface", sizeof(struct sysinfo_interface), SERVER_TYPE_ALL },
	#else
		#define COMMON_SYSINFO_H
	#endif // COMMON_SYSINFO_H
	#ifdef LOGIN_LOGIN_H
		{ "login_interface", sizeof(struct login_interface), SERVER_TYPE_LOGIN },
	#else
		#define LOGIN_LOGIN_H
	#endif // LOGIN_LOGIN_H
	#ifdef MAP_ATCOMMAND_H
		{ "atcommand_interface", sizeof(struct atcommand_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_ATCOMMAND_H
	#endif // MAP_ATCOMMAND_H
	#ifdef MAP_BATTLEGROUND_H
		{ "battleground_interface", sizeof(struct battleground_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_BATTLEGROUND_H
	#endif // MAP_BATTLEGROUND_H
	#ifdef MAP_BATTLE_H
		{ "battle_interface", sizeof(struct battle_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_BATTLE_H
	#endif // MAP_BATTLE_H
	#ifdef MAP_BUYINGSTORE_H
		{ "buyingstore_interface", sizeof(struct buyingstore_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_BUYINGSTORE_H
	#endif // MAP_BUYINGSTORE_H
	#ifdef MAP_CHANNEL_H
		{ "channel_interface", sizeof(struct channel_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_CHANNEL_H
	#endif // MAP_CHANNEL_H
	#ifdef MAP_CHAT_H
		{ "chat_interface", sizeof(struct chat_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_CHAT_H
	#endif // MAP_CHAT_H
	#ifdef MAP_CHRIF_H
		{ "chrif_interface", sizeof(struct chrif_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_CHRIF_H
	#endif // MAP_CHRIF_H
	#ifdef MAP_CLIF_H
		{ "clif_interface", sizeof(struct clif_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_CLIF_H
	#endif // MAP_CLIF_H
	#ifdef MAP_DUEL_H
		{ "duel_interface", sizeof(struct duel_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_DUEL_H
	#endif // MAP_DUEL_H
	#ifdef MAP_ELEMENTAL_H
		{ "elemental_skill", sizeof(struct elemental_skill), SERVER_TYPE_MAP },
	#else
		#define MAP_ELEMENTAL_H
	#endif // MAP_ELEMENTAL_H
	#ifdef MAP_GUILD_H
		{ "guild_interface", sizeof(struct guild_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_GUILD_H
	#endif // MAP_GUILD_H
	#ifdef MAP_HOMUNCULUS_H
		{ "homunculus_interface", sizeof(struct homunculus_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_HOMUNCULUS_H
	#endif // MAP_HOMUNCULUS_H
	#ifdef MAP_INSTANCE_H
		{ "instance_interface", sizeof(struct instance_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_INSTANCE_H
	#endif // MAP_INSTANCE_H
	#ifdef MAP_IRC_BOT_H
		{ "irc_bot_interface", sizeof(struct irc_bot_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_IRC_BOT_H
	#endif // MAP_IRC_BOT_H
	#ifdef MAP_ITEMDB_H
		{ "itemdb_interface", sizeof(struct itemdb_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_ITEMDB_H
	#endif // MAP_ITEMDB_H
	#ifdef MAP_LOG_H
		{ "log_interface", sizeof(struct log_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_LOG_H
	#endif // MAP_LOG_H
	#ifdef MAP_MAIL_H
		{ "mail_interface", sizeof(struct mail_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_MAIL_H
	#endif // MAP_MAIL_H
	#ifdef MAP_MAPREG_H
		{ "mapreg_interface", sizeof(struct mapreg_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_MAPREG_H
	#endif // MAP_MAPREG_H
	#ifdef MAP_MAP_H
		{ "map_interface", sizeof(struct map_interface), SERVER_TYPE_MAP },
		{ "mapit_interface", sizeof(struct mapit_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_MAP_H
	#endif // MAP_MAP_H
	#ifdef MAP_MERCENARY_H
		{ "mercenary_interface", sizeof(struct mercenary_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_MERCENARY_H
	#endif // MAP_MERCENARY_H
	#ifdef MAP_MOB_H
		{ "mob_interface", sizeof(struct mob_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_MOB_H
	#endif // MAP_MOB_H
	#ifdef MAP_NPC_H
		{ "npc_interface", sizeof(struct npc_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_NPC_H
	#endif // MAP_NPC_H
	#ifdef MAP_PARTY_H
		{ "party_interface", sizeof(struct party_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_PARTY_H
	#endif // MAP_PARTY_H
	#ifdef MAP_PATH_H
		{ "path_interface", sizeof(struct path_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_PATH_H
	#endif // MAP_PATH_H
	#ifdef MAP_PC_GROUPS_H
		{ "pc_groups_interface", sizeof(struct pc_groups_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_PC_GROUPS_H
	#endif // MAP_PC_GROUPS_H
	#ifdef MAP_PC_H
		{ "item_cd", sizeof(struct item_cd), SERVER_TYPE_MAP },
		{ "pc_interface", sizeof(struct pc_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_PC_H
	#endif // MAP_PC_H
	#ifdef MAP_PET_H
		{ "pet_interface", sizeof(struct pet_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_PET_H
	#endif // MAP_PET_H
	#ifdef MAP_QUEST_H
		{ "quest_interface", sizeof(struct quest_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_QUEST_H
	#endif // MAP_QUEST_H
	#ifdef MAP_SCRIPT_H
		{ "script_interface", sizeof(struct script_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_SCRIPT_H
	#endif // MAP_SCRIPT_H
	#ifdef MAP_SEARCHSTORE_H
		{ "searchstore_interface", sizeof(struct searchstore_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_SEARCHSTORE_H
	#endif // MAP_SEARCHSTORE_H
	#ifdef MAP_SKILL_H
		{ "skill_interface", sizeof(struct skill_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_SKILL_H
	#endif // MAP_SKILL_H
	#ifdef MAP_STATUS_H
		{ "status_interface", sizeof(struct status_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_STATUS_H
	#endif // MAP_STATUS_H
	#ifdef MAP_STORAGE_H
		{ "guild_storage_interface", sizeof(struct guild_storage_interface), SERVER_TYPE_MAP },
		{ "storage_interface", sizeof(struct storage_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_STORAGE_H
	#endif // MAP_STORAGE_H
	#ifdef MAP_TRADE_H
		{ "trade_interface", sizeof(struct trade_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_TRADE_H
	#endif // MAP_TRADE_H
	#ifdef MAP_UNIT_H
		{ "unit_interface", sizeof(struct unit_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_UNIT_H
	#endif // MAP_UNIT_H
	#ifdef MAP_VENDING_H
		{ "vending_interface", sizeof(struct vending_interface), SERVER_TYPE_MAP },
	#else
		#define MAP_VENDING_H
	#endif // MAP_VENDING_H
};
HPExport unsigned int HPMDataCheckLen = ARRAYLENGTH(HPMDataCheck);
HPExport int HPMDataCheckVer = 1;

#endif /* HPM_DATA_CHECK_H */
