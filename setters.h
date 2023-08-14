/**
 * File              : setters.h
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 14.08.2023
 * Last Modified Date: 14.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */
#ifndef VK_SETTERS_H
#define VK_SETTERS_H
#include "structures.h"
#include <string.h>

static void groups_address_set_additional_address(groups_address_t *object, const char * value){
	object->additional_address_ = strdup(value);
}

static const char * groups_address_get_additional_address(groups_address_t *object){
	return object->additional_address_;
}

static void groups_address_set_address(groups_address_t *object, const char * value){
	object->address_ = strdup(value);
}

static const char * groups_address_get_address(groups_address_t *object){
	return object->address_;
}

static void groups_address_set_city_id(groups_address_t *object, int value){
	object->city_id_ = value;
}

static int groups_address_get_city_id(groups_address_t *object){
	return object->city_id_;
}

static void groups_address_set_country_id(groups_address_t *object, int value){
	object->country_id_ = value;
}

static int groups_address_get_country_id(groups_address_t *object){
	return object->country_id_;
}

static void groups_address_set_distance(groups_address_t *object, int value){
	object->distance_ = value;
}

static int groups_address_get_distance(groups_address_t *object){
	return object->distance_;
}

static void groups_address_set_id(groups_address_t *object, int value){
	object->id_ = value;
}

static int groups_address_get_id(groups_address_t *object){
	return object->id_;
}

static void groups_address_set_metro_station_id(groups_address_t *object, int value){
	object->metro_station_id_ = value;
}

static int groups_address_get_metro_station_id(groups_address_t *object){
	return object->metro_station_id_;
}

static void groups_address_set_phone(groups_address_t *object, const char * value){
	object->phone_ = strdup(value);
}

static const char * groups_address_get_phone(groups_address_t *object){
	return object->phone_;
}

static void groups_address_set_time_offset(groups_address_t *object, int value){
	object->time_offset_ = value;
}

static int groups_address_get_time_offset(groups_address_t *object){
	return object->time_offset_;
}

static void groups_address_set_timetable(groups_address_t *object, groups_address_timetable_t value){
	object->timetable_ = value;
}

static groups_address_timetable_t groups_address_get_timetable(groups_address_t *object){
	return object->timetable_;
}

static void groups_address_set_title(groups_address_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * groups_address_get_title(groups_address_t *object){
	return object->title_;
}

static void groups_address_set_work_info_status(groups_address_t *object, groups_address_work_info_status_t value){
	object->work_info_status_ = value;
}

static groups_address_work_info_status_t groups_address_get_work_info_status(groups_address_t *object){
	return object->work_info_status_;
}

static void groups_address_set_place_id(groups_address_t *object, int value){
	object->place_id_ = value;
}

static int groups_address_get_place_id(groups_address_t *object){
	return object->place_id_;
}

static void groups_address_timetable_set_fri(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->fri_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_fri(groups_address_timetable_t *object){
	return object->fri_;
}

static void groups_address_timetable_set_mon(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->mon_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_mon(groups_address_timetable_t *object){
	return object->mon_;
}

static void groups_address_timetable_set_sat(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->sat_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_sat(groups_address_timetable_t *object){
	return object->sat_;
}

static void groups_address_timetable_set_sun(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->sun_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_sun(groups_address_timetable_t *object){
	return object->sun_;
}

static void groups_address_timetable_set_thu(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->thu_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_thu(groups_address_timetable_t *object){
	return object->thu_;
}

static void groups_address_timetable_set_tue(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->tue_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_tue(groups_address_timetable_t *object){
	return object->tue_;
}

static void groups_address_timetable_set_wed(groups_address_timetable_t *object, groups_address_timetable_day_t value){
	object->wed_ = value;
}

static groups_address_timetable_day_t groups_address_timetable_get_wed(groups_address_timetable_t *object){
	return object->wed_;
}

static void groups_address_timetable_day_set_break_close_time(groups_address_timetable_day_t *object, int value){
	object->break_close_time_ = value;
}

static int groups_address_timetable_day_get_break_close_time(groups_address_timetable_day_t *object){
	return object->break_close_time_;
}

static void groups_address_timetable_day_set_break_open_time(groups_address_timetable_day_t *object, int value){
	object->break_open_time_ = value;
}

static int groups_address_timetable_day_get_break_open_time(groups_address_timetable_day_t *object){
	return object->break_open_time_;
}

static void groups_address_timetable_day_set_close_time(groups_address_timetable_day_t *object, int value){
	object->close_time_ = value;
}

static int groups_address_timetable_day_get_close_time(groups_address_timetable_day_t *object){
	return object->close_time_;
}

static void groups_address_timetable_day_set_open_time(groups_address_timetable_day_t *object, int value){
	object->open_time_ = value;
}

static int groups_address_timetable_day_get_open_time(groups_address_timetable_day_t *object){
	return object->open_time_;
}

static void groups_addresses_info_set_is_enabled(groups_addresses_info_t *object, bool value){
	object->is_enabled_ = value;
}

static bool groups_addresses_info_get_is_enabled(groups_addresses_info_t *object){
	return object->is_enabled_;
}

static void groups_addresses_info_set_main_address_id(groups_addresses_info_t *object, int value){
	object->main_address_id_ = value;
}

static int groups_addresses_info_get_main_address_id(groups_addresses_info_t *object){
	return object->main_address_id_;
}

static void groups_ban_info_set_admin_id(groups_ban_info_t *object, int value){
	object->admin_id_ = value;
}

static int groups_ban_info_get_admin_id(groups_ban_info_t *object){
	return object->admin_id_;
}

static void groups_ban_info_set_comment(groups_ban_info_t *object, const char * value){
	object->comment_ = strdup(value);
}

static const char * groups_ban_info_get_comment(groups_ban_info_t *object){
	return object->comment_;
}

static void groups_ban_info_set_comment_visible(groups_ban_info_t *object, bool value){
	object->comment_visible_ = value;
}

static bool groups_ban_info_get_comment_visible(groups_ban_info_t *object){
	return object->comment_visible_;
}

static void groups_ban_info_set_is_closed(groups_ban_info_t *object, bool value){
	object->is_closed_ = value;
}

static bool groups_ban_info_get_is_closed(groups_ban_info_t *object){
	return object->is_closed_;
}

static void groups_ban_info_set_date(groups_ban_info_t *object, int value){
	object->date_ = value;
}

static int groups_ban_info_get_date(groups_ban_info_t *object){
	return object->date_;
}

static void groups_ban_info_set_end_date(groups_ban_info_t *object, int value){
	object->end_date_ = value;
}

static int groups_ban_info_get_end_date(groups_ban_info_t *object){
	return object->end_date_;
}

static void groups_ban_info_set_reason(groups_ban_info_t *object, groups_ban_info_reason_t value){
	object->reason_ = value;
}

static groups_ban_info_reason_t groups_ban_info_get_reason(groups_ban_info_t *object){
	return object->reason_;
}

static void groups_callback_server_set_id(groups_callback_server_t *object, int value){
	object->id_ = value;
}

static int groups_callback_server_get_id(groups_callback_server_t *object){
	return object->id_;
}

static void groups_callback_server_set_title(groups_callback_server_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * groups_callback_server_get_title(groups_callback_server_t *object){
	return object->title_;
}

static void groups_callback_server_set_creator_id(groups_callback_server_t *object, int value){
	object->creator_id_ = value;
}

static int groups_callback_server_get_creator_id(groups_callback_server_t *object){
	return object->creator_id_;
}

static void groups_callback_server_set_url(groups_callback_server_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * groups_callback_server_get_url(groups_callback_server_t *object){
	return object->url_;
}

static void groups_callback_server_set_secret_key(groups_callback_server_t *object, const char * value){
	object->secret_key_ = strdup(value);
}

static const char * groups_callback_server_get_secret_key(groups_callback_server_t *object){
	return object->secret_key_;
}

static void groups_callback_server_set_status(groups_callback_server_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * groups_callback_server_get_status(groups_callback_server_t *object){
	return object->status_;
}

static void groups_callback_settings_set_api_version(groups_callback_settings_t *object, const char * value){
	object->api_version_ = strdup(value);
}

static const char * groups_callback_settings_get_api_version(groups_callback_settings_t *object){
	return object->api_version_;
}

static void groups_callback_settings_set_events(groups_callback_settings_t *object, groups_long_poll_events_t value){
	object->events_ = value;
}

static groups_long_poll_events_t groups_callback_settings_get_events(groups_callback_settings_t *object){
	return object->events_;
}

static void groups_contacts_item_set_user_id(groups_contacts_item_t *object, int64 value){
	object->user_id_ = value;
}

static int64 groups_contacts_item_get_user_id(groups_contacts_item_t *object){
	return object->user_id_;
}

static void groups_contacts_item_set_desc(groups_contacts_item_t *object, const char * value){
	object->desc_ = strdup(value);
}

static const char * groups_contacts_item_get_desc(groups_contacts_item_t *object){
	return object->desc_;
}

static void groups_contacts_item_set_phone(groups_contacts_item_t *object, const char * value){
	object->phone_ = strdup(value);
}

static const char * groups_contacts_item_get_phone(groups_contacts_item_t *object){
	return object->phone_;
}

static void groups_contacts_item_set_email(groups_contacts_item_t *object, const char * value){
	object->email_ = strdup(value);
}

static const char * groups_contacts_item_get_email(groups_contacts_item_t *object){
	return object->email_;
}

static void groups_counters_group_set_addresses(groups_counters_group_t *object, int value){
	object->addresses_ = value;
}

static int groups_counters_group_get_addresses(groups_counters_group_t *object){
	return object->addresses_;
}

static void groups_counters_group_set_albums(groups_counters_group_t *object, int value){
	object->albums_ = value;
}

static int groups_counters_group_get_albums(groups_counters_group_t *object){
	return object->albums_;
}

static void groups_counters_group_set_audios(groups_counters_group_t *object, int value){
	object->audios_ = value;
}

static int groups_counters_group_get_audios(groups_counters_group_t *object){
	return object->audios_;
}

static void groups_counters_group_set_audio_playlists(groups_counters_group_t *object, int value){
	object->audio_playlists_ = value;
}

static int groups_counters_group_get_audio_playlists(groups_counters_group_t *object){
	return object->audio_playlists_;
}

static void groups_counters_group_set_docs(groups_counters_group_t *object, int value){
	object->docs_ = value;
}

static int groups_counters_group_get_docs(groups_counters_group_t *object){
	return object->docs_;
}

static void groups_counters_group_set_market(groups_counters_group_t *object, int value){
	object->market_ = value;
}

static int groups_counters_group_get_market(groups_counters_group_t *object){
	return object->market_;
}

static void groups_counters_group_set_photos(groups_counters_group_t *object, int value){
	object->photos_ = value;
}

static int groups_counters_group_get_photos(groups_counters_group_t *object){
	return object->photos_;
}

static void groups_counters_group_set_topics(groups_counters_group_t *object, int value){
	object->topics_ = value;
}

static int groups_counters_group_get_topics(groups_counters_group_t *object){
	return object->topics_;
}

static void groups_counters_group_set_videos(groups_counters_group_t *object, int value){
	object->videos_ = value;
}

static int groups_counters_group_get_videos(groups_counters_group_t *object){
	return object->videos_;
}

static void groups_counters_group_set_market_services(groups_counters_group_t *object, int value){
	object->market_services_ = value;
}

static int groups_counters_group_get_market_services(groups_counters_group_t *object){
	return object->market_services_;
}

static void groups_counters_group_set_podcasts(groups_counters_group_t *object, int value){
	object->podcasts_ = value;
}

static int groups_counters_group_get_podcasts(groups_counters_group_t *object){
	return object->podcasts_;
}

static void groups_counters_group_set_articles(groups_counters_group_t *object, int value){
	object->articles_ = value;
}

static int groups_counters_group_get_articles(groups_counters_group_t *object){
	return object->articles_;
}

static void groups_counters_group_set_narratives(groups_counters_group_t *object, int value){
	object->narratives_ = value;
}

static int groups_counters_group_get_narratives(groups_counters_group_t *object){
	return object->narratives_;
}

static void groups_counters_group_set_clips(groups_counters_group_t *object, int value){
	object->clips_ = value;
}

static int groups_counters_group_get_clips(groups_counters_group_t *object){
	return object->clips_;
}

static void groups_counters_group_set_clips_followers(groups_counters_group_t *object, int value){
	object->clips_followers_ = value;
}

static int groups_counters_group_get_clips_followers(groups_counters_group_t *object){
	return object->clips_followers_;
}

static void groups_cover_set_enabled(groups_cover_t *object, base_bool_int_t value){
	object->enabled_ = value;
}

static base_bool_int_t groups_cover_get_enabled(groups_cover_t *object){
	return object->enabled_;
}

static void groups_cover_set_images(groups_cover_t *object, base_image * value, int len){
int i;
	object->images_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len;++i){
		object->images[i] = value[i];
	}
	//NULL-terminate array
	object->images[i] = NULL;
}

static base_image * groups_cover_get_images(groups_cover_t *object){
	return object->images_;
}

static void groups_group_set_id(groups_group_t *object, int64 value){
	object->id_ = value;
}

static int64 groups_group_get_id(groups_group_t *object){
	return object->id_;
}

static void groups_group_set_name(groups_group_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_group_get_name(groups_group_t *object){
	return object->name_;
}

static void groups_group_set_screen_name(groups_group_t *object, const char * value){
	object->screen_name_ = strdup(value);
}

static const char * groups_group_get_screen_name(groups_group_t *object){
	return object->screen_name_;
}

static void groups_group_set_is_closed(groups_group_t *object, groups_group_is_closed_t value){
	object->is_closed_ = value;
}

static groups_group_is_closed_t groups_group_get_is_closed(groups_group_t *object){
	return object->is_closed_;
}

static void groups_group_set_type(groups_group_t *object, groups_group_type_t value){
	object->type_ = value;
}

static groups_group_type_t groups_group_get_type(groups_group_t *object){
	return object->type_;
}

static void groups_group_set_is_admin(groups_group_t *object, base_bool_int_t value){
	object->is_admin_ = value;
}

static base_bool_int_t groups_group_get_is_admin(groups_group_t *object){
	return object->is_admin_;
}

static void groups_group_set_admin_level(groups_group_t *object, groups_group_admin_level_t value){
	object->admin_level_ = value;
}

static groups_group_admin_level_t groups_group_get_admin_level(groups_group_t *object){
	return object->admin_level_;
}

static void groups_group_set_is_member(groups_group_t *object, base_bool_int_t value){
	object->is_member_ = value;
}

static base_bool_int_t groups_group_get_is_member(groups_group_t *object){
	return object->is_member_;
}

static void groups_group_set_is_advertiser(groups_group_t *object, base_bool_int_t value){
	object->is_advertiser_ = value;
}

static base_bool_int_t groups_group_get_is_advertiser(groups_group_t *object){
	return object->is_advertiser_;
}

static void groups_group_set_start_date(groups_group_t *object, int value){
	object->start_date_ = value;
}

static int groups_group_get_start_date(groups_group_t *object){
	return object->start_date_;
}

static void groups_group_set_finish_date(groups_group_t *object, int value){
	object->finish_date_ = value;
}

static int groups_group_get_finish_date(groups_group_t *object){
	return object->finish_date_;
}

static void groups_group_set_deactivated(groups_group_t *object, const char * value){
	object->deactivated_ = strdup(value);
}

static const char * groups_group_get_deactivated(groups_group_t *object){
	return object->deactivated_;
}

static void groups_group_set_photo_50(groups_group_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * groups_group_get_photo_50(groups_group_t *object){
	return object->photo_50_;
}

static void groups_group_set_photo_100(groups_group_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * groups_group_get_photo_100(groups_group_t *object){
	return object->photo_100_;
}

static void groups_group_set_photo_200(groups_group_t *object, const char * value){
	object->photo_200_ = strdup(value);
}

static const char * groups_group_get_photo_200(groups_group_t *object){
	return object->photo_200_;
}

static void groups_group_set_photo_200_orig(groups_group_t *object, const char * value){
	object->photo_200_orig_ = strdup(value);
}

static const char * groups_group_get_photo_200_orig(groups_group_t *object){
	return object->photo_200_orig_;
}

static void groups_group_set_photo_400(groups_group_t *object, const char * value){
	object->photo_400_ = strdup(value);
}

static const char * groups_group_get_photo_400(groups_group_t *object){
	return object->photo_400_;
}

static void groups_group_set_photo_400_orig(groups_group_t *object, const char * value){
	object->photo_400_orig_ = strdup(value);
}

static const char * groups_group_get_photo_400_orig(groups_group_t *object){
	return object->photo_400_orig_;
}

static void groups_group_set_photo_max(groups_group_t *object, const char * value){
	object->photo_max_ = strdup(value);
}

static const char * groups_group_get_photo_max(groups_group_t *object){
	return object->photo_max_;
}

static void groups_group_set_photo_max_orig(groups_group_t *object, const char * value){
	object->photo_max_orig_ = strdup(value);
}

static const char * groups_group_get_photo_max_orig(groups_group_t *object){
	return object->photo_max_orig_;
}

static void groups_group_set_est_date(groups_group_t *object, const char * value){
	object->est_date_ = strdup(value);
}

static const char * groups_group_get_est_date(groups_group_t *object){
	return object->est_date_;
}

static void groups_group_set_public_date_label(groups_group_t *object, const char * value){
	object->public_date_label_ = strdup(value);
}

static const char * groups_group_get_public_date_label(groups_group_t *object){
	return object->public_date_label_;
}

static void groups_group_set_photo_max_size(groups_group_t *object, groups_photo_size_t value){
	object->photo_max_size_ = value;
}

static groups_photo_size_t groups_group_get_photo_max_size(groups_group_t *object){
	return object->photo_max_size_;
}

static void groups_group_set_is_video_live_notifications_blocked(groups_group_t *object, base_bool_int_t value){
	object->is_video_live_notifications_blocked_ = value;
}

static base_bool_int_t groups_group_get_is_video_live_notifications_blocked(groups_group_t *object){
	return object->is_video_live_notifications_blocked_;
}

static void groups_group_set_video_live(groups_group_t *object, video_live_info_t value){
	object->video_live_ = value;
}

static video_live_info_t groups_group_get_video_live(groups_group_t *object){
	return object->video_live_;
}

static void groups_group_attach_set_id(groups_group_attach_t *object, int value){
	object->id_ = value;
}

static int groups_group_attach_get_id(groups_group_attach_t *object){
	return object->id_;
}

static void groups_group_attach_set_text(groups_group_attach_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * groups_group_attach_get_text(groups_group_attach_t *object){
	return object->text_;
}

static void groups_group_attach_set_status(groups_group_attach_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * groups_group_attach_get_status(groups_group_attach_t *object){
	return object->status_;
}

static void groups_group_attach_set_size(groups_group_attach_t *object, int value){
	object->size_ = value;
}

static int groups_group_attach_get_size(groups_group_attach_t *object){
	return object->size_;
}

static void groups_group_attach_set_is_favorite(groups_group_attach_t *object, bool value){
	object->is_favorite_ = value;
}

static bool groups_group_attach_get_is_favorite(groups_group_attach_t *object){
	return object->is_favorite_;
}

static void groups_group_ban_info_set_comment(groups_group_ban_info_t *object, const char * value){
	object->comment_ = strdup(value);
}

static const char * groups_group_ban_info_get_comment(groups_group_ban_info_t *object){
	return object->comment_;
}

static void groups_group_ban_info_set_end_date(groups_group_ban_info_t *object, int value){
	object->end_date_ = value;
}

static int groups_group_ban_info_get_end_date(groups_group_ban_info_t *object){
	return object->end_date_;
}

static void groups_group_ban_info_set_reason(groups_group_ban_info_t *object, groups_ban_info_reason_t value){
	object->reason_ = value;
}

static groups_ban_info_reason_t groups_group_ban_info_get_reason(groups_group_ban_info_t *object){
	return object->reason_;
}

static void groups_group_category_set_id(groups_group_category_t *object, int value){
	object->id_ = value;
}

static int groups_group_category_get_id(groups_group_category_t *object){
	return object->id_;
}

static void groups_group_category_set_name(groups_group_category_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_group_category_get_name(groups_group_category_t *object){
	return object->name_;
}

static void groups_group_category_set_subcategories(groups_group_category_t *object, base_object_with_name * value, int len){
int i;
	object->subcategories_ = malloc(len * sizeof(base_object_with_name) + 8);
	for(i=0;i<len);++i){
		object->subcategories[i] = value[i];
	}
	//NULL-terminate array
	object->subcategories[i] = NULL;
}

static base_object_with_name * groups_group_category_get_subcategories(groups_group_category_t *object){
	return object->subcategories_;
}

static void groups_group_category_full_set_id(groups_group_category_full_t *object, int value){
	object->id_ = value;
}

static int groups_group_category_full_get_id(groups_group_category_full_t *object){
	return object->id_;
}

static void groups_group_category_full_set_name(groups_group_category_full_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_group_category_full_get_name(groups_group_category_full_t *object){
	return object->name_;
}

static void groups_group_category_full_set_page_count(groups_group_category_full_t *object, int value){
	object->page_count_ = value;
}

static int groups_group_category_full_get_page_count(groups_group_category_full_t *object){
	return object->page_count_;
}

static void groups_group_category_full_set_page_previews(groups_group_category_full_t *object, groups_group * value, int len){
int i;
	object->page_previews_ = malloc(len * sizeof(groups_group) + 8);
	for(i=0;i<len);++i){
		object->page_previews[i] = value[i];
	}
	//NULL-terminate array
	object->page_previews[i] = NULL;
}

static groups_group * groups_group_category_full_get_page_previews(groups_group_category_full_t *object){
	return object->page_previews_;
}

static void groups_group_category_full_set_subcategories(groups_group_category_full_t *object, groups_group_category * value, int len){
int i;
	object->subcategories_ = malloc(len * sizeof(groups_group_category) + 8);
	for(i=0;i<len);++i){
		object->subcategories[i] = value[i];
	}
	//NULL-terminate array
	object->subcategories[i] = NULL;
}

static groups_group_category * groups_group_category_full_get_subcategories(groups_group_category_full_t *object){
	return object->subcategories_;
}

static void groups_group_category_type_set_id(groups_group_category_type_t *object, int value){
	object->id_ = value;
}

static int groups_group_category_type_get_id(groups_group_category_type_t *object){
	return object->id_;
}

static void groups_group_category_type_set_name(groups_group_category_type_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_group_category_type_get_name(groups_group_category_type_t *object){
	return object->name_;
}

static void groups_group_public_category_list_set_id(groups_group_public_category_list_t *object, int value){
	object->id_ = value;
}

static int groups_group_public_category_list_get_id(groups_group_public_category_list_t *object){
	return object->id_;
}

static void groups_group_public_category_list_set_name(groups_group_public_category_list_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_group_public_category_list_get_name(groups_group_public_category_list_t *object){
	return object->name_;
}

static void groups_group_public_category_list_set_subcategories(groups_group_public_category_list_t *object, groups_group_category_type * value, int len){
int i;
	object->subcategories_ = malloc(len * sizeof(groups_group_category_type) + 8);
	for(i=0;i<len);++i){
		object->subcategories[i] = value[i];
	}
	//NULL-terminate array
	object->subcategories[i] = NULL;
}

static groups_group_category_type * groups_group_public_category_list_get_subcategories(groups_group_public_category_list_t *object){
	return object->subcategories_;
}

static void groups_group_tag_set_id(groups_group_tag_t *object, int value){
	object->id_ = value;
}

static int groups_group_tag_get_id(groups_group_tag_t *object){
	return object->id_;
}

static void groups_group_tag_set_name(groups_group_tag_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_group_tag_get_name(groups_group_tag_t *object){
	return object->name_;
}

static void groups_group_tag_set_color(groups_group_tag_t *object, const char * value){
	object->color_ = strdup(value);
}

static const char * groups_group_tag_get_color(groups_group_tag_t *object){
	return object->color_;
}

static void groups_group_tag_set_uses(groups_group_tag_t *object, int value){
	object->uses_ = value;
}

static int groups_group_tag_get_uses(groups_group_tag_t *object){
	return object->uses_;
}

static void groups_groups_array_set_count(groups_groups_array_t *object, int value){
	object->count_ = value;
}

static int groups_groups_array_get_count(groups_groups_array_t *object){
	return object->count_;
}

static void groups_groups_array_set_items(groups_groups_array_t *object, int64 * value, int len){
int i;
	object->items_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static int64 * groups_groups_array_get_items(groups_groups_array_t *object){
	return object->items_;
}

static void groups_links_item_set_name(groups_links_item_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_links_item_get_name(groups_links_item_t *object){
	return object->name_;
}

static void groups_links_item_set_desc(groups_links_item_t *object, const char * value){
	object->desc_ = strdup(value);
}

static const char * groups_links_item_get_desc(groups_links_item_t *object){
	return object->desc_;
}

static void groups_links_item_set_edit_title(groups_links_item_t *object, base_bool_int_t value){
	object->edit_title_ = value;
}

static base_bool_int_t groups_links_item_get_edit_title(groups_links_item_t *object){
	return object->edit_title_;
}

static void groups_links_item_set_id(groups_links_item_t *object, int value){
	object->id_ = value;
}

static int groups_links_item_get_id(groups_links_item_t *object){
	return object->id_;
}

static void groups_links_item_set_photo_100(groups_links_item_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * groups_links_item_get_photo_100(groups_links_item_t *object){
	return object->photo_100_;
}

static void groups_links_item_set_photo_50(groups_links_item_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * groups_links_item_get_photo_50(groups_links_item_t *object){
	return object->photo_50_;
}

static void groups_links_item_set_url(groups_links_item_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * groups_links_item_get_url(groups_links_item_t *object){
	return object->url_;
}

static void groups_links_item_set_image_processing(groups_links_item_t *object, base_bool_int_t value){
	object->image_processing_ = value;
}

static base_bool_int_t groups_links_item_get_image_processing(groups_links_item_t *object){
	return object->image_processing_;
}

static void groups_live_covers_set_is_enabled(groups_live_covers_t *object, bool value){
	object->is_enabled_ = value;
}

static bool groups_live_covers_get_is_enabled(groups_live_covers_t *object){
	return object->is_enabled_;
}

static void groups_live_covers_set_is_scalable(groups_live_covers_t *object, bool value){
	object->is_scalable_ = value;
}

static bool groups_live_covers_get_is_scalable(groups_live_covers_t *object){
	return object->is_scalable_;
}

static void groups_live_covers_set_story_ids(groups_live_covers_t *object, char * * value, int len){
int i;
	object->story_ids_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->story_ids[i] = value[i];
	}
	//NULL-terminate array
	object->story_ids[i] = NULL;
}

static char * * groups_live_covers_get_story_ids(groups_live_covers_t *object){
	return object->story_ids_;
}

static void groups_long_poll_events_set_audio_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->audio_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_audio_new(groups_long_poll_events_t *object){
	return object->audio_new_;
}

static void groups_long_poll_events_set_board_post_delete(groups_long_poll_events_t *object, base_bool_int_t value){
	object->board_post_delete_ = value;
}

static base_bool_int_t groups_long_poll_events_get_board_post_delete(groups_long_poll_events_t *object){
	return object->board_post_delete_;
}

static void groups_long_poll_events_set_board_post_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->board_post_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_board_post_edit(groups_long_poll_events_t *object){
	return object->board_post_edit_;
}

static void groups_long_poll_events_set_board_post_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->board_post_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_board_post_new(groups_long_poll_events_t *object){
	return object->board_post_new_;
}

static void groups_long_poll_events_set_board_post_restore(groups_long_poll_events_t *object, base_bool_int_t value){
	object->board_post_restore_ = value;
}

static base_bool_int_t groups_long_poll_events_get_board_post_restore(groups_long_poll_events_t *object){
	return object->board_post_restore_;
}

static void groups_long_poll_events_set_group_change_photo(groups_long_poll_events_t *object, base_bool_int_t value){
	object->group_change_photo_ = value;
}

static base_bool_int_t groups_long_poll_events_get_group_change_photo(groups_long_poll_events_t *object){
	return object->group_change_photo_;
}

static void groups_long_poll_events_set_group_change_settings(groups_long_poll_events_t *object, base_bool_int_t value){
	object->group_change_settings_ = value;
}

static base_bool_int_t groups_long_poll_events_get_group_change_settings(groups_long_poll_events_t *object){
	return object->group_change_settings_;
}

static void groups_long_poll_events_set_group_join(groups_long_poll_events_t *object, base_bool_int_t value){
	object->group_join_ = value;
}

static base_bool_int_t groups_long_poll_events_get_group_join(groups_long_poll_events_t *object){
	return object->group_join_;
}

static void groups_long_poll_events_set_group_leave(groups_long_poll_events_t *object, base_bool_int_t value){
	object->group_leave_ = value;
}

static base_bool_int_t groups_long_poll_events_get_group_leave(groups_long_poll_events_t *object){
	return object->group_leave_;
}

static void groups_long_poll_events_set_group_officers_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->group_officers_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_group_officers_edit(groups_long_poll_events_t *object){
	return object->group_officers_edit_;
}

static void groups_long_poll_events_set_lead_forms_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->lead_forms_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_lead_forms_new(groups_long_poll_events_t *object){
	return object->lead_forms_new_;
}

static void groups_long_poll_events_set_market_comment_delete(groups_long_poll_events_t *object, base_bool_int_t value){
	object->market_comment_delete_ = value;
}

static base_bool_int_t groups_long_poll_events_get_market_comment_delete(groups_long_poll_events_t *object){
	return object->market_comment_delete_;
}

static void groups_long_poll_events_set_market_comment_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->market_comment_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_market_comment_edit(groups_long_poll_events_t *object){
	return object->market_comment_edit_;
}

static void groups_long_poll_events_set_market_comment_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->market_comment_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_market_comment_new(groups_long_poll_events_t *object){
	return object->market_comment_new_;
}

static void groups_long_poll_events_set_market_comment_restore(groups_long_poll_events_t *object, base_bool_int_t value){
	object->market_comment_restore_ = value;
}

static base_bool_int_t groups_long_poll_events_get_market_comment_restore(groups_long_poll_events_t *object){
	return object->market_comment_restore_;
}

static void groups_long_poll_events_set_market_order_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->market_order_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_market_order_new(groups_long_poll_events_t *object){
	return object->market_order_new_;
}

static void groups_long_poll_events_set_market_order_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->market_order_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_market_order_edit(groups_long_poll_events_t *object){
	return object->market_order_edit_;
}

static void groups_long_poll_events_set_message_allow(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_allow_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_allow(groups_long_poll_events_t *object){
	return object->message_allow_;
}

static void groups_long_poll_events_set_message_deny(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_deny_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_deny(groups_long_poll_events_t *object){
	return object->message_deny_;
}

static void groups_long_poll_events_set_message_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_new(groups_long_poll_events_t *object){
	return object->message_new_;
}

static void groups_long_poll_events_set_message_read(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_read_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_read(groups_long_poll_events_t *object){
	return object->message_read_;
}

static void groups_long_poll_events_set_message_reply(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_reply_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_reply(groups_long_poll_events_t *object){
	return object->message_reply_;
}

static void groups_long_poll_events_set_message_typing_state(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_typing_state_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_typing_state(groups_long_poll_events_t *object){
	return object->message_typing_state_;
}

static void groups_long_poll_events_set_message_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->message_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_message_edit(groups_long_poll_events_t *object){
	return object->message_edit_;
}

static void groups_long_poll_events_set_photo_comment_delete(groups_long_poll_events_t *object, base_bool_int_t value){
	object->photo_comment_delete_ = value;
}

static base_bool_int_t groups_long_poll_events_get_photo_comment_delete(groups_long_poll_events_t *object){
	return object->photo_comment_delete_;
}

static void groups_long_poll_events_set_photo_comment_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->photo_comment_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_photo_comment_edit(groups_long_poll_events_t *object){
	return object->photo_comment_edit_;
}

static void groups_long_poll_events_set_photo_comment_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->photo_comment_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_photo_comment_new(groups_long_poll_events_t *object){
	return object->photo_comment_new_;
}

static void groups_long_poll_events_set_photo_comment_restore(groups_long_poll_events_t *object, base_bool_int_t value){
	object->photo_comment_restore_ = value;
}

static base_bool_int_t groups_long_poll_events_get_photo_comment_restore(groups_long_poll_events_t *object){
	return object->photo_comment_restore_;
}

static void groups_long_poll_events_set_photo_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->photo_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_photo_new(groups_long_poll_events_t *object){
	return object->photo_new_;
}

static void groups_long_poll_events_set_poll_vote_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->poll_vote_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_poll_vote_new(groups_long_poll_events_t *object){
	return object->poll_vote_new_;
}

static void groups_long_poll_events_set_user_block(groups_long_poll_events_t *object, base_bool_int_t value){
	object->user_block_ = value;
}

static base_bool_int_t groups_long_poll_events_get_user_block(groups_long_poll_events_t *object){
	return object->user_block_;
}

static void groups_long_poll_events_set_user_unblock(groups_long_poll_events_t *object, base_bool_int_t value){
	object->user_unblock_ = value;
}

static base_bool_int_t groups_long_poll_events_get_user_unblock(groups_long_poll_events_t *object){
	return object->user_unblock_;
}

static void groups_long_poll_events_set_video_comment_delete(groups_long_poll_events_t *object, base_bool_int_t value){
	object->video_comment_delete_ = value;
}

static base_bool_int_t groups_long_poll_events_get_video_comment_delete(groups_long_poll_events_t *object){
	return object->video_comment_delete_;
}

static void groups_long_poll_events_set_video_comment_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->video_comment_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_video_comment_edit(groups_long_poll_events_t *object){
	return object->video_comment_edit_;
}

static void groups_long_poll_events_set_video_comment_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->video_comment_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_video_comment_new(groups_long_poll_events_t *object){
	return object->video_comment_new_;
}

static void groups_long_poll_events_set_video_comment_restore(groups_long_poll_events_t *object, base_bool_int_t value){
	object->video_comment_restore_ = value;
}

static base_bool_int_t groups_long_poll_events_get_video_comment_restore(groups_long_poll_events_t *object){
	return object->video_comment_restore_;
}

static void groups_long_poll_events_set_video_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->video_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_video_new(groups_long_poll_events_t *object){
	return object->video_new_;
}

static void groups_long_poll_events_set_wall_post_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->wall_post_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_wall_post_new(groups_long_poll_events_t *object){
	return object->wall_post_new_;
}

static void groups_long_poll_events_set_wall_reply_delete(groups_long_poll_events_t *object, base_bool_int_t value){
	object->wall_reply_delete_ = value;
}

static base_bool_int_t groups_long_poll_events_get_wall_reply_delete(groups_long_poll_events_t *object){
	return object->wall_reply_delete_;
}

static void groups_long_poll_events_set_wall_reply_edit(groups_long_poll_events_t *object, base_bool_int_t value){
	object->wall_reply_edit_ = value;
}

static base_bool_int_t groups_long_poll_events_get_wall_reply_edit(groups_long_poll_events_t *object){
	return object->wall_reply_edit_;
}

static void groups_long_poll_events_set_wall_reply_new(groups_long_poll_events_t *object, base_bool_int_t value){
	object->wall_reply_new_ = value;
}

static base_bool_int_t groups_long_poll_events_get_wall_reply_new(groups_long_poll_events_t *object){
	return object->wall_reply_new_;
}

static void groups_long_poll_events_set_wall_reply_restore(groups_long_poll_events_t *object, base_bool_int_t value){
	object->wall_reply_restore_ = value;
}

static base_bool_int_t groups_long_poll_events_get_wall_reply_restore(groups_long_poll_events_t *object){
	return object->wall_reply_restore_;
}

static void groups_long_poll_events_set_wall_repost(groups_long_poll_events_t *object, base_bool_int_t value){
	object->wall_repost_ = value;
}

static base_bool_int_t groups_long_poll_events_get_wall_repost(groups_long_poll_events_t *object){
	return object->wall_repost_;
}

static void groups_long_poll_events_set_donut_subscription_create(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_subscription_create_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_subscription_create(groups_long_poll_events_t *object){
	return object->donut_subscription_create_;
}

static void groups_long_poll_events_set_donut_subscription_prolonged(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_subscription_prolonged_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_subscription_prolonged(groups_long_poll_events_t *object){
	return object->donut_subscription_prolonged_;
}

static void groups_long_poll_events_set_donut_subscription_cancelled(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_subscription_cancelled_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_subscription_cancelled(groups_long_poll_events_t *object){
	return object->donut_subscription_cancelled_;
}

static void groups_long_poll_events_set_donut_subscription_expired(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_subscription_expired_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_subscription_expired(groups_long_poll_events_t *object){
	return object->donut_subscription_expired_;
}

static void groups_long_poll_events_set_donut_subscription_price_changed(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_subscription_price_changed_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_subscription_price_changed(groups_long_poll_events_t *object){
	return object->donut_subscription_price_changed_;
}

static void groups_long_poll_events_set_donut_money_withdraw(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_money_withdraw_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_money_withdraw(groups_long_poll_events_t *object){
	return object->donut_money_withdraw_;
}

static void groups_long_poll_events_set_donut_money_withdraw_error(groups_long_poll_events_t *object, base_bool_int_t value){
	object->donut_money_withdraw_error_ = value;
}

static base_bool_int_t groups_long_poll_events_get_donut_money_withdraw_error(groups_long_poll_events_t *object){
	return object->donut_money_withdraw_error_;
}

static void groups_long_poll_server_set_key(groups_long_poll_server_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * groups_long_poll_server_get_key(groups_long_poll_server_t *object){
	return object->key_;
}

static void groups_long_poll_server_set_server(groups_long_poll_server_t *object, const char * value){
	object->server_ = strdup(value);
}

static const char * groups_long_poll_server_get_server(groups_long_poll_server_t *object){
	return object->server_;
}

static void groups_long_poll_server_set_ts(groups_long_poll_server_t *object, const char * value){
	object->ts_ = strdup(value);
}

static const char * groups_long_poll_server_get_ts(groups_long_poll_server_t *object){
	return object->ts_;
}

static void groups_long_poll_settings_set_api_version(groups_long_poll_settings_t *object, const char * value){
	object->api_version_ = strdup(value);
}

static const char * groups_long_poll_settings_get_api_version(groups_long_poll_settings_t *object){
	return object->api_version_;
}

static void groups_long_poll_settings_set_events(groups_long_poll_settings_t *object, groups_long_poll_events_t value){
	object->events_ = value;
}

static groups_long_poll_events_t groups_long_poll_settings_get_events(groups_long_poll_settings_t *object){
	return object->events_;
}

static void groups_long_poll_settings_set_is_enabled(groups_long_poll_settings_t *object, bool value){
	object->is_enabled_ = value;
}

static bool groups_long_poll_settings_get_is_enabled(groups_long_poll_settings_t *object){
	return object->is_enabled_;
}

static void groups_market_info_set_type(groups_market_info_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * groups_market_info_get_type(groups_market_info_t *object){
	return object->type_;
}

static void groups_market_info_set_contact_id(groups_market_info_t *object, int value){
	object->contact_id_ = value;
}

static int groups_market_info_get_contact_id(groups_market_info_t *object){
	return object->contact_id_;
}

static void groups_market_info_set_currency(groups_market_info_t *object, market_currency_t value){
	object->currency_ = value;
}

static market_currency_t groups_market_info_get_currency(groups_market_info_t *object){
	return object->currency_;
}

static void groups_market_info_set_currency_text(groups_market_info_t *object, const char * value){
	object->currency_text_ = strdup(value);
}

static const char * groups_market_info_get_currency_text(groups_market_info_t *object){
	return object->currency_text_;
}

static void groups_market_info_set_enabled(groups_market_info_t *object, base_bool_int_t value){
	object->enabled_ = value;
}

static base_bool_int_t groups_market_info_get_enabled(groups_market_info_t *object){
	return object->enabled_;
}

static void groups_market_info_set_main_album_id(groups_market_info_t *object, int value){
	object->main_album_id_ = value;
}

static int groups_market_info_get_main_album_id(groups_market_info_t *object){
	return object->main_album_id_;
}

static void groups_market_info_set_price_max(groups_market_info_t *object, const char * value){
	object->price_max_ = strdup(value);
}

static const char * groups_market_info_get_price_max(groups_market_info_t *object){
	return object->price_max_;
}

static void groups_market_info_set_price_min(groups_market_info_t *object, const char * value){
	object->price_min_ = strdup(value);
}

static const char * groups_market_info_get_price_min(groups_market_info_t *object){
	return object->price_min_;
}

static void groups_market_info_set_min_order_price(groups_market_info_t *object, market_price_t value){
	object->min_order_price_ = value;
}

static market_price_t groups_market_info_get_min_order_price(groups_market_info_t *object){
	return object->min_order_price_;
}

static void groups_member_role_set_id(groups_member_role_t *object, int value){
	object->id_ = value;
}

static int groups_member_role_get_id(groups_member_role_t *object){
	return object->id_;
}

static void groups_member_role_set_permissions(groups_member_role_t *object, groups_member_role_permission * value, int len){
int i;
	object->permissions_ = malloc(len * sizeof(groups_member_role_permission) + 8);
	for(i=0;i<len);++i){
		object->permissions[i] = value[i];
	}
	//NULL-terminate array
	object->permissions[i] = NULL;
}

static groups_member_role_permission * groups_member_role_get_permissions(groups_member_role_t *object){
	return object->permissions_;
}

static void groups_member_role_set_role(groups_member_role_t *object, groups_member_role_status_t value){
	object->role_ = value;
}

static groups_member_role_status_t groups_member_role_get_role(groups_member_role_t *object){
	return object->role_;
}

static void groups_member_status_set_member(groups_member_status_t *object, base_bool_int_t value){
	object->member_ = value;
}

static base_bool_int_t groups_member_status_get_member(groups_member_status_t *object){
	return object->member_;
}

static void groups_member_status_set_user_id(groups_member_status_t *object, int64 value){
	object->user_id_ = value;
}

static int64 groups_member_status_get_user_id(groups_member_status_t *object){
	return object->user_id_;
}

static void groups_member_status_full_set_can_invite(groups_member_status_full_t *object, base_bool_int_t value){
	object->can_invite_ = value;
}

static base_bool_int_t groups_member_status_full_get_can_invite(groups_member_status_full_t *object){
	return object->can_invite_;
}

static void groups_member_status_full_set_can_recall(groups_member_status_full_t *object, base_bool_int_t value){
	object->can_recall_ = value;
}

static base_bool_int_t groups_member_status_full_get_can_recall(groups_member_status_full_t *object){
	return object->can_recall_;
}

static void groups_member_status_full_set_invitation(groups_member_status_full_t *object, base_bool_int_t value){
	object->invitation_ = value;
}

static base_bool_int_t groups_member_status_full_get_invitation(groups_member_status_full_t *object){
	return object->invitation_;
}

static void groups_member_status_full_set_member(groups_member_status_full_t *object, base_bool_int_t value){
	object->member_ = value;
}

static base_bool_int_t groups_member_status_full_get_member(groups_member_status_full_t *object){
	return object->member_;
}

static void groups_member_status_full_set_request(groups_member_status_full_t *object, base_bool_int_t value){
	object->request_ = value;
}

static base_bool_int_t groups_member_status_full_get_request(groups_member_status_full_t *object){
	return object->request_;
}

static void groups_member_status_full_set_user_id(groups_member_status_full_t *object, int64 value){
	object->user_id_ = value;
}

static int64 groups_member_status_full_get_user_id(groups_member_status_full_t *object){
	return object->user_id_;
}

static void groups_online_status_set_minutes(groups_online_status_t *object, int value){
	object->minutes_ = value;
}

static int groups_online_status_get_minutes(groups_online_status_t *object){
	return object->minutes_;
}

static void groups_online_status_set_status(groups_online_status_t *object, groups_online_status_type_t value){
	object->status_ = value;
}

static groups_online_status_type_t groups_online_status_get_status(groups_online_status_t *object){
	return object->status_;
}

static void groups_owner_xtr_ban_info_set_ban_info(groups_owner_xtr_ban_info_t *object, groups_ban_info_t value){
	object->ban_info_ = value;
}

static groups_ban_info_t groups_owner_xtr_ban_info_get_ban_info(groups_owner_xtr_ban_info_t *object){
	return object->ban_info_;
}

static void groups_owner_xtr_ban_info_set_group(groups_owner_xtr_ban_info_t *object, groups_group_t value){
	object->group_ = value;
}

static groups_group_t groups_owner_xtr_ban_info_get_group(groups_owner_xtr_ban_info_t *object){
	return object->group_;
}

static void groups_owner_xtr_ban_info_set_profile(groups_owner_xtr_ban_info_t *object, users_user_t value){
	object->profile_ = value;
}

static users_user_t groups_owner_xtr_ban_info_get_profile(groups_owner_xtr_ban_info_t *object){
	return object->profile_;
}

static void groups_owner_xtr_ban_info_set_type(groups_owner_xtr_ban_info_t *object, groups_owner_xtr_ban_info_type_t value){
	object->type_ = value;
}

static groups_owner_xtr_ban_info_type_t groups_owner_xtr_ban_info_get_type(groups_owner_xtr_ban_info_t *object){
	return object->type_;
}

static void groups_photo_size_set_height(groups_photo_size_t *object, int value){
	object->height_ = value;
}

static int groups_photo_size_get_height(groups_photo_size_t *object){
	return object->height_;
}

static void groups_photo_size_set_width(groups_photo_size_t *object, int value){
	object->width_ = value;
}

static int groups_photo_size_get_width(groups_photo_size_t *object){
	return object->width_;
}

static void groups_settings_twitter_set_status(groups_settings_twitter_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * groups_settings_twitter_get_status(groups_settings_twitter_t *object){
	return object->status_;
}

static void groups_settings_twitter_set_name(groups_settings_twitter_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_settings_twitter_get_name(groups_settings_twitter_t *object){
	return object->name_;
}

static void groups_subject_item_set_id(groups_subject_item_t *object, int value){
	object->id_ = value;
}

static int groups_subject_item_get_id(groups_subject_item_t *object){
	return object->id_;
}

static void groups_subject_item_set_name(groups_subject_item_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_subject_item_get_name(groups_subject_item_t *object){
	return object->name_;
}

static void groups_token_permission_setting_set_name(groups_token_permission_setting_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * groups_token_permission_setting_get_name(groups_token_permission_setting_t *object){
	return object->name_;
}

static void groups_token_permission_setting_set_setting(groups_token_permission_setting_t *object, int value){
	object->setting_ = value;
}

static int groups_token_permission_setting_get_setting(groups_token_permission_setting_t *object){
	return object->setting_;
}

static void store_product_set_id(store_product_t *object, int value){
	object->id_ = value;
}

static int store_product_get_id(store_product_t *object){
	return object->id_;
}

static void store_product_set_type(store_product_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * store_product_get_type(store_product_t *object){
	return object->type_;
}

static void store_product_set_is_new(store_product_t *object, bool value){
	object->is_new_ = value;
}

static bool store_product_get_is_new(store_product_t *object){
	return object->is_new_;
}

static void store_product_set_purchased(store_product_t *object, base_bool_int_t value){
	object->purchased_ = value;
}

static base_bool_int_t store_product_get_purchased(store_product_t *object){
	return object->purchased_;
}

static void store_product_set_active(store_product_t *object, base_bool_int_t value){
	object->active_ = value;
}

static base_bool_int_t store_product_get_active(store_product_t *object){
	return object->active_;
}

static void store_product_set_promoted(store_product_t *object, base_bool_int_t value){
	object->promoted_ = value;
}

static base_bool_int_t store_product_get_promoted(store_product_t *object){
	return object->promoted_;
}

static void store_product_set_purchase_date(store_product_t *object, int value){
	object->purchase_date_ = value;
}

static int store_product_get_purchase_date(store_product_t *object){
	return object->purchase_date_;
}

static void store_product_set_title(store_product_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * store_product_get_title(store_product_t *object){
	return object->title_;
}

static void store_product_set_stickers(store_product_t *object, base_stickers_list_t value){
	object->stickers_ = value;
}

static base_stickers_list_t store_product_get_stickers(store_product_t *object){
	return object->stickers_;
}

static void store_product_set_style_sticker_ids(store_product_t *object, int * value, int len){
int i;
	object->style_sticker_ids_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->style_sticker_ids[i] = value[i];
	}
	//NULL-terminate array
	object->style_sticker_ids[i] = NULL;
}

static int * store_product_get_style_sticker_ids(store_product_t *object){
	return object->style_sticker_ids_;
}

static void store_product_set_icon(store_product_t *object, store_product_icon_t value){
	object->icon_ = value;
}

static store_product_icon_t store_product_get_icon(store_product_t *object){
	return object->icon_;
}

static void store_product_set_previews(store_product_t *object, base_image * value, int len){
int i;
	object->previews_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->previews[i] = value[i];
	}
	//NULL-terminate array
	object->previews[i] = NULL;
}

static base_image * store_product_get_previews(store_product_t *object){
	return object->previews_;
}

static void store_product_set_has_animation(store_product_t *object, bool value){
	object->has_animation_ = value;
}

static bool store_product_get_has_animation(store_product_t *object){
	return object->has_animation_;
}

static void store_product_set_subtitle(store_product_t *object, const char * value){
	object->subtitle_ = strdup(value);
}

static const char * store_product_get_subtitle(store_product_t *object){
	return object->subtitle_;
}

static void store_product_set_payment_region(store_product_t *object, const char * value){
	object->payment_region_ = strdup(value);
}

static const char * store_product_get_payment_region(store_product_t *object){
	return object->payment_region_;
}

static void store_stickers_keyword_set_words(store_stickers_keyword_t *object, char * * value, int len){
int i;
	object->words_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->words[i] = value[i];
	}
	//NULL-terminate array
	object->words[i] = NULL;
}

static char * * store_stickers_keyword_get_words(store_stickers_keyword_t *object){
	return object->words_;
}

static void store_stickers_keyword_set_user_stickers(store_stickers_keyword_t *object, store_stickers_keyword_stickers_t value){
	object->user_stickers_ = value;
}

static store_stickers_keyword_stickers_t store_stickers_keyword_get_user_stickers(store_stickers_keyword_t *object){
	return object->user_stickers_;
}

static void store_stickers_keyword_set_promoted_stickers(store_stickers_keyword_t *object, store_stickers_keyword_stickers_t value){
	object->promoted_stickers_ = value;
}

static store_stickers_keyword_stickers_t store_stickers_keyword_get_promoted_stickers(store_stickers_keyword_t *object){
	return object->promoted_stickers_;
}

static void store_stickers_keyword_set_stickers(store_stickers_keyword_t *object, store_stickers_keyword_sticker * value, int len){
int i;
	object->stickers_ = malloc(len * sizeof(store_stickers_keyword_sticker) + 8);
	for(i=0;i<len);++i){
		object->stickers[i] = value[i];
	}
	//NULL-terminate array
	object->stickers[i] = NULL;
}

static store_stickers_keyword_sticker * store_stickers_keyword_get_stickers(store_stickers_keyword_t *object){
	return object->stickers_;
}

static void store_stickers_keyword_sticker_set_pack_id(store_stickers_keyword_sticker_t *object, int value){
	object->pack_id_ = value;
}

static int store_stickers_keyword_sticker_get_pack_id(store_stickers_keyword_sticker_t *object){
	return object->pack_id_;
}

static void store_stickers_keyword_sticker_set_sticker_id(store_stickers_keyword_sticker_t *object, int value){
	object->sticker_id_ = value;
}

static int store_stickers_keyword_sticker_get_sticker_id(store_stickers_keyword_sticker_t *object){
	return object->sticker_id_;
}

static void oauth_error_set_error(oauth_error_t *object, const char * value){
	object->error_ = strdup(value);
}

static const char * oauth_error_get_error(oauth_error_t *object){
	return object->error_;
}

static void oauth_error_set_error_description(oauth_error_t *object, const char * value){
	object->error_description_ = strdup(value);
}

static const char * oauth_error_get_error_description(oauth_error_t *object){
	return object->error_description_;
}

static void oauth_error_set_redirect_uri(oauth_error_t *object, const char * value){
	object->redirect_uri_ = strdup(value);
}

static const char * oauth_error_get_redirect_uri(oauth_error_t *object){
	return object->redirect_uri_;
}

static void gifts_gift_set_date(gifts_gift_t *object, int value){
	object->date_ = value;
}

static int gifts_gift_get_date(gifts_gift_t *object){
	return object->date_;
}

static void gifts_gift_set_from_id(gifts_gift_t *object, int value){
	object->from_id_ = value;
}

static int gifts_gift_get_from_id(gifts_gift_t *object){
	return object->from_id_;
}

static void gifts_gift_set_gift(gifts_gift_t *object, gifts_layout_t value){
	object->gift_ = value;
}

static gifts_layout_t gifts_gift_get_gift(gifts_gift_t *object){
	return object->gift_;
}

static void gifts_gift_set_gift_hash(gifts_gift_t *object, const char * value){
	object->gift_hash_ = strdup(value);
}

static const char * gifts_gift_get_gift_hash(gifts_gift_t *object){
	return object->gift_hash_;
}

static void gifts_gift_set_id(gifts_gift_t *object, int value){
	object->id_ = value;
}

static int gifts_gift_get_id(gifts_gift_t *object){
	return object->id_;
}

static void gifts_gift_set_message(gifts_gift_t *object, const char * value){
	object->message_ = strdup(value);
}

static const char * gifts_gift_get_message(gifts_gift_t *object){
	return object->message_;
}

static void gifts_gift_set_privacy(gifts_gift_t *object, gifts_gift_privacy_t value){
	object->privacy_ = value;
}

static gifts_gift_privacy_t gifts_gift_get_privacy(gifts_gift_t *object){
	return object->privacy_;
}

static void gifts_layout_set_id(gifts_layout_t *object, int value){
	object->id_ = value;
}

static int gifts_layout_get_id(gifts_layout_t *object){
	return object->id_;
}

static void gifts_layout_set_thumb_512(gifts_layout_t *object, const char * value){
	object->thumb_512_ = strdup(value);
}

static const char * gifts_layout_get_thumb_512(gifts_layout_t *object){
	return object->thumb_512_;
}

static void gifts_layout_set_thumb_256(gifts_layout_t *object, const char * value){
	object->thumb_256_ = strdup(value);
}

static const char * gifts_layout_get_thumb_256(gifts_layout_t *object){
	return object->thumb_256_;
}

static void gifts_layout_set_thumb_48(gifts_layout_t *object, const char * value){
	object->thumb_48_ = strdup(value);
}

static const char * gifts_layout_get_thumb_48(gifts_layout_t *object){
	return object->thumb_48_;
}

static void gifts_layout_set_thumb_96(gifts_layout_t *object, const char * value){
	object->thumb_96_ = strdup(value);
}

static const char * gifts_layout_get_thumb_96(gifts_layout_t *object){
	return object->thumb_96_;
}

static void gifts_layout_set_stickers_product_id(gifts_layout_t *object, int value){
	object->stickers_product_id_ = value;
}

static int gifts_layout_get_stickers_product_id(gifts_layout_t *object){
	return object->stickers_product_id_;
}

static void gifts_layout_set_is_stickers_style(gifts_layout_t *object, bool value){
	object->is_stickers_style_ = value;
}

static bool gifts_layout_get_is_stickers_style(gifts_layout_t *object){
	return object->is_stickers_style_;
}

static void gifts_layout_set_build_id(gifts_layout_t *object, const char * value){
	object->build_id_ = strdup(value);
}

static const char * gifts_layout_get_build_id(gifts_layout_t *object){
	return object->build_id_;
}

static void gifts_layout_set_keywords(gifts_layout_t *object, const char * value){
	object->keywords_ = strdup(value);
}

static const char * gifts_layout_get_keywords(gifts_layout_t *object){
	return object->keywords_;
}

static void utils_domain_resolved_set_object_id(utils_domain_resolved_t *object, int value){
	object->object_id_ = value;
}

static int utils_domain_resolved_get_object_id(utils_domain_resolved_t *object){
	return object->object_id_;
}

static void utils_domain_resolved_set_group_id(utils_domain_resolved_t *object, int64 value){
	object->group_id_ = value;
}

static int64 utils_domain_resolved_get_group_id(utils_domain_resolved_t *object){
	return object->group_id_;
}

static void utils_domain_resolved_set_type(utils_domain_resolved_t *object, utils_domain_resolved_type_t value){
	object->type_ = value;
}

static utils_domain_resolved_type_t utils_domain_resolved_get_type(utils_domain_resolved_t *object){
	return object->type_;
}

static void utils_last_shortened_link_set_access_key(utils_last_shortened_link_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * utils_last_shortened_link_get_access_key(utils_last_shortened_link_t *object){
	return object->access_key_;
}

static void utils_last_shortened_link_set_key(utils_last_shortened_link_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * utils_last_shortened_link_get_key(utils_last_shortened_link_t *object){
	return object->key_;
}

static void utils_last_shortened_link_set_short_url(utils_last_shortened_link_t *object, const char * value){
	object->short_url_ = strdup(value);
}

static const char * utils_last_shortened_link_get_short_url(utils_last_shortened_link_t *object){
	return object->short_url_;
}

static void utils_last_shortened_link_set_timestamp(utils_last_shortened_link_t *object, int value){
	object->timestamp_ = value;
}

static int utils_last_shortened_link_get_timestamp(utils_last_shortened_link_t *object){
	return object->timestamp_;
}

static void utils_last_shortened_link_set_url(utils_last_shortened_link_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * utils_last_shortened_link_get_url(utils_last_shortened_link_t *object){
	return object->url_;
}

static void utils_last_shortened_link_set_views(utils_last_shortened_link_t *object, int value){
	object->views_ = value;
}

static int utils_last_shortened_link_get_views(utils_last_shortened_link_t *object){
	return object->views_;
}

static void utils_link_checked_set_link(utils_link_checked_t *object, const char * value){
	object->link_ = strdup(value);
}

static const char * utils_link_checked_get_link(utils_link_checked_t *object){
	return object->link_;
}

static void utils_link_checked_set_status(utils_link_checked_t *object, utils_link_checked_status_t value){
	object->status_ = value;
}

static utils_link_checked_status_t utils_link_checked_get_status(utils_link_checked_t *object){
	return object->status_;
}

static void utils_link_stats_set_key(utils_link_stats_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * utils_link_stats_get_key(utils_link_stats_t *object){
	return object->key_;
}

static void utils_link_stats_set_stats(utils_link_stats_t *object, utils_stats * value, int len){
int i;
	object->stats_ = malloc(len * sizeof(utils_stats) + 8);
	for(i=0;i<len);++i){
		object->stats[i] = value[i];
	}
	//NULL-terminate array
	object->stats[i] = NULL;
}

static utils_stats * utils_link_stats_get_stats(utils_link_stats_t *object){
	return object->stats_;
}

static void utils_link_stats_extended_set_key(utils_link_stats_extended_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * utils_link_stats_extended_get_key(utils_link_stats_extended_t *object){
	return object->key_;
}

static void utils_link_stats_extended_set_stats(utils_link_stats_extended_t *object, utils_stats_extended * value, int len){
int i;
	object->stats_ = malloc(len * sizeof(utils_stats_extended) + 8);
	for(i=0;i<len);++i){
		object->stats[i] = value[i];
	}
	//NULL-terminate array
	object->stats[i] = NULL;
}

static utils_stats_extended * utils_link_stats_extended_get_stats(utils_link_stats_extended_t *object){
	return object->stats_;
}

static void utils_short_link_set_access_key(utils_short_link_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * utils_short_link_get_access_key(utils_short_link_t *object){
	return object->access_key_;
}

static void utils_short_link_set_key(utils_short_link_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * utils_short_link_get_key(utils_short_link_t *object){
	return object->key_;
}

static void utils_short_link_set_short_url(utils_short_link_t *object, const char * value){
	object->short_url_ = strdup(value);
}

static const char * utils_short_link_get_short_url(utils_short_link_t *object){
	return object->short_url_;
}

static void utils_short_link_set_url(utils_short_link_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * utils_short_link_get_url(utils_short_link_t *object){
	return object->url_;
}

static void utils_stats_set_timestamp(utils_stats_t *object, int value){
	object->timestamp_ = value;
}

static int utils_stats_get_timestamp(utils_stats_t *object){
	return object->timestamp_;
}

static void utils_stats_set_views(utils_stats_t *object, int value){
	object->views_ = value;
}

static int utils_stats_get_views(utils_stats_t *object){
	return object->views_;
}

static void utils_stats_city_set_city_id(utils_stats_city_t *object, int value){
	object->city_id_ = value;
}

static int utils_stats_city_get_city_id(utils_stats_city_t *object){
	return object->city_id_;
}

static void utils_stats_city_set_views(utils_stats_city_t *object, int value){
	object->views_ = value;
}

static int utils_stats_city_get_views(utils_stats_city_t *object){
	return object->views_;
}

static void utils_stats_country_set_country_id(utils_stats_country_t *object, int value){
	object->country_id_ = value;
}

static int utils_stats_country_get_country_id(utils_stats_country_t *object){
	return object->country_id_;
}

static void utils_stats_country_set_views(utils_stats_country_t *object, int value){
	object->views_ = value;
}

static int utils_stats_country_get_views(utils_stats_country_t *object){
	return object->views_;
}

static void utils_stats_extended_set_cities(utils_stats_extended_t *object, utils_stats_city * value, int len){
int i;
	object->cities_ = malloc(len * sizeof(utils_stats_city) + 8);
	for(i=0;i<len);++i){
		object->cities[i] = value[i];
	}
	//NULL-terminate array
	object->cities[i] = NULL;
}

static utils_stats_city * utils_stats_extended_get_cities(utils_stats_extended_t *object){
	return object->cities_;
}

static void utils_stats_extended_set_countries(utils_stats_extended_t *object, utils_stats_country * value, int len){
int i;
	object->countries_ = malloc(len * sizeof(utils_stats_country) + 8);
	for(i=0;i<len);++i){
		object->countries[i] = value[i];
	}
	//NULL-terminate array
	object->countries[i] = NULL;
}

static utils_stats_country * utils_stats_extended_get_countries(utils_stats_extended_t *object){
	return object->countries_;
}

static void utils_stats_extended_set_sex_age(utils_stats_extended_t *object, utils_stats_sex_age * value, int len){
int i;
	object->sex_age_ = malloc(len * sizeof(utils_stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->sex_age[i] = value[i];
	}
	//NULL-terminate array
	object->sex_age[i] = NULL;
}

static utils_stats_sex_age * utils_stats_extended_get_sex_age(utils_stats_extended_t *object){
	return object->sex_age_;
}

static void utils_stats_extended_set_timestamp(utils_stats_extended_t *object, int value){
	object->timestamp_ = value;
}

static int utils_stats_extended_get_timestamp(utils_stats_extended_t *object){
	return object->timestamp_;
}

static void utils_stats_extended_set_views(utils_stats_extended_t *object, int value){
	object->views_ = value;
}

static int utils_stats_extended_get_views(utils_stats_extended_t *object){
	return object->views_;
}

static void utils_stats_sex_age_set_age_range(utils_stats_sex_age_t *object, const char * value){
	object->age_range_ = strdup(value);
}

static const char * utils_stats_sex_age_get_age_range(utils_stats_sex_age_t *object){
	return object->age_range_;
}

static void utils_stats_sex_age_set_female(utils_stats_sex_age_t *object, int value){
	object->female_ = value;
}

static int utils_stats_sex_age_get_female(utils_stats_sex_age_t *object){
	return object->female_;
}

static void utils_stats_sex_age_set_male(utils_stats_sex_age_t *object, int value){
	object->male_ = value;
}

static int utils_stats_sex_age_get_male(utils_stats_sex_age_t *object){
	return object->male_;
}

static void polls_answer_set_id(polls_answer_t *object, int value){
	object->id_ = value;
}

static int polls_answer_get_id(polls_answer_t *object){
	return object->id_;
}

static void polls_answer_set_text(polls_answer_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * polls_answer_get_text(polls_answer_t *object){
	return object->text_;
}

static void polls_answer_set_votes(polls_answer_t *object, int value){
	object->votes_ = value;
}

static int polls_answer_get_votes(polls_answer_t *object){
	return object->votes_;
}

static void polls_background_set_angle(polls_background_t *object, int value){
	object->angle_ = value;
}

static int polls_background_get_angle(polls_background_t *object){
	return object->angle_;
}

static void polls_background_set_color(polls_background_t *object, const char * value){
	object->color_ = strdup(value);
}

static const char * polls_background_get_color(polls_background_t *object){
	return object->color_;
}

static void polls_background_set_height(polls_background_t *object, int value){
	object->height_ = value;
}

static int polls_background_get_height(polls_background_t *object){
	return object->height_;
}

static void polls_background_set_id(polls_background_t *object, int value){
	object->id_ = value;
}

static int polls_background_get_id(polls_background_t *object){
	return object->id_;
}

static void polls_background_set_name(polls_background_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * polls_background_get_name(polls_background_t *object){
	return object->name_;
}

static void polls_background_set_images(polls_background_t *object, base_image * value, int len){
int i;
	object->images_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->images[i] = value[i];
	}
	//NULL-terminate array
	object->images[i] = NULL;
}

static base_image * polls_background_get_images(polls_background_t *object){
	return object->images_;
}

static void polls_background_set_points(polls_background_t *object, base_gradient_point * value, int len){
int i;
	object->points_ = malloc(len * sizeof(base_gradient_point) + 8);
	for(i=0;i<len);++i){
		object->points[i] = value[i];
	}
	//NULL-terminate array
	object->points[i] = NULL;
}

static base_gradient_point * polls_background_get_points(polls_background_t *object){
	return object->points_;
}

static void polls_background_set_type(polls_background_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * polls_background_get_type(polls_background_t *object){
	return object->type_;
}

static void polls_background_set_width(polls_background_t *object, int value){
	object->width_ = value;
}

static int polls_background_get_width(polls_background_t *object){
	return object->width_;
}

static void polls_friend_set_id(polls_friend_t *object, int64 value){
	object->id_ = value;
}

static int64 polls_friend_get_id(polls_friend_t *object){
	return object->id_;
}

static void polls_poll_set_anonymous(polls_poll_t *object, polls_poll_anonymous_t value){
	object->anonymous_ = value;
}

static polls_poll_anonymous_t polls_poll_get_anonymous(polls_poll_t *object){
	return object->anonymous_;
}

static void polls_poll_set_friends(polls_poll_t *object, polls_friend * value, int len){
int i;
	object->friends_ = malloc(len * sizeof(polls_friend) + 8);
	for(i=0;i<len);++i){
		object->friends[i] = value[i];
	}
	//NULL-terminate array
	object->friends[i] = NULL;
}

static polls_friend * polls_poll_get_friends(polls_poll_t *object){
	return object->friends_;
}

static void polls_poll_set_multiple(polls_poll_t *object, bool value){
	object->multiple_ = value;
}

static bool polls_poll_get_multiple(polls_poll_t *object){
	return object->multiple_;
}

static void polls_poll_set_answer_id(polls_poll_t *object, int value){
	object->answer_id_ = value;
}

static int polls_poll_get_answer_id(polls_poll_t *object){
	return object->answer_id_;
}

static void polls_poll_set_end_date(polls_poll_t *object, int value){
	object->end_date_ = value;
}

static int polls_poll_get_end_date(polls_poll_t *object){
	return object->end_date_;
}

static void polls_poll_set_answer_ids(polls_poll_t *object, int * value, int len){
int i;
	object->answer_ids_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->answer_ids[i] = value[i];
	}
	//NULL-terminate array
	object->answer_ids[i] = NULL;
}

static int * polls_poll_get_answer_ids(polls_poll_t *object){
	return object->answer_ids_;
}

static void polls_poll_set_closed(polls_poll_t *object, bool value){
	object->closed_ = value;
}

static bool polls_poll_get_closed(polls_poll_t *object){
	return object->closed_;
}

static void polls_poll_set_is_board(polls_poll_t *object, bool value){
	object->is_board_ = value;
}

static bool polls_poll_get_is_board(polls_poll_t *object){
	return object->is_board_;
}

static void polls_poll_set_can_edit(polls_poll_t *object, bool value){
	object->can_edit_ = value;
}

static bool polls_poll_get_can_edit(polls_poll_t *object){
	return object->can_edit_;
}

static void polls_poll_set_can_vote(polls_poll_t *object, bool value){
	object->can_vote_ = value;
}

static bool polls_poll_get_can_vote(polls_poll_t *object){
	return object->can_vote_;
}

static void polls_poll_set_can_report(polls_poll_t *object, bool value){
	object->can_report_ = value;
}

static bool polls_poll_get_can_report(polls_poll_t *object){
	return object->can_report_;
}

static void polls_poll_set_can_share(polls_poll_t *object, bool value){
	object->can_share_ = value;
}

static bool polls_poll_get_can_share(polls_poll_t *object){
	return object->can_share_;
}

static void polls_poll_set_embed_hash(polls_poll_t *object, const char * value){
	object->embed_hash_ = strdup(value);
}

static const char * polls_poll_get_embed_hash(polls_poll_t *object){
	return object->embed_hash_;
}

static void polls_poll_set_photo(polls_poll_t *object, polls_background_t value){
	object->photo_ = value;
}

static polls_background_t polls_poll_get_photo(polls_poll_t *object){
	return object->photo_;
}

static void polls_poll_set_answers(polls_poll_t *object, polls_answer * value, int len){
int i;
	object->answers_ = malloc(len * sizeof(polls_answer) + 8);
	for(i=0;i<len);++i){
		object->answers[i] = value[i];
	}
	//NULL-terminate array
	object->answers[i] = NULL;
}

static polls_answer * polls_poll_get_answers(polls_poll_t *object){
	return object->answers_;
}

static void polls_poll_set_created(polls_poll_t *object, int value){
	object->created_ = value;
}

static int polls_poll_get_created(polls_poll_t *object){
	return object->created_;
}

static void polls_poll_set_id(polls_poll_t *object, int value){
	object->id_ = value;
}

static int polls_poll_get_id(polls_poll_t *object){
	return object->id_;
}

static void polls_poll_set_owner_id(polls_poll_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 polls_poll_get_owner_id(polls_poll_t *object){
	return object->owner_id_;
}

static void polls_poll_set_author_id(polls_poll_t *object, int value){
	object->author_id_ = value;
}

static int polls_poll_get_author_id(polls_poll_t *object){
	return object->author_id_;
}

static void polls_poll_set_question(polls_poll_t *object, const char * value){
	object->question_ = strdup(value);
}

static const char * polls_poll_get_question(polls_poll_t *object){
	return object->question_;
}

static void polls_poll_set_background(polls_poll_t *object, polls_background_t value){
	object->background_ = value;
}

static polls_background_t polls_poll_get_background(polls_poll_t *object){
	return object->background_;
}

static void polls_poll_set_votes(polls_poll_t *object, int value){
	object->votes_ = value;
}

static int polls_poll_get_votes(polls_poll_t *object){
	return object->votes_;
}

static void polls_poll_set_disable_unvote(polls_poll_t *object, bool value){
	object->disable_unvote_ = value;
}

static bool polls_poll_get_disable_unvote(polls_poll_t *object){
	return object->disable_unvote_;
}

static void polls_voters_set_answer_id(polls_voters_t *object, int value){
	object->answer_id_ = value;
}

static int polls_voters_get_answer_id(polls_voters_t *object){
	return object->answer_id_;
}

static void polls_voters_set_users(polls_voters_t *object, polls_voters_users_t value){
	object->users_ = value;
}

static polls_voters_users_t polls_voters_get_users(polls_voters_t *object){
	return object->users_;
}

static void polls_voters_users_set_count(polls_voters_users_t *object, int value){
	object->count_ = value;
}

static int polls_voters_users_get_count(polls_voters_users_t *object){
	return object->count_;
}

static void polls_voters_users_set_items(polls_voters_users_t *object, int64 * value, int len){
int i;
	object->items_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static int64 * polls_voters_users_get_items(polls_voters_users_t *object){
	return object->items_;
}

static void notes_note_set_read_comments(notes_note_t *object, int value){
	object->read_comments_ = value;
}

static int notes_note_get_read_comments(notes_note_t *object){
	return object->read_comments_;
}

static void notes_note_set_can_comment(notes_note_t *object, base_bool_int_t value){
	object->can_comment_ = value;
}

static base_bool_int_t notes_note_get_can_comment(notes_note_t *object){
	return object->can_comment_;
}

static void notes_note_set_comments(notes_note_t *object, int value){
	object->comments_ = value;
}

static int notes_note_get_comments(notes_note_t *object){
	return object->comments_;
}

static void notes_note_set_date(notes_note_t *object, int value){
	object->date_ = value;
}

static int notes_note_get_date(notes_note_t *object){
	return object->date_;
}

static void notes_note_set_id(notes_note_t *object, int value){
	object->id_ = value;
}

static int notes_note_get_id(notes_note_t *object){
	return object->id_;
}

static void notes_note_set_owner_id(notes_note_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 notes_note_get_owner_id(notes_note_t *object){
	return object->owner_id_;
}

static void notes_note_set_text(notes_note_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * notes_note_get_text(notes_note_t *object){
	return object->text_;
}

static void notes_note_set_text_wiki(notes_note_t *object, const char * value){
	object->text_wiki_ = strdup(value);
}

static const char * notes_note_get_text_wiki(notes_note_t *object){
	return object->text_wiki_;
}

static void notes_note_set_title(notes_note_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * notes_note_get_title(notes_note_t *object){
	return object->title_;
}

static void notes_note_set_view_url(notes_note_t *object, const char * value){
	object->view_url_ = strdup(value);
}

static const char * notes_note_get_view_url(notes_note_t *object){
	return object->view_url_;
}

static void notes_note_set_privacy_view(notes_note_t *object, char * * value, int len){
int i;
	object->privacy_view_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->privacy_view[i] = value[i];
	}
	//NULL-terminate array
	object->privacy_view[i] = NULL;
}

static char * * notes_note_get_privacy_view(notes_note_t *object){
	return object->privacy_view_;
}

static void notes_note_set_privacy_comment(notes_note_t *object, char * * value, int len){
int i;
	object->privacy_comment_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->privacy_comment[i] = value[i];
	}
	//NULL-terminate array
	object->privacy_comment[i] = NULL;
}

static char * * notes_note_get_privacy_comment(notes_note_t *object){
	return object->privacy_comment_;
}

static void notes_note_comment_set_date(notes_note_comment_t *object, int value){
	object->date_ = value;
}

static int notes_note_comment_get_date(notes_note_comment_t *object){
	return object->date_;
}

static void notes_note_comment_set_id(notes_note_comment_t *object, int value){
	object->id_ = value;
}

static int notes_note_comment_get_id(notes_note_comment_t *object){
	return object->id_;
}

static void notes_note_comment_set_message(notes_note_comment_t *object, const char * value){
	object->message_ = strdup(value);
}

static const char * notes_note_comment_get_message(notes_note_comment_t *object){
	return object->message_;
}

static void notes_note_comment_set_nid(notes_note_comment_t *object, int value){
	object->nid_ = value;
}

static int notes_note_comment_get_nid(notes_note_comment_t *object){
	return object->nid_;
}

static void notes_note_comment_set_oid(notes_note_comment_t *object, int value){
	object->oid_ = value;
}

static int notes_note_comment_get_oid(notes_note_comment_t *object){
	return object->oid_;
}

static void notes_note_comment_set_reply_to(notes_note_comment_t *object, int value){
	object->reply_to_ = value;
}

static int notes_note_comment_get_reply_to(notes_note_comment_t *object){
	return object->reply_to_;
}

static void notes_note_comment_set_uid(notes_note_comment_t *object, int value){
	object->uid_ = value;
}

static int notes_note_comment_get_uid(notes_note_comment_t *object){
	return object->uid_;
}

static void video_live_info_set_enabled(video_live_info_t *object, base_bool_int_t value){
	object->enabled_ = value;
}

static base_bool_int_t video_live_info_get_enabled(video_live_info_t *object){
	return object->enabled_;
}

static void video_live_info_set_is_notifications_blocked(video_live_info_t *object, base_bool_int_t value){
	object->is_notifications_blocked_ = value;
}

static base_bool_int_t video_live_info_get_is_notifications_blocked(video_live_info_t *object){
	return object->is_notifications_blocked_;
}

static void video_live_settings_set_can_rewind(video_live_settings_t *object, base_bool_int_t value){
	object->can_rewind_ = value;
}

static base_bool_int_t video_live_settings_get_can_rewind(video_live_settings_t *object){
	return object->can_rewind_;
}

static void video_live_settings_set_is_endless(video_live_settings_t *object, base_bool_int_t value){
	object->is_endless_ = value;
}

static base_bool_int_t video_live_settings_get_is_endless(video_live_settings_t *object){
	return object->is_endless_;
}

static void video_live_settings_set_max_duration(video_live_settings_t *object, int value){
	object->max_duration_ = value;
}

static int video_live_settings_get_max_duration(video_live_settings_t *object){
	return object->max_duration_;
}

static void video_save_result_set_access_key(video_save_result_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * video_save_result_get_access_key(video_save_result_t *object){
	return object->access_key_;
}

static void video_save_result_set_description(video_save_result_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * video_save_result_get_description(video_save_result_t *object){
	return object->description_;
}

static void video_save_result_set_owner_id(video_save_result_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 video_save_result_get_owner_id(video_save_result_t *object){
	return object->owner_id_;
}

static void video_save_result_set_title(video_save_result_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * video_save_result_get_title(video_save_result_t *object){
	return object->title_;
}

static void video_save_result_set_upload_url(video_save_result_t *object, const char * value){
	object->upload_url_ = strdup(value);
}

static const char * video_save_result_get_upload_url(video_save_result_t *object){
	return object->upload_url_;
}

static void video_save_result_set_video_id(video_save_result_t *object, int value){
	object->video_id_ = value;
}

static int video_save_result_get_video_id(video_save_result_t *object){
	return object->video_id_;
}

static void video_video_album_set_id(video_video_album_t *object, int value){
	object->id_ = value;
}

static int video_video_album_get_id(video_video_album_t *object){
	return object->id_;
}

static void video_video_album_set_owner_id(video_video_album_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 video_video_album_get_owner_id(video_video_album_t *object){
	return object->owner_id_;
}

static void video_video_album_set_title(video_video_album_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * video_video_album_get_title(video_video_album_t *object){
	return object->title_;
}

static void video_video_files_set_external(video_video_files_t *object, const char * value){
	object->external_ = strdup(value);
}

static const char * video_video_files_get_external(video_video_files_t *object){
	return object->external_;
}

static void video_video_files_set_mp4_144(video_video_files_t *object, const char * value){
	object->mp4_144_ = strdup(value);
}

static const char * video_video_files_get_mp4_144(video_video_files_t *object){
	return object->mp4_144_;
}

static void video_video_files_set_mp4_240(video_video_files_t *object, const char * value){
	object->mp4_240_ = strdup(value);
}

static const char * video_video_files_get_mp4_240(video_video_files_t *object){
	return object->mp4_240_;
}

static void video_video_files_set_mp4_360(video_video_files_t *object, const char * value){
	object->mp4_360_ = strdup(value);
}

static const char * video_video_files_get_mp4_360(video_video_files_t *object){
	return object->mp4_360_;
}

static void video_video_files_set_mp4_480(video_video_files_t *object, const char * value){
	object->mp4_480_ = strdup(value);
}

static const char * video_video_files_get_mp4_480(video_video_files_t *object){
	return object->mp4_480_;
}

static void video_video_files_set_mp4_720(video_video_files_t *object, const char * value){
	object->mp4_720_ = strdup(value);
}

static const char * video_video_files_get_mp4_720(video_video_files_t *object){
	return object->mp4_720_;
}

static void video_video_files_set_mp4_1080(video_video_files_t *object, const char * value){
	object->mp4_1080_ = strdup(value);
}

static const char * video_video_files_get_mp4_1080(video_video_files_t *object){
	return object->mp4_1080_;
}

static void video_video_files_set_mp4_1440(video_video_files_t *object, const char * value){
	object->mp4_1440_ = strdup(value);
}

static const char * video_video_files_get_mp4_1440(video_video_files_t *object){
	return object->mp4_1440_;
}

static void video_video_files_set_mp4_2160(video_video_files_t *object, const char * value){
	object->mp4_2160_ = strdup(value);
}

static const char * video_video_files_get_mp4_2160(video_video_files_t *object){
	return object->mp4_2160_;
}

static void video_video_files_set_flv_320(video_video_files_t *object, const char * value){
	object->flv_320_ = strdup(value);
}

static const char * video_video_files_get_flv_320(video_video_files_t *object){
	return object->flv_320_;
}

static void adsweb_getAdCategories_response_categories_category_set_id(adsweb_getAdCategories_response_categories_category_t *object, int value){
	object->id_ = value;
}

static int adsweb_getAdCategories_response_categories_category_get_id(adsweb_getAdCategories_response_categories_category_t *object){
	return object->id_;
}

static void adsweb_getAdCategories_response_categories_category_set_name(adsweb_getAdCategories_response_categories_category_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * adsweb_getAdCategories_response_categories_category_get_name(adsweb_getAdCategories_response_categories_category_t *object){
	return object->name_;
}

static void adsweb_getAdUnits_response_ad_units_ad_unit_set_id(adsweb_getAdUnits_response_ad_units_ad_unit_t *object, int value){
	object->id_ = value;
}

static int adsweb_getAdUnits_response_ad_units_ad_unit_get_id(adsweb_getAdUnits_response_ad_units_ad_unit_t *object){
	return object->id_;
}

static void adsweb_getAdUnits_response_ad_units_ad_unit_set_site_id(adsweb_getAdUnits_response_ad_units_ad_unit_t *object, int value){
	object->site_id_ = value;
}

static int adsweb_getAdUnits_response_ad_units_ad_unit_get_site_id(adsweb_getAdUnits_response_ad_units_ad_unit_t *object){
	return object->site_id_;
}

static void adsweb_getAdUnits_response_ad_units_ad_unit_set_name(adsweb_getAdUnits_response_ad_units_ad_unit_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * adsweb_getAdUnits_response_ad_units_ad_unit_get_name(adsweb_getAdUnits_response_ad_units_ad_unit_t *object){
	return object->name_;
}

static void adsweb_getFraudHistory_response_entries_entry_set_site_id(adsweb_getFraudHistory_response_entries_entry_t *object, int value){
	object->site_id_ = value;
}

static int adsweb_getFraudHistory_response_entries_entry_get_site_id(adsweb_getFraudHistory_response_entries_entry_t *object){
	return object->site_id_;
}

static void adsweb_getFraudHistory_response_entries_entry_set_day(adsweb_getFraudHistory_response_entries_entry_t *object, const char * value){
	object->day_ = strdup(value);
}

static const char * adsweb_getFraudHistory_response_entries_entry_get_day(adsweb_getFraudHistory_response_entries_entry_t *object){
	return object->day_;
}

static void adsweb_getSites_response_sites_site_set_id(adsweb_getSites_response_sites_site_t *object, int value){
	object->id_ = value;
}

static int adsweb_getSites_response_sites_site_get_id(adsweb_getSites_response_sites_site_t *object){
	return object->id_;
}

static void adsweb_getSites_response_sites_site_set_status_user(adsweb_getSites_response_sites_site_t *object, const char * value){
	object->status_user_ = strdup(value);
}

static const char * adsweb_getSites_response_sites_site_get_status_user(adsweb_getSites_response_sites_site_t *object){
	return object->status_user_;
}

static void adsweb_getSites_response_sites_site_set_status_moder(adsweb_getSites_response_sites_site_t *object, const char * value){
	object->status_moder_ = strdup(value);
}

static const char * adsweb_getSites_response_sites_site_get_status_moder(adsweb_getSites_response_sites_site_t *object){
	return object->status_moder_;
}

static void adsweb_getSites_response_sites_site_set_domains(adsweb_getSites_response_sites_site_t *object, const char * value){
	object->domains_ = strdup(value);
}

static const char * adsweb_getSites_response_sites_site_get_domains(adsweb_getSites_response_sites_site_t *object){
	return object->domains_;
}

static void adsweb_getStatistics_response_items_item_set_site_id(adsweb_getStatistics_response_items_item_t *object, int value){
	object->site_id_ = value;
}

static int adsweb_getStatistics_response_items_item_get_site_id(adsweb_getStatistics_response_items_item_t *object){
	return object->site_id_;
}

static void adsweb_getStatistics_response_items_item_set_ad_unit_id(adsweb_getStatistics_response_items_item_t *object, int value){
	object->ad_unit_id_ = value;
}

static int adsweb_getStatistics_response_items_item_get_ad_unit_id(adsweb_getStatistics_response_items_item_t *object){
	return object->ad_unit_id_;
}

static void adsweb_getStatistics_response_items_item_set_overall_count(adsweb_getStatistics_response_items_item_t *object, int value){
	object->overall_count_ = value;
}

static int adsweb_getStatistics_response_items_item_get_overall_count(adsweb_getStatistics_response_items_item_t *object){
	return object->overall_count_;
}

static void adsweb_getStatistics_response_items_item_set_months_count(adsweb_getStatistics_response_items_item_t *object, int value){
	object->months_count_ = value;
}

static int adsweb_getStatistics_response_items_item_get_months_count(adsweb_getStatistics_response_items_item_t *object){
	return object->months_count_;
}

static void adsweb_getStatistics_response_items_item_set_month_min(adsweb_getStatistics_response_items_item_t *object, const char * value){
	object->month_min_ = strdup(value);
}

static const char * adsweb_getStatistics_response_items_item_get_month_min(adsweb_getStatistics_response_items_item_t *object){
	return object->month_min_;
}

static void adsweb_getStatistics_response_items_item_set_month_max(adsweb_getStatistics_response_items_item_t *object, const char * value){
	object->month_max_ = strdup(value);
}

static const char * adsweb_getStatistics_response_items_item_get_month_max(adsweb_getStatistics_response_items_item_t *object){
	return object->month_max_;
}

static void adsweb_getStatistics_response_items_item_set_days_count(adsweb_getStatistics_response_items_item_t *object, int value){
	object->days_count_ = value;
}

static int adsweb_getStatistics_response_items_item_get_days_count(adsweb_getStatistics_response_items_item_t *object){
	return object->days_count_;
}

static void adsweb_getStatistics_response_items_item_set_day_min(adsweb_getStatistics_response_items_item_t *object, const char * value){
	object->day_min_ = strdup(value);
}

static const char * adsweb_getStatistics_response_items_item_get_day_min(adsweb_getStatistics_response_items_item_t *object){
	return object->day_min_;
}

static void adsweb_getStatistics_response_items_item_set_day_max(adsweb_getStatistics_response_items_item_t *object, const char * value){
	object->day_max_ = strdup(value);
}

static const char * adsweb_getStatistics_response_items_item_get_day_max(adsweb_getStatistics_response_items_item_t *object){
	return object->day_max_;
}

static void adsweb_getStatistics_response_items_item_set_hours_count(adsweb_getStatistics_response_items_item_t *object, int value){
	object->hours_count_ = value;
}

static int adsweb_getStatistics_response_items_item_get_hours_count(adsweb_getStatistics_response_items_item_t *object){
	return object->hours_count_;
}

static void adsweb_getStatistics_response_items_item_set_hour_min(adsweb_getStatistics_response_items_item_t *object, const char * value){
	object->hour_min_ = strdup(value);
}

static const char * adsweb_getStatistics_response_items_item_get_hour_min(adsweb_getStatistics_response_items_item_t *object){
	return object->hour_min_;
}

static void adsweb_getStatistics_response_items_item_set_hour_max(adsweb_getStatistics_response_items_item_t *object, const char * value){
	object->hour_max_ = strdup(value);
}

static const char * adsweb_getStatistics_response_items_item_get_hour_max(adsweb_getStatistics_response_items_item_t *object){
	return object->hour_max_;
}

static void appWidgets_photo_set_id(appWidgets_photo_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * appWidgets_photo_get_id(appWidgets_photo_t *object){
	return object->id_;
}

static void appWidgets_photo_set_images(appWidgets_photo_t *object, base_image * value, int len){
int i;
	object->images_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->images[i] = value[i];
	}
	//NULL-terminate array
	object->images[i] = NULL;
}

static base_image * appWidgets_photo_get_images(appWidgets_photo_t *object){
	return object->images_;
}

static void appWidgets_photos_set_count(appWidgets_photos_t *object, int value){
	object->count_ = value;
}

static int appWidgets_photos_get_count(appWidgets_photos_t *object){
	return object->count_;
}

static void appWidgets_photos_set_items(appWidgets_photos_t *object, appWidgets_photo * value, int len){
int i;
	object->items_ = malloc(len * sizeof(appWidgets_photo) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static appWidgets_photo * appWidgets_photos_get_items(appWidgets_photos_t *object){
	return object->items_;
}

static void prettyCards_prettyCard_set_button_text(prettyCards_prettyCard_t *object, const char * value){
	object->button_text_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_button_text(prettyCards_prettyCard_t *object){
	return object->button_text_;
}

static void prettyCards_prettyCard_set_card_id(prettyCards_prettyCard_t *object, const char * value){
	object->card_id_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_card_id(prettyCards_prettyCard_t *object){
	return object->card_id_;
}

static void prettyCards_prettyCard_set_images(prettyCards_prettyCard_t *object, base_image * value, int len){
int i;
	object->images_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->images[i] = value[i];
	}
	//NULL-terminate array
	object->images[i] = NULL;
}

static base_image * prettyCards_prettyCard_get_images(prettyCards_prettyCard_t *object){
	return object->images_;
}

static void prettyCards_prettyCard_set_link_url(prettyCards_prettyCard_t *object, const char * value){
	object->link_url_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_link_url(prettyCards_prettyCard_t *object){
	return object->link_url_;
}

static void prettyCards_prettyCard_set_photo(prettyCards_prettyCard_t *object, const char * value){
	object->photo_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_photo(prettyCards_prettyCard_t *object){
	return object->photo_;
}

static void prettyCards_prettyCard_set_price(prettyCards_prettyCard_t *object, const char * value){
	object->price_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_price(prettyCards_prettyCard_t *object){
	return object->price_;
}

static void prettyCards_prettyCard_set_price_old(prettyCards_prettyCard_t *object, const char * value){
	object->price_old_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_price_old(prettyCards_prettyCard_t *object){
	return object->price_old_;
}

static void prettyCards_prettyCard_set_title(prettyCards_prettyCard_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * prettyCards_prettyCard_get_title(prettyCards_prettyCard_t *object){
	return object->title_;
}

static void owner_state_set_state(owner_state_t *object, int value){
	object->state_ = value;
}

static int owner_state_get_state(owner_state_t *object){
	return object->state_;
}

static void owner_state_set_description(owner_state_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * owner_state_get_description(owner_state_t *object){
	return object->description_;
}

static void orders_amount_set_amounts(orders_amount_t *object, orders_amount_item * value, int len){
int i;
	object->amounts_ = malloc(len * sizeof(orders_amount_item) + 8);
	for(i=0;i<len);++i){
		object->amounts[i] = value[i];
	}
	//NULL-terminate array
	object->amounts[i] = NULL;
}

static orders_amount_item * orders_amount_get_amounts(orders_amount_t *object){
	return object->amounts_;
}

static void orders_amount_set_currency(orders_amount_t *object, const char * value){
	object->currency_ = strdup(value);
}

static const char * orders_amount_get_currency(orders_amount_t *object){
	return object->currency_;
}

static void orders_amount_item_set_description(orders_amount_item_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * orders_amount_item_get_description(orders_amount_item_t *object){
	return object->description_;
}

static void orders_amount_item_set_votes(orders_amount_item_t *object, const char * value){
	object->votes_ = strdup(value);
}

static const char * orders_amount_item_get_votes(orders_amount_item_t *object){
	return object->votes_;
}

static void orders_order_set_amount(orders_order_t *object, const char * value){
	object->amount_ = strdup(value);
}

static const char * orders_order_get_amount(orders_order_t *object){
	return object->amount_;
}

static void orders_order_set_app_order_id(orders_order_t *object, const char * value){
	object->app_order_id_ = strdup(value);
}

static const char * orders_order_get_app_order_id(orders_order_t *object){
	return object->app_order_id_;
}

static void orders_order_set_cancel_transaction_id(orders_order_t *object, const char * value){
	object->cancel_transaction_id_ = strdup(value);
}

static const char * orders_order_get_cancel_transaction_id(orders_order_t *object){
	return object->cancel_transaction_id_;
}

static void orders_order_set_date(orders_order_t *object, const char * value){
	object->date_ = strdup(value);
}

static const char * orders_order_get_date(orders_order_t *object){
	return object->date_;
}

static void orders_order_set_id(orders_order_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * orders_order_get_id(orders_order_t *object){
	return object->id_;
}

static void orders_order_set_item(orders_order_t *object, const char * value){
	object->item_ = strdup(value);
}

static const char * orders_order_get_item(orders_order_t *object){
	return object->item_;
}

static void orders_order_set_receiver_id(orders_order_t *object, const char * value){
	object->receiver_id_ = strdup(value);
}

static const char * orders_order_get_receiver_id(orders_order_t *object){
	return object->receiver_id_;
}

static void orders_order_set_status(orders_order_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * orders_order_get_status(orders_order_t *object){
	return object->status_;
}

static void orders_order_set_transaction_id(orders_order_t *object, const char * value){
	object->transaction_id_ = strdup(value);
}

static const char * orders_order_get_transaction_id(orders_order_t *object){
	return object->transaction_id_;
}

static void orders_order_set_user_id(orders_order_t *object, const char * value){
	object->user_id_ = strdup(value);
}

static const char * orders_order_get_user_id(orders_order_t *object){
	return object->user_id_;
}

static void orders_subscription_set_cancel_reason(orders_subscription_t *object, const char * value){
	object->cancel_reason_ = strdup(value);
}

static const char * orders_subscription_get_cancel_reason(orders_subscription_t *object){
	return object->cancel_reason_;
}

static void orders_subscription_set_create_time(orders_subscription_t *object, int value){
	object->create_time_ = value;
}

static int orders_subscription_get_create_time(orders_subscription_t *object){
	return object->create_time_;
}

static void orders_subscription_set_id(orders_subscription_t *object, int value){
	object->id_ = value;
}

static int orders_subscription_get_id(orders_subscription_t *object){
	return object->id_;
}

static void orders_subscription_set_item_id(orders_subscription_t *object, const char * value){
	object->item_id_ = strdup(value);
}

static const char * orders_subscription_get_item_id(orders_subscription_t *object){
	return object->item_id_;
}

static void orders_subscription_set_next_bill_time(orders_subscription_t *object, int value){
	object->next_bill_time_ = value;
}

static int orders_subscription_get_next_bill_time(orders_subscription_t *object){
	return object->next_bill_time_;
}

static void orders_subscription_set_expire_time(orders_subscription_t *object, int value){
	object->expire_time_ = value;
}

static int orders_subscription_get_expire_time(orders_subscription_t *object){
	return object->expire_time_;
}

static void orders_subscription_set_pending_cancel(orders_subscription_t *object, bool value){
	object->pending_cancel_ = value;
}

static bool orders_subscription_get_pending_cancel(orders_subscription_t *object){
	return object->pending_cancel_;
}

static void orders_subscription_set_period(orders_subscription_t *object, int value){
	object->period_ = value;
}

static int orders_subscription_get_period(orders_subscription_t *object){
	return object->period_;
}

static void orders_subscription_set_period_start_time(orders_subscription_t *object, int value){
	object->period_start_time_ = value;
}

static int orders_subscription_get_period_start_time(orders_subscription_t *object){
	return object->period_start_time_;
}

static void orders_subscription_set_price(orders_subscription_t *object, int value){
	object->price_ = value;
}

static int orders_subscription_get_price(orders_subscription_t *object){
	return object->price_;
}

static void orders_subscription_set_title(orders_subscription_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * orders_subscription_get_title(orders_subscription_t *object){
	return object->title_;
}

static void orders_subscription_set_app_id(orders_subscription_t *object, int value){
	object->app_id_ = value;
}

static int orders_subscription_get_app_id(orders_subscription_t *object){
	return object->app_id_;
}

static void orders_subscription_set_application_name(orders_subscription_t *object, const char * value){
	object->application_name_ = strdup(value);
}

static const char * orders_subscription_get_application_name(orders_subscription_t *object){
	return object->application_name_;
}

static void orders_subscription_set_photo_url(orders_subscription_t *object, const char * value){
	object->photo_url_ = strdup(value);
}

static const char * orders_subscription_get_photo_url(orders_subscription_t *object){
	return object->photo_url_;
}

static void orders_subscription_set_status(orders_subscription_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * orders_subscription_get_status(orders_subscription_t *object){
	return object->status_;
}

static void orders_subscription_set_test_mode(orders_subscription_t *object, bool value){
	object->test_mode_ = value;
}

static bool orders_subscription_get_test_mode(orders_subscription_t *object){
	return object->test_mode_;
}

static void orders_subscription_set_trial_expire_time(orders_subscription_t *object, int value){
	object->trial_expire_time_ = value;
}

static int orders_subscription_get_trial_expire_time(orders_subscription_t *object){
	return object->trial_expire_time_;
}

static void orders_subscription_set_update_time(orders_subscription_t *object, int value){
	object->update_time_ = value;
}

static int orders_subscription_get_update_time(orders_subscription_t *object){
	return object->update_time_;
}

static void database_faculty_set_id(database_faculty_t *object, int value){
	object->id_ = value;
}

static int database_faculty_get_id(database_faculty_t *object){
	return object->id_;
}

static void database_faculty_set_title(database_faculty_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * database_faculty_get_title(database_faculty_t *object){
	return object->title_;
}

static void database_region_set_id(database_region_t *object, int value){
	object->id_ = value;
}

static int database_region_get_id(database_region_t *object){
	return object->id_;
}

static void database_region_set_title(database_region_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * database_region_get_title(database_region_t *object){
	return object->title_;
}

static void database_school_set_id(database_school_t *object, int value){
	object->id_ = value;
}

static int database_school_get_id(database_school_t *object){
	return object->id_;
}

static void database_school_set_title(database_school_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * database_school_get_title(database_school_t *object){
	return object->title_;
}

static void database_station_set_city_id(database_station_t *object, int value){
	object->city_id_ = value;
}

static int database_station_get_city_id(database_station_t *object){
	return object->city_id_;
}

static void database_station_set_color(database_station_t *object, const char * value){
	object->color_ = strdup(value);
}

static const char * database_station_get_color(database_station_t *object){
	return object->color_;
}

static void database_station_set_id(database_station_t *object, int value){
	object->id_ = value;
}

static int database_station_get_id(database_station_t *object){
	return object->id_;
}

static void database_station_set_name(database_station_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * database_station_get_name(database_station_t *object){
	return object->name_;
}

static void database_university_set_id(database_university_t *object, int value){
	object->id_ = value;
}

static int database_university_get_id(database_university_t *object){
	return object->id_;
}

static void database_university_set_title(database_university_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * database_university_get_title(database_university_t *object){
	return object->title_;
}

static void status_status_set_text(status_status_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * status_status_get_text(status_status_t *object){
	return object->text_;
}

static void status_status_set_audio(status_status_t *object, audio_audio_t value){
	object->audio_ = value;
}

static audio_audio_t status_status_get_audio(status_status_t *object){
	return object->audio_;
}

static void apps_app_min_set_type(apps_app_min_t *object, apps_app_type_t value){
	object->type_ = value;
}

static apps_app_type_t apps_app_min_get_type(apps_app_min_t *object){
	return object->type_;
}

static void apps_app_min_set_id(apps_app_min_t *object, int value){
	object->id_ = value;
}

static int apps_app_min_get_id(apps_app_min_t *object){
	return object->id_;
}

static void apps_app_min_set_title(apps_app_min_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * apps_app_min_get_title(apps_app_min_t *object){
	return object->title_;
}

static void apps_app_min_set_author_owner_id(apps_app_min_t *object, int value){
	object->author_owner_id_ = value;
}

static int apps_app_min_get_author_owner_id(apps_app_min_t *object){
	return object->author_owner_id_;
}

static void apps_app_min_set_is_installed(apps_app_min_t *object, bool value){
	object->is_installed_ = value;
}

static bool apps_app_min_get_is_installed(apps_app_min_t *object){
	return object->is_installed_;
}

static void apps_app_min_set_icon_139(apps_app_min_t *object, const char * value){
	object->icon_139_ = strdup(value);
}

static const char * apps_app_min_get_icon_139(apps_app_min_t *object){
	return object->icon_139_;
}

static void apps_app_min_set_icon_150(apps_app_min_t *object, const char * value){
	object->icon_150_ = strdup(value);
}

static const char * apps_app_min_get_icon_150(apps_app_min_t *object){
	return object->icon_150_;
}

static void apps_app_min_set_icon_278(apps_app_min_t *object, const char * value){
	object->icon_278_ = strdup(value);
}

static const char * apps_app_min_get_icon_278(apps_app_min_t *object){
	return object->icon_278_;
}

static void apps_app_min_set_icon_576(apps_app_min_t *object, const char * value){
	object->icon_576_ = strdup(value);
}

static const char * apps_app_min_get_icon_576(apps_app_min_t *object){
	return object->icon_576_;
}

static void apps_app_min_set_background_loader_color(apps_app_min_t *object, const char * value){
	object->background_loader_color_ = strdup(value);
}

static const char * apps_app_min_get_background_loader_color(apps_app_min_t *object){
	return object->background_loader_color_;
}

static void apps_app_min_set_loader_icon(apps_app_min_t *object, const char * value){
	object->loader_icon_ = strdup(value);
}

static const char * apps_app_min_get_loader_icon(apps_app_min_t *object){
	return object->loader_icon_;
}

static void apps_app_min_set_icon_75(apps_app_min_t *object, const char * value){
	object->icon_75_ = strdup(value);
}

static const char * apps_app_min_get_icon_75(apps_app_min_t *object){
	return object->icon_75_;
}

static void apps_catalog_list_set_count(apps_catalog_list_t *object, int value){
	object->count_ = value;
}

static int apps_catalog_list_get_count(apps_catalog_list_t *object){
	return object->count_;
}

static void apps_catalog_list_set_items(apps_catalog_list_t *object, apps_app * value, int len){
int i;
	object->items_ = malloc(len * sizeof(apps_app) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static apps_app * apps_catalog_list_get_items(apps_catalog_list_t *object){
	return object->items_;
}

static void apps_catalog_list_set_profiles(apps_catalog_list_t *object, users_user_min * value, int len){
int i;
	object->profiles_ = malloc(len * sizeof(users_user_min) + 8);
	for(i=0;i<len);++i){
		object->profiles[i] = value[i];
	}
	//NULL-terminate array
	object->profiles[i] = NULL;
}

static users_user_min * apps_catalog_list_get_profiles(apps_catalog_list_t *object){
	return object->profiles_;
}

static void apps_leaderboard_set_level(apps_leaderboard_t *object, int value){
	object->level_ = value;
}

static int apps_leaderboard_get_level(apps_leaderboard_t *object){
	return object->level_;
}

static void apps_leaderboard_set_points(apps_leaderboard_t *object, int value){
	object->points_ = value;
}

static int apps_leaderboard_get_points(apps_leaderboard_t *object){
	return object->points_;
}

static void apps_leaderboard_set_score(apps_leaderboard_t *object, int value){
	object->score_ = value;
}

static int apps_leaderboard_get_score(apps_leaderboard_t *object){
	return object->score_;
}

static void apps_leaderboard_set_user_id(apps_leaderboard_t *object, int64 value){
	object->user_id_ = value;
}

static int64 apps_leaderboard_get_user_id(apps_leaderboard_t *object){
	return object->user_id_;
}

static void apps_scope_set_name(apps_scope_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * apps_scope_get_name(apps_scope_t *object){
	return object->name_;
}

static void apps_scope_set_title(apps_scope_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * apps_scope_get_title(apps_scope_t *object){
	return object->title_;
}

static void pages_wikipage_set_creator_id(pages_wikipage_t *object, int value){
	object->creator_id_ = value;
}

static int pages_wikipage_get_creator_id(pages_wikipage_t *object){
	return object->creator_id_;
}

static void pages_wikipage_set_creator_name(pages_wikipage_t *object, const char * value){
	object->creator_name_ = strdup(value);
}

static const char * pages_wikipage_get_creator_name(pages_wikipage_t *object){
	return object->creator_name_;
}

static void pages_wikipage_set_editor_id(pages_wikipage_t *object, int value){
	object->editor_id_ = value;
}

static int pages_wikipage_get_editor_id(pages_wikipage_t *object){
	return object->editor_id_;
}

static void pages_wikipage_set_editor_name(pages_wikipage_t *object, const char * value){
	object->editor_name_ = strdup(value);
}

static const char * pages_wikipage_get_editor_name(pages_wikipage_t *object){
	return object->editor_name_;
}

static void pages_wikipage_set_group_id(pages_wikipage_t *object, int64 value){
	object->group_id_ = value;
}

static int64 pages_wikipage_get_group_id(pages_wikipage_t *object){
	return object->group_id_;
}

static void pages_wikipage_set_id(pages_wikipage_t *object, int value){
	object->id_ = value;
}

static int pages_wikipage_get_id(pages_wikipage_t *object){
	return object->id_;
}

static void pages_wikipage_set_title(pages_wikipage_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * pages_wikipage_get_title(pages_wikipage_t *object){
	return object->title_;
}

static void pages_wikipage_set_views(pages_wikipage_t *object, int value){
	object->views_ = value;
}

static int pages_wikipage_get_views(pages_wikipage_t *object){
	return object->views_;
}

static void pages_wikipage_set_who_can_edit(pages_wikipage_t *object, pages_privacy_settings_t value){
	object->who_can_edit_ = value;
}

static pages_privacy_settings_t pages_wikipage_get_who_can_edit(pages_wikipage_t *object){
	return object->who_can_edit_;
}

static void pages_wikipage_set_who_can_view(pages_wikipage_t *object, pages_privacy_settings_t value){
	object->who_can_view_ = value;
}

static pages_privacy_settings_t pages_wikipage_get_who_can_view(pages_wikipage_t *object){
	return object->who_can_view_;
}

static void pages_wikipage_full_set_created(pages_wikipage_full_t *object, int value){
	object->created_ = value;
}

static int pages_wikipage_full_get_created(pages_wikipage_full_t *object){
	return object->created_;
}

static void pages_wikipage_full_set_creator_id(pages_wikipage_full_t *object, int value){
	object->creator_id_ = value;
}

static int pages_wikipage_full_get_creator_id(pages_wikipage_full_t *object){
	return object->creator_id_;
}

static void pages_wikipage_full_set_current_user_can_edit(pages_wikipage_full_t *object, base_bool_int_t value){
	object->current_user_can_edit_ = value;
}

static base_bool_int_t pages_wikipage_full_get_current_user_can_edit(pages_wikipage_full_t *object){
	return object->current_user_can_edit_;
}

static void pages_wikipage_full_set_current_user_can_edit_access(pages_wikipage_full_t *object, base_bool_int_t value){
	object->current_user_can_edit_access_ = value;
}

static base_bool_int_t pages_wikipage_full_get_current_user_can_edit_access(pages_wikipage_full_t *object){
	return object->current_user_can_edit_access_;
}

static void pages_wikipage_full_set_edited(pages_wikipage_full_t *object, int value){
	object->edited_ = value;
}

static int pages_wikipage_full_get_edited(pages_wikipage_full_t *object){
	return object->edited_;
}

static void pages_wikipage_full_set_editor_id(pages_wikipage_full_t *object, int value){
	object->editor_id_ = value;
}

static int pages_wikipage_full_get_editor_id(pages_wikipage_full_t *object){
	return object->editor_id_;
}

static void pages_wikipage_full_set_group_id(pages_wikipage_full_t *object, int64 value){
	object->group_id_ = value;
}

static int64 pages_wikipage_full_get_group_id(pages_wikipage_full_t *object){
	return object->group_id_;
}

static void pages_wikipage_full_set_html(pages_wikipage_full_t *object, const char * value){
	object->html_ = strdup(value);
}

static const char * pages_wikipage_full_get_html(pages_wikipage_full_t *object){
	return object->html_;
}

static void pages_wikipage_full_set_id(pages_wikipage_full_t *object, int value){
	object->id_ = value;
}

static int pages_wikipage_full_get_id(pages_wikipage_full_t *object){
	return object->id_;
}

static void pages_wikipage_full_set_source(pages_wikipage_full_t *object, const char * value){
	object->source_ = strdup(value);
}

static const char * pages_wikipage_full_get_source(pages_wikipage_full_t *object){
	return object->source_;
}

static void pages_wikipage_full_set_title(pages_wikipage_full_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * pages_wikipage_full_get_title(pages_wikipage_full_t *object){
	return object->title_;
}

static void pages_wikipage_full_set_view_url(pages_wikipage_full_t *object, const char * value){
	object->view_url_ = strdup(value);
}

static const char * pages_wikipage_full_get_view_url(pages_wikipage_full_t *object){
	return object->view_url_;
}

static void pages_wikipage_full_set_views(pages_wikipage_full_t *object, int value){
	object->views_ = value;
}

static int pages_wikipage_full_get_views(pages_wikipage_full_t *object){
	return object->views_;
}

static void pages_wikipage_full_set_who_can_edit(pages_wikipage_full_t *object, pages_privacy_settings_t value){
	object->who_can_edit_ = value;
}

static pages_privacy_settings_t pages_wikipage_full_get_who_can_edit(pages_wikipage_full_t *object){
	return object->who_can_edit_;
}

static void pages_wikipage_full_set_who_can_view(pages_wikipage_full_t *object, pages_privacy_settings_t value){
	object->who_can_view_ = value;
}

static pages_privacy_settings_t pages_wikipage_full_get_who_can_view(pages_wikipage_full_t *object){
	return object->who_can_view_;
}

static void pages_wikipage_full_set_url(pages_wikipage_full_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * pages_wikipage_full_get_url(pages_wikipage_full_t *object){
	return object->url_;
}

static void pages_wikipage_full_set_parent(pages_wikipage_full_t *object, const char * value){
	object->parent_ = strdup(value);
}

static const char * pages_wikipage_full_get_parent(pages_wikipage_full_t *object){
	return object->parent_;
}

static void pages_wikipage_full_set_parent2(pages_wikipage_full_t *object, const char * value){
	object->parent2_ = strdup(value);
}

static const char * pages_wikipage_full_get_parent2(pages_wikipage_full_t *object){
	return object->parent2_;
}

static void pages_wikipage_full_set_owner_id(pages_wikipage_full_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 pages_wikipage_full_get_owner_id(pages_wikipage_full_t *object){
	return object->owner_id_;
}

static void pages_wikipage_history_set_id(pages_wikipage_history_t *object, int value){
	object->id_ = value;
}

static int pages_wikipage_history_get_id(pages_wikipage_history_t *object){
	return object->id_;
}

static void pages_wikipage_history_set_length(pages_wikipage_history_t *object, int value){
	object->length_ = value;
}

static int pages_wikipage_history_get_length(pages_wikipage_history_t *object){
	return object->length_;
}

static void pages_wikipage_history_set_date(pages_wikipage_history_t *object, int value){
	object->date_ = value;
}

static int pages_wikipage_history_get_date(pages_wikipage_history_t *object){
	return object->date_;
}

static void pages_wikipage_history_set_editor_id(pages_wikipage_history_t *object, int value){
	object->editor_id_ = value;
}

static int pages_wikipage_history_get_editor_id(pages_wikipage_history_t *object){
	return object->editor_id_;
}

static void pages_wikipage_history_set_editor_name(pages_wikipage_history_t *object, const char * value){
	object->editor_name_ = strdup(value);
}

static const char * pages_wikipage_history_get_editor_name(pages_wikipage_history_t *object){
	return object->editor_name_;
}

static void stats_activity_set_comments(stats_activity_t *object, int value){
	object->comments_ = value;
}

static int stats_activity_get_comments(stats_activity_t *object){
	return object->comments_;
}

static void stats_activity_set_copies(stats_activity_t *object, int value){
	object->copies_ = value;
}

static int stats_activity_get_copies(stats_activity_t *object){
	return object->copies_;
}

static void stats_activity_set_hidden(stats_activity_t *object, int value){
	object->hidden_ = value;
}

static int stats_activity_get_hidden(stats_activity_t *object){
	return object->hidden_;
}

static void stats_activity_set_likes(stats_activity_t *object, int value){
	object->likes_ = value;
}

static int stats_activity_get_likes(stats_activity_t *object){
	return object->likes_;
}

static void stats_activity_set_subscribed(stats_activity_t *object, int value){
	object->subscribed_ = value;
}

static int stats_activity_get_subscribed(stats_activity_t *object){
	return object->subscribed_;
}

static void stats_activity_set_unsubscribed(stats_activity_t *object, int value){
	object->unsubscribed_ = value;
}

static int stats_activity_get_unsubscribed(stats_activity_t *object){
	return object->unsubscribed_;
}

static void stats_city_set_count(stats_city_t *object, int value){
	object->count_ = value;
}

static int stats_city_get_count(stats_city_t *object){
	return object->count_;
}

static void stats_city_set_name(stats_city_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * stats_city_get_name(stats_city_t *object){
	return object->name_;
}

static void stats_city_set_value(stats_city_t *object, int value){
	object->value_ = value;
}

static int stats_city_get_value(stats_city_t *object){
	return object->value_;
}

static void stats_country_set_code(stats_country_t *object, const char * value){
	object->code_ = strdup(value);
}

static const char * stats_country_get_code(stats_country_t *object){
	return object->code_;
}

static void stats_country_set_count(stats_country_t *object, int value){
	object->count_ = value;
}

static int stats_country_get_count(stats_country_t *object){
	return object->count_;
}

static void stats_country_set_name(stats_country_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * stats_country_get_name(stats_country_t *object){
	return object->name_;
}

static void stats_country_set_value(stats_country_t *object, int value){
	object->value_ = value;
}

static int stats_country_get_value(stats_country_t *object){
	return object->value_;
}

static void stats_period_set_activity(stats_period_t *object, stats_activity_t value){
	object->activity_ = value;
}

static stats_activity_t stats_period_get_activity(stats_period_t *object){
	return object->activity_;
}

static void stats_period_set_period_from(stats_period_t *object, int value){
	object->period_from_ = value;
}

static int stats_period_get_period_from(stats_period_t *object){
	return object->period_from_;
}

static void stats_period_set_period_to(stats_period_t *object, int value){
	object->period_to_ = value;
}

static int stats_period_get_period_to(stats_period_t *object){
	return object->period_to_;
}

static void stats_period_set_reach(stats_period_t *object, stats_reach_t value){
	object->reach_ = value;
}

static stats_reach_t stats_period_get_reach(stats_period_t *object){
	return object->reach_;
}

static void stats_period_set_visitors(stats_period_t *object, stats_views_t value){
	object->visitors_ = value;
}

static stats_views_t stats_period_get_visitors(stats_period_t *object){
	return object->visitors_;
}

static void stats_reach_set_age(stats_reach_t *object, stats_sex_age * value, int len){
int i;
	object->age_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->age[i] = value[i];
	}
	//NULL-terminate array
	object->age[i] = NULL;
}

static stats_sex_age * stats_reach_get_age(stats_reach_t *object){
	return object->age_;
}

static void stats_reach_set_cities(stats_reach_t *object, stats_city * value, int len){
int i;
	object->cities_ = malloc(len * sizeof(stats_city) + 8);
	for(i=0;i<len);++i){
		object->cities[i] = value[i];
	}
	//NULL-terminate array
	object->cities[i] = NULL;
}

static stats_city * stats_reach_get_cities(stats_reach_t *object){
	return object->cities_;
}

static void stats_reach_set_countries(stats_reach_t *object, stats_country * value, int len){
int i;
	object->countries_ = malloc(len * sizeof(stats_country) + 8);
	for(i=0;i<len);++i){
		object->countries[i] = value[i];
	}
	//NULL-terminate array
	object->countries[i] = NULL;
}

static stats_country * stats_reach_get_countries(stats_reach_t *object){
	return object->countries_;
}

static void stats_reach_set_mobile_reach(stats_reach_t *object, int value){
	object->mobile_reach_ = value;
}

static int stats_reach_get_mobile_reach(stats_reach_t *object){
	return object->mobile_reach_;
}

static void stats_reach_set_reach(stats_reach_t *object, int value){
	object->reach_ = value;
}

static int stats_reach_get_reach(stats_reach_t *object){
	return object->reach_;
}

static void stats_reach_set_reach_subscribers(stats_reach_t *object, int value){
	object->reach_subscribers_ = value;
}

static int stats_reach_get_reach_subscribers(stats_reach_t *object){
	return object->reach_subscribers_;
}

static void stats_reach_set_sex(stats_reach_t *object, stats_sex_age * value, int len){
int i;
	object->sex_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->sex[i] = value[i];
	}
	//NULL-terminate array
	object->sex[i] = NULL;
}

static stats_sex_age * stats_reach_get_sex(stats_reach_t *object){
	return object->sex_;
}

static void stats_reach_set_sex_age(stats_reach_t *object, stats_sex_age * value, int len){
int i;
	object->sex_age_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->sex_age[i] = value[i];
	}
	//NULL-terminate array
	object->sex_age[i] = NULL;
}

static stats_sex_age * stats_reach_get_sex_age(stats_reach_t *object){
	return object->sex_age_;
}

static void stats_sex_age_set_count(stats_sex_age_t *object, int value){
	object->count_ = value;
}

static int stats_sex_age_get_count(stats_sex_age_t *object){
	return object->count_;
}

static void stats_sex_age_set_value(stats_sex_age_t *object, const char * value){
	object->value_ = strdup(value);
}

static const char * stats_sex_age_get_value(stats_sex_age_t *object){
	return object->value_;
}

static void stats_sex_age_set_reach(stats_sex_age_t *object, int value){
	object->reach_ = value;
}

static int stats_sex_age_get_reach(stats_sex_age_t *object){
	return object->reach_;
}

static void stats_sex_age_set_reach_subscribers(stats_sex_age_t *object, int value){
	object->reach_subscribers_ = value;
}

static int stats_sex_age_get_reach_subscribers(stats_sex_age_t *object){
	return object->reach_subscribers_;
}

static void stats_sex_age_set_count_subscribers(stats_sex_age_t *object, int value){
	object->count_subscribers_ = value;
}

static int stats_sex_age_get_count_subscribers(stats_sex_age_t *object){
	return object->count_subscribers_;
}

static void stats_views_set_age(stats_views_t *object, stats_sex_age * value, int len){
int i;
	object->age_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->age[i] = value[i];
	}
	//NULL-terminate array
	object->age[i] = NULL;
}

static stats_sex_age * stats_views_get_age(stats_views_t *object){
	return object->age_;
}

static void stats_views_set_cities(stats_views_t *object, stats_city * value, int len){
int i;
	object->cities_ = malloc(len * sizeof(stats_city) + 8);
	for(i=0;i<len);++i){
		object->cities[i] = value[i];
	}
	//NULL-terminate array
	object->cities[i] = NULL;
}

static stats_city * stats_views_get_cities(stats_views_t *object){
	return object->cities_;
}

static void stats_views_set_countries(stats_views_t *object, stats_country * value, int len){
int i;
	object->countries_ = malloc(len * sizeof(stats_country) + 8);
	for(i=0;i<len);++i){
		object->countries[i] = value[i];
	}
	//NULL-terminate array
	object->countries[i] = NULL;
}

static stats_country * stats_views_get_countries(stats_views_t *object){
	return object->countries_;
}

static void stats_views_set_mobile_views(stats_views_t *object, int value){
	object->mobile_views_ = value;
}

static int stats_views_get_mobile_views(stats_views_t *object){
	return object->mobile_views_;
}

static void stats_views_set_sex(stats_views_t *object, stats_sex_age * value, int len){
int i;
	object->sex_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->sex[i] = value[i];
	}
	//NULL-terminate array
	object->sex[i] = NULL;
}

static stats_sex_age * stats_views_get_sex(stats_views_t *object){
	return object->sex_;
}

static void stats_views_set_sex_age(stats_views_t *object, stats_sex_age * value, int len){
int i;
	object->sex_age_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->sex_age[i] = value[i];
	}
	//NULL-terminate array
	object->sex_age[i] = NULL;
}

static stats_sex_age * stats_views_get_sex_age(stats_views_t *object){
	return object->sex_age_;
}

static void stats_views_set_views(stats_views_t *object, int value){
	object->views_ = value;
}

static int stats_views_get_views(stats_views_t *object){
	return object->views_;
}

static void stats_views_set_visitors(stats_views_t *object, int value){
	object->visitors_ = value;
}

static int stats_views_get_visitors(stats_views_t *object){
	return object->visitors_;
}

static void stats_wallpost_stat_set_post_id(stats_wallpost_stat_t *object, int value){
	object->post_id_ = value;
}

static int stats_wallpost_stat_get_post_id(stats_wallpost_stat_t *object){
	return object->post_id_;
}

static void stats_wallpost_stat_set_hide(stats_wallpost_stat_t *object, int value){
	object->hide_ = value;
}

static int stats_wallpost_stat_get_hide(stats_wallpost_stat_t *object){
	return object->hide_;
}

static void stats_wallpost_stat_set_join_group(stats_wallpost_stat_t *object, int value){
	object->join_group_ = value;
}

static int stats_wallpost_stat_get_join_group(stats_wallpost_stat_t *object){
	return object->join_group_;
}

static void stats_wallpost_stat_set_links(stats_wallpost_stat_t *object, int value){
	object->links_ = value;
}

static int stats_wallpost_stat_get_links(stats_wallpost_stat_t *object){
	return object->links_;
}

static void stats_wallpost_stat_set_reach_subscribers(stats_wallpost_stat_t *object, int value){
	object->reach_subscribers_ = value;
}

static int stats_wallpost_stat_get_reach_subscribers(stats_wallpost_stat_t *object){
	return object->reach_subscribers_;
}

static void stats_wallpost_stat_set_reach_subscribers_count(stats_wallpost_stat_t *object, int value){
	object->reach_subscribers_count_ = value;
}

static int stats_wallpost_stat_get_reach_subscribers_count(stats_wallpost_stat_t *object){
	return object->reach_subscribers_count_;
}

static void stats_wallpost_stat_set_reach_total(stats_wallpost_stat_t *object, int value){
	object->reach_total_ = value;
}

static int stats_wallpost_stat_get_reach_total(stats_wallpost_stat_t *object){
	return object->reach_total_;
}

static void stats_wallpost_stat_set_reach_total_count(stats_wallpost_stat_t *object, int value){
	object->reach_total_count_ = value;
}

static int stats_wallpost_stat_get_reach_total_count(stats_wallpost_stat_t *object){
	return object->reach_total_count_;
}

static void stats_wallpost_stat_set_reach_viral(stats_wallpost_stat_t *object, int value){
	object->reach_viral_ = value;
}

static int stats_wallpost_stat_get_reach_viral(stats_wallpost_stat_t *object){
	return object->reach_viral_;
}

static void stats_wallpost_stat_set_reach_ads(stats_wallpost_stat_t *object, int value){
	object->reach_ads_ = value;
}

static int stats_wallpost_stat_get_reach_ads(stats_wallpost_stat_t *object){
	return object->reach_ads_;
}

static void stats_wallpost_stat_set_report(stats_wallpost_stat_t *object, int value){
	object->report_ = value;
}

static int stats_wallpost_stat_get_report(stats_wallpost_stat_t *object){
	return object->report_;
}

static void stats_wallpost_stat_set_to_group(stats_wallpost_stat_t *object, int value){
	object->to_group_ = value;
}

static int stats_wallpost_stat_get_to_group(stats_wallpost_stat_t *object){
	return object->to_group_;
}

static void stats_wallpost_stat_set_unsubscribe(stats_wallpost_stat_t *object, int value){
	object->unsubscribe_ = value;
}

static int stats_wallpost_stat_get_unsubscribe(stats_wallpost_stat_t *object){
	return object->unsubscribe_;
}

static void stats_wallpost_stat_set_sex_age(stats_wallpost_stat_t *object, stats_sex_age * value, int len){
int i;
	object->sex_age_ = malloc(len * sizeof(stats_sex_age) + 8);
	for(i=0;i<len);++i){
		object->sex_age[i] = value[i];
	}
	//NULL-terminate array
	object->sex_age[i] = NULL;
}

static stats_sex_age * stats_wallpost_stat_get_sex_age(stats_wallpost_stat_t *object){
	return object->sex_age_;
}

static void fave_bookmark_set_added_date(fave_bookmark_t *object, int value){
	object->added_date_ = value;
}

static int fave_bookmark_get_added_date(fave_bookmark_t *object){
	return object->added_date_;
}

static void fave_bookmark_set_link(fave_bookmark_t *object, base_link_t value){
	object->link_ = value;
}

static base_link_t fave_bookmark_get_link(fave_bookmark_t *object){
	return object->link_;
}

static void fave_bookmark_set_post(fave_bookmark_t *object, wall_wallpost_full_t value){
	object->post_ = value;
}

static wall_wallpost_full_t fave_bookmark_get_post(fave_bookmark_t *object){
	return object->post_;
}

static void fave_bookmark_set_product(fave_bookmark_t *object, market_market_item_t value){
	object->product_ = value;
}

static market_market_item_t fave_bookmark_get_product(fave_bookmark_t *object){
	return object->product_;
}

static void fave_bookmark_set_seen(fave_bookmark_t *object, bool value){
	object->seen_ = value;
}

static bool fave_bookmark_get_seen(fave_bookmark_t *object){
	return object->seen_;
}

static void fave_bookmark_set_tags(fave_bookmark_t *object, fave_tag * value, int len){
int i;
	object->tags_ = malloc(len * sizeof(fave_tag) + 8);
	for(i=0;i<len);++i){
		object->tags[i] = value[i];
	}
	//NULL-terminate array
	object->tags[i] = NULL;
}

static fave_tag * fave_bookmark_get_tags(fave_bookmark_t *object){
	return object->tags_;
}

static void fave_bookmark_set_type(fave_bookmark_t *object, fave_bookmark_type_t value){
	object->type_ = value;
}

static fave_bookmark_type_t fave_bookmark_get_type(fave_bookmark_t *object){
	return object->type_;
}

static void fave_bookmark_set_video(fave_bookmark_t *object, video_video_full_t value){
	object->video_ = value;
}

static video_video_full_t fave_bookmark_get_video(fave_bookmark_t *object){
	return object->video_;
}

static void fave_page_set_description(fave_page_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * fave_page_get_description(fave_page_t *object){
	return object->description_;
}

static void fave_page_set_group(fave_page_t *object, groups_group_full_t value){
	object->group_ = value;
}

static groups_group_full_t fave_page_get_group(fave_page_t *object){
	return object->group_;
}

static void fave_page_set_tags(fave_page_t *object, fave_tag * value, int len){
int i;
	object->tags_ = malloc(len * sizeof(fave_tag) + 8);
	for(i=0;i<len);++i){
		object->tags[i] = value[i];
	}
	//NULL-terminate array
	object->tags[i] = NULL;
}

static fave_tag * fave_page_get_tags(fave_page_t *object){
	return object->tags_;
}

static void fave_page_set_type(fave_page_t *object, fave_page_type_t value){
	object->type_ = value;
}

static fave_page_type_t fave_page_get_type(fave_page_t *object){
	return object->type_;
}

static void fave_page_set_updated_date(fave_page_t *object, int value){
	object->updated_date_ = value;
}

static int fave_page_get_updated_date(fave_page_t *object){
	return object->updated_date_;
}

static void fave_page_set_user(fave_page_t *object, users_user_full_t value){
	object->user_ = value;
}

static users_user_full_t fave_page_get_user(fave_page_t *object){
	return object->user_;
}

static void fave_tag_set_id(fave_tag_t *object, int value){
	object->id_ = value;
}

static int fave_tag_get_id(fave_tag_t *object){
	return object->id_;
}

static void fave_tag_set_name(fave_tag_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * fave_tag_get_name(fave_tag_t *object){
	return object->name_;
}

static void search_hint_set_app(search_hint_t *object, apps_app_t value){
	object->app_ = value;
}

static apps_app_t search_hint_get_app(search_hint_t *object){
	return object->app_;
}

static void search_hint_set_description(search_hint_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * search_hint_get_description(search_hint_t *object){
	return object->description_;
}

static void search_hint_set_global(search_hint_t *object, base_bool_int_t value){
	object->global_ = value;
}

static base_bool_int_t search_hint_get_global(search_hint_t *object){
	return object->global_;
}

static void search_hint_set_group(search_hint_t *object, groups_group_t value){
	object->group_ = value;
}

static groups_group_t search_hint_get_group(search_hint_t *object){
	return object->group_;
}

static void search_hint_set_profile(search_hint_t *object, users_user_min_t value){
	object->profile_ = value;
}

static users_user_min_t search_hint_get_profile(search_hint_t *object){
	return object->profile_;
}

static void search_hint_set_section(search_hint_t *object, search_hint_section_t value){
	object->section_ = value;
}

static search_hint_section_t search_hint_get_section(search_hint_t *object){
	return object->section_;
}

static void search_hint_set_type(search_hint_t *object, search_hint_type_t value){
	object->type_ = value;
}

static search_hint_type_t search_hint_get_type(search_hint_t *object){
	return object->type_;
}

static void search_hint_set_link(search_hint_t *object, base_link_t value){
	object->link_ = value;
}

static base_link_t search_hint_get_link(search_hint_t *object){
	return object->link_;
}

static void leadForms_answer_set_key(leadForms_answer_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * leadForms_answer_get_key(leadForms_answer_t *object){
	return object->key_;
}

static void leadForms_answer_item_set_key(leadForms_answer_item_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * leadForms_answer_item_get_key(leadForms_answer_item_t *object){
	return object->key_;
}

static void leadForms_answer_item_set_value(leadForms_answer_item_t *object, const char * value){
	object->value_ = strdup(value);
}

static const char * leadForms_answer_item_get_value(leadForms_answer_item_t *object){
	return object->value_;
}

static void leadForms_form_set_form_id(leadForms_form_t *object, int value){
	object->form_id_ = value;
}

static int leadForms_form_get_form_id(leadForms_form_t *object){
	return object->form_id_;
}

static void leadForms_form_set_group_id(leadForms_form_t *object, int64 value){
	object->group_id_ = value;
}

static int64 leadForms_form_get_group_id(leadForms_form_t *object){
	return object->group_id_;
}

static void leadForms_form_set_photo(leadForms_form_t *object, const char * value){
	object->photo_ = strdup(value);
}

static const char * leadForms_form_get_photo(leadForms_form_t *object){
	return object->photo_;
}

static void leadForms_form_set_name(leadForms_form_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * leadForms_form_get_name(leadForms_form_t *object){
	return object->name_;
}

static void leadForms_form_set_title(leadForms_form_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * leadForms_form_get_title(leadForms_form_t *object){
	return object->title_;
}

static void leadForms_form_set_description(leadForms_form_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * leadForms_form_get_description(leadForms_form_t *object){
	return object->description_;
}

static void leadForms_form_set_confirmation(leadForms_form_t *object, const char * value){
	object->confirmation_ = strdup(value);
}

static const char * leadForms_form_get_confirmation(leadForms_form_t *object){
	return object->confirmation_;
}

static void leadForms_form_set_site_link_url(leadForms_form_t *object, const char * value){
	object->site_link_url_ = strdup(value);
}

static const char * leadForms_form_get_site_link_url(leadForms_form_t *object){
	return object->site_link_url_;
}

static void leadForms_form_set_policy_link_url(leadForms_form_t *object, const char * value){
	object->policy_link_url_ = strdup(value);
}

static const char * leadForms_form_get_policy_link_url(leadForms_form_t *object){
	return object->policy_link_url_;
}

static void leadForms_form_set_questions(leadForms_form_t *object, leadForms_question_item * value, int len){
int i;
	object->questions_ = malloc(len * sizeof(leadForms_question_item) + 8);
	for(i=0;i<len);++i){
		object->questions[i] = value[i];
	}
	//NULL-terminate array
	object->questions[i] = NULL;
}

static leadForms_question_item * leadForms_form_get_questions(leadForms_form_t *object){
	return object->questions_;
}

static void leadForms_form_set_active(leadForms_form_t *object, base_bool_int_t value){
	object->active_ = value;
}

static base_bool_int_t leadForms_form_get_active(leadForms_form_t *object){
	return object->active_;
}

static void leadForms_form_set_leads_count(leadForms_form_t *object, int value){
	object->leads_count_ = value;
}

static int leadForms_form_get_leads_count(leadForms_form_t *object){
	return object->leads_count_;
}

static void leadForms_form_set_pixel_code(leadForms_form_t *object, const char * value){
	object->pixel_code_ = strdup(value);
}

static const char * leadForms_form_get_pixel_code(leadForms_form_t *object){
	return object->pixel_code_;
}

static void leadForms_form_set_once_per_user(leadForms_form_t *object, int value){
	object->once_per_user_ = value;
}

static int leadForms_form_get_once_per_user(leadForms_form_t *object){
	return object->once_per_user_;
}

static void leadForms_form_set_notify_admins(leadForms_form_t *object, const char * value){
	object->notify_admins_ = strdup(value);
}

static const char * leadForms_form_get_notify_admins(leadForms_form_t *object){
	return object->notify_admins_;
}

static void leadForms_form_set_notify_emails(leadForms_form_t *object, const char * value){
	object->notify_emails_ = strdup(value);
}

static const char * leadForms_form_get_notify_emails(leadForms_form_t *object){
	return object->notify_emails_;
}

static void leadForms_form_set_url(leadForms_form_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * leadForms_form_get_url(leadForms_form_t *object){
	return object->url_;
}

static void leadForms_lead_set_lead_id(leadForms_lead_t *object, int value){
	object->lead_id_ = value;
}

static int leadForms_lead_get_lead_id(leadForms_lead_t *object){
	return object->lead_id_;
}

static void leadForms_lead_set_user_id(leadForms_lead_t *object, int64 value){
	object->user_id_ = value;
}

static int64 leadForms_lead_get_user_id(leadForms_lead_t *object){
	return object->user_id_;
}

static void leadForms_lead_set_date(leadForms_lead_t *object, int value){
	object->date_ = value;
}

static int leadForms_lead_get_date(leadForms_lead_t *object){
	return object->date_;
}

static void leadForms_lead_set_answers(leadForms_lead_t *object, leadForms_answer * value, int len){
int i;
	object->answers_ = malloc(len * sizeof(leadForms_answer) + 8);
	for(i=0;i<len);++i){
		object->answers[i] = value[i];
	}
	//NULL-terminate array
	object->answers[i] = NULL;
}

static leadForms_answer * leadForms_lead_get_answers(leadForms_lead_t *object){
	return object->answers_;
}

static void leadForms_lead_set_ad_id(leadForms_lead_t *object, int value){
	object->ad_id_ = value;
}

static int leadForms_lead_get_ad_id(leadForms_lead_t *object){
	return object->ad_id_;
}

static void leadForms_question_item_set_key(leadForms_question_item_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * leadForms_question_item_get_key(leadForms_question_item_t *object){
	return object->key_;
}

static void leadForms_question_item_set_type(leadForms_question_item_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * leadForms_question_item_get_type(leadForms_question_item_t *object){
	return object->type_;
}

static void leadForms_question_item_set_label(leadForms_question_item_t *object, const char * value){
	object->label_ = strdup(value);
}

static const char * leadForms_question_item_get_label(leadForms_question_item_t *object){
	return object->label_;
}

static void leadForms_question_item_set_options(leadForms_question_item_t *object, leadForms_question_item_option * value, int len){
int i;
	object->options_ = malloc(len * sizeof(leadForms_question_item_option) + 8);
	for(i=0;i<len);++i){
		object->options[i] = value[i];
	}
	//NULL-terminate array
	object->options[i] = NULL;
}

static leadForms_question_item_option * leadForms_question_item_get_options(leadForms_question_item_t *object){
	return object->options_;
}

static void leadForms_question_item_option_set_key(leadForms_question_item_option_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * leadForms_question_item_option_get_key(leadForms_question_item_option_t *object){
	return object->key_;
}

static void leadForms_question_item_option_set_label(leadForms_question_item_option_t *object, const char * value){
	object->label_ = strdup(value);
}

static const char * leadForms_question_item_option_get_label(leadForms_question_item_option_t *object){
	return object->label_;
}

static void photos_image_set_height(photos_image_t *object, int value){
	object->height_ = value;
}

static int photos_image_get_height(photos_image_t *object){
	return object->height_;
}

static void photos_image_set_type(photos_image_t *object, photos_image_type_t value){
	object->type_ = value;
}

static photos_image_type_t photos_image_get_type(photos_image_t *object){
	return object->type_;
}

static void photos_image_set_url(photos_image_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * photos_image_get_url(photos_image_t *object){
	return object->url_;
}

static void photos_image_set_width(photos_image_t *object, int value){
	object->width_ = value;
}

static int photos_image_get_width(photos_image_t *object){
	return object->width_;
}

static void photos_photo_set_access_key(photos_photo_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * photos_photo_get_access_key(photos_photo_t *object){
	return object->access_key_;
}

static void photos_photo_set_album_id(photos_photo_t *object, int value){
	object->album_id_ = value;
}

static int photos_photo_get_album_id(photos_photo_t *object){
	return object->album_id_;
}

static void photos_photo_set_date(photos_photo_t *object, int value){
	object->date_ = value;
}

static int photos_photo_get_date(photos_photo_t *object){
	return object->date_;
}

static void photos_photo_set_height(photos_photo_t *object, int value){
	object->height_ = value;
}

static int photos_photo_get_height(photos_photo_t *object){
	return object->height_;
}

static void photos_photo_set_id(photos_photo_t *object, int value){
	object->id_ = value;
}

static int photos_photo_get_id(photos_photo_t *object){
	return object->id_;
}

static void photos_photo_set_images(photos_photo_t *object, photos_image * value, int len){
int i;
	object->images_ = malloc(len * sizeof(photos_image) + 8);
	for(i=0;i<len);++i){
		object->images[i] = value[i];
	}
	//NULL-terminate array
	object->images[i] = NULL;
}

static photos_image * photos_photo_get_images(photos_photo_t *object){
	return object->images_;
}

static void photos_photo_set_owner_id(photos_photo_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 photos_photo_get_owner_id(photos_photo_t *object){
	return object->owner_id_;
}

static void photos_photo_set_photo_256(photos_photo_t *object, const char * value){
	object->photo_256_ = strdup(value);
}

static const char * photos_photo_get_photo_256(photos_photo_t *object){
	return object->photo_256_;
}

static void photos_photo_set_can_comment(photos_photo_t *object, base_bool_int_t value){
	object->can_comment_ = value;
}

static base_bool_int_t photos_photo_get_can_comment(photos_photo_t *object){
	return object->can_comment_;
}

static void photos_photo_set_place(photos_photo_t *object, const char * value){
	object->place_ = strdup(value);
}

static const char * photos_photo_get_place(photos_photo_t *object){
	return object->place_;
}

static void photos_photo_set_post_id(photos_photo_t *object, int value){
	object->post_id_ = value;
}

static int photos_photo_get_post_id(photos_photo_t *object){
	return object->post_id_;
}

static void photos_photo_set_sizes(photos_photo_t *object, photos_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(photos_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static photos_photo_sizes * photos_photo_get_sizes(photos_photo_t *object){
	return object->sizes_;
}

static void photos_photo_set_text(photos_photo_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * photos_photo_get_text(photos_photo_t *object){
	return object->text_;
}

static void photos_photo_set_user_id(photos_photo_t *object, int64 value){
	object->user_id_ = value;
}

static int64 photos_photo_get_user_id(photos_photo_t *object){
	return object->user_id_;
}

static void photos_photo_set_width(photos_photo_t *object, int value){
	object->width_ = value;
}

static int photos_photo_get_width(photos_photo_t *object){
	return object->width_;
}

static void photos_photo_set_has_tags(photos_photo_t *object, bool value){
	object->has_tags_ = value;
}

static bool photos_photo_get_has_tags(photos_photo_t *object){
	return object->has_tags_;
}

static void photos_photo_set_likes(photos_photo_t *object, base_likes_t value){
	object->likes_ = value;
}

static base_likes_t photos_photo_get_likes(photos_photo_t *object){
	return object->likes_;
}

static void photos_photo_set_comments(photos_photo_t *object, base_object_count_t value){
	object->comments_ = value;
}

static base_object_count_t photos_photo_get_comments(photos_photo_t *object){
	return object->comments_;
}

static void photos_photo_set_reposts(photos_photo_t *object, base_reposts_info_t value){
	object->reposts_ = value;
}

static base_reposts_info_t photos_photo_get_reposts(photos_photo_t *object){
	return object->reposts_;
}

static void photos_photo_set_tags(photos_photo_t *object, base_object_count_t value){
	object->tags_ = value;
}

static base_object_count_t photos_photo_get_tags(photos_photo_t *object){
	return object->tags_;
}

static void photos_photo_album_set_created(photos_photo_album_t *object, int value){
	object->created_ = value;
}

static int photos_photo_album_get_created(photos_photo_album_t *object){
	return object->created_;
}

static void photos_photo_album_set_description(photos_photo_album_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * photos_photo_album_get_description(photos_photo_album_t *object){
	return object->description_;
}

static void photos_photo_album_set_id(photos_photo_album_t *object, int value){
	object->id_ = value;
}

static int photos_photo_album_get_id(photos_photo_album_t *object){
	return object->id_;
}

static void photos_photo_album_set_owner_id(photos_photo_album_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 photos_photo_album_get_owner_id(photos_photo_album_t *object){
	return object->owner_id_;
}

static void photos_photo_album_set_size(photos_photo_album_t *object, int value){
	object->size_ = value;
}

static int photos_photo_album_get_size(photos_photo_album_t *object){
	return object->size_;
}

static void photos_photo_album_set_thumb(photos_photo_album_t *object, photos_photo_t value){
	object->thumb_ = value;
}

static photos_photo_t photos_photo_album_get_thumb(photos_photo_album_t *object){
	return object->thumb_;
}

static void photos_photo_album_set_title(photos_photo_album_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * photos_photo_album_get_title(photos_photo_album_t *object){
	return object->title_;
}

static void photos_photo_album_set_updated(photos_photo_album_t *object, int value){
	object->updated_ = value;
}

static int photos_photo_album_get_updated(photos_photo_album_t *object){
	return object->updated_;
}

static void photos_photo_album_full_set_can_upload(photos_photo_album_full_t *object, base_bool_int_t value){
	object->can_upload_ = value;
}

static base_bool_int_t photos_photo_album_full_get_can_upload(photos_photo_album_full_t *object){
	return object->can_upload_;
}

static void photos_photo_album_full_set_comments_disabled(photos_photo_album_full_t *object, base_bool_int_t value){
	object->comments_disabled_ = value;
}

static base_bool_int_t photos_photo_album_full_get_comments_disabled(photos_photo_album_full_t *object){
	return object->comments_disabled_;
}

static void photos_photo_album_full_set_created(photos_photo_album_full_t *object, int value){
	object->created_ = value;
}

static int photos_photo_album_full_get_created(photos_photo_album_full_t *object){
	return object->created_;
}

static void photos_photo_album_full_set_description(photos_photo_album_full_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * photos_photo_album_full_get_description(photos_photo_album_full_t *object){
	return object->description_;
}

static void photos_photo_album_full_set_can_delete(photos_photo_album_full_t *object, bool value){
	object->can_delete_ = value;
}

static bool photos_photo_album_full_get_can_delete(photos_photo_album_full_t *object){
	return object->can_delete_;
}

static void photos_photo_album_full_set_id(photos_photo_album_full_t *object, int value){
	object->id_ = value;
}

static int photos_photo_album_full_get_id(photos_photo_album_full_t *object){
	return object->id_;
}

static void photos_photo_album_full_set_owner_id(photos_photo_album_full_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 photos_photo_album_full_get_owner_id(photos_photo_album_full_t *object){
	return object->owner_id_;
}

static void photos_photo_album_full_set_size(photos_photo_album_full_t *object, int value){
	object->size_ = value;
}

static int photos_photo_album_full_get_size(photos_photo_album_full_t *object){
	return object->size_;
}

static void photos_photo_album_full_set_sizes(photos_photo_album_full_t *object, photos_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(photos_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static photos_photo_sizes * photos_photo_album_full_get_sizes(photos_photo_album_full_t *object){
	return object->sizes_;
}

static void photos_photo_album_full_set_thumb_id(photos_photo_album_full_t *object, int value){
	object->thumb_id_ = value;
}

static int photos_photo_album_full_get_thumb_id(photos_photo_album_full_t *object){
	return object->thumb_id_;
}

static void photos_photo_album_full_set_thumb_is_last(photos_photo_album_full_t *object, base_bool_int_t value){
	object->thumb_is_last_ = value;
}

static base_bool_int_t photos_photo_album_full_get_thumb_is_last(photos_photo_album_full_t *object){
	return object->thumb_is_last_;
}

static void photos_photo_album_full_set_thumb_src(photos_photo_album_full_t *object, const char * value){
	object->thumb_src_ = strdup(value);
}

static const char * photos_photo_album_full_get_thumb_src(photos_photo_album_full_t *object){
	return object->thumb_src_;
}

static void photos_photo_album_full_set_title(photos_photo_album_full_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * photos_photo_album_full_get_title(photos_photo_album_full_t *object){
	return object->title_;
}

static void photos_photo_album_full_set_updated(photos_photo_album_full_t *object, int value){
	object->updated_ = value;
}

static int photos_photo_album_full_get_updated(photos_photo_album_full_t *object){
	return object->updated_;
}

static void photos_photo_album_full_set_upload_by_admins_only(photos_photo_album_full_t *object, base_bool_int_t value){
	object->upload_by_admins_only_ = value;
}

static base_bool_int_t photos_photo_album_full_get_upload_by_admins_only(photos_photo_album_full_t *object){
	return object->upload_by_admins_only_;
}

static void photos_photo_full_xtr_real_offset_set_access_key(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_access_key(photos_photo_full_xtr_real_offset_t *object){
	return object->access_key_;
}

static void photos_photo_full_xtr_real_offset_set_album_id(photos_photo_full_xtr_real_offset_t *object, int value){
	object->album_id_ = value;
}

static int photos_photo_full_xtr_real_offset_get_album_id(photos_photo_full_xtr_real_offset_t *object){
	return object->album_id_;
}

static void photos_photo_full_xtr_real_offset_set_can_comment(photos_photo_full_xtr_real_offset_t *object, base_bool_int_t value){
	object->can_comment_ = value;
}

static base_bool_int_t photos_photo_full_xtr_real_offset_get_can_comment(photos_photo_full_xtr_real_offset_t *object){
	return object->can_comment_;
}

static void photos_photo_full_xtr_real_offset_set_comments(photos_photo_full_xtr_real_offset_t *object, base_object_count_t value){
	object->comments_ = value;
}

static base_object_count_t photos_photo_full_xtr_real_offset_get_comments(photos_photo_full_xtr_real_offset_t *object){
	return object->comments_;
}

static void photos_photo_full_xtr_real_offset_set_date(photos_photo_full_xtr_real_offset_t *object, int value){
	object->date_ = value;
}

static int photos_photo_full_xtr_real_offset_get_date(photos_photo_full_xtr_real_offset_t *object){
	return object->date_;
}

static void photos_photo_full_xtr_real_offset_set_height(photos_photo_full_xtr_real_offset_t *object, int value){
	object->height_ = value;
}

static int photos_photo_full_xtr_real_offset_get_height(photos_photo_full_xtr_real_offset_t *object){
	return object->height_;
}

static void photos_photo_full_xtr_real_offset_set_hidden(photos_photo_full_xtr_real_offset_t *object, base_property_exists_t value){
	object->hidden_ = value;
}

static base_property_exists_t photos_photo_full_xtr_real_offset_get_hidden(photos_photo_full_xtr_real_offset_t *object){
	return object->hidden_;
}

static void photos_photo_full_xtr_real_offset_set_id(photos_photo_full_xtr_real_offset_t *object, int value){
	object->id_ = value;
}

static int photos_photo_full_xtr_real_offset_get_id(photos_photo_full_xtr_real_offset_t *object){
	return object->id_;
}

static void photos_photo_full_xtr_real_offset_set_likes(photos_photo_full_xtr_real_offset_t *object, base_likes_t value){
	object->likes_ = value;
}

static base_likes_t photos_photo_full_xtr_real_offset_get_likes(photos_photo_full_xtr_real_offset_t *object){
	return object->likes_;
}

static void photos_photo_full_xtr_real_offset_set_owner_id(photos_photo_full_xtr_real_offset_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 photos_photo_full_xtr_real_offset_get_owner_id(photos_photo_full_xtr_real_offset_t *object){
	return object->owner_id_;
}

static void photos_photo_full_xtr_real_offset_set_photo_1280(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->photo_1280_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_photo_1280(photos_photo_full_xtr_real_offset_t *object){
	return object->photo_1280_;
}

static void photos_photo_full_xtr_real_offset_set_photo_130(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->photo_130_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_photo_130(photos_photo_full_xtr_real_offset_t *object){
	return object->photo_130_;
}

static void photos_photo_full_xtr_real_offset_set_photo_2560(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->photo_2560_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_photo_2560(photos_photo_full_xtr_real_offset_t *object){
	return object->photo_2560_;
}

static void photos_photo_full_xtr_real_offset_set_photo_604(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->photo_604_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_photo_604(photos_photo_full_xtr_real_offset_t *object){
	return object->photo_604_;
}

static void photos_photo_full_xtr_real_offset_set_photo_75(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->photo_75_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_photo_75(photos_photo_full_xtr_real_offset_t *object){
	return object->photo_75_;
}

static void photos_photo_full_xtr_real_offset_set_photo_807(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->photo_807_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_photo_807(photos_photo_full_xtr_real_offset_t *object){
	return object->photo_807_;
}

static void photos_photo_full_xtr_real_offset_set_post_id(photos_photo_full_xtr_real_offset_t *object, int value){
	object->post_id_ = value;
}

static int photos_photo_full_xtr_real_offset_get_post_id(photos_photo_full_xtr_real_offset_t *object){
	return object->post_id_;
}

static void photos_photo_full_xtr_real_offset_set_real_offset(photos_photo_full_xtr_real_offset_t *object, int value){
	object->real_offset_ = value;
}

static int photos_photo_full_xtr_real_offset_get_real_offset(photos_photo_full_xtr_real_offset_t *object){
	return object->real_offset_;
}

static void photos_photo_full_xtr_real_offset_set_reposts(photos_photo_full_xtr_real_offset_t *object, base_object_count_t value){
	object->reposts_ = value;
}

static base_object_count_t photos_photo_full_xtr_real_offset_get_reposts(photos_photo_full_xtr_real_offset_t *object){
	return object->reposts_;
}

static void photos_photo_full_xtr_real_offset_set_sizes(photos_photo_full_xtr_real_offset_t *object, photos_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(photos_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static photos_photo_sizes * photos_photo_full_xtr_real_offset_get_sizes(photos_photo_full_xtr_real_offset_t *object){
	return object->sizes_;
}

static void photos_photo_full_xtr_real_offset_set_tags(photos_photo_full_xtr_real_offset_t *object, base_object_count_t value){
	object->tags_ = value;
}

static base_object_count_t photos_photo_full_xtr_real_offset_get_tags(photos_photo_full_xtr_real_offset_t *object){
	return object->tags_;
}

static void photos_photo_full_xtr_real_offset_set_text(photos_photo_full_xtr_real_offset_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * photos_photo_full_xtr_real_offset_get_text(photos_photo_full_xtr_real_offset_t *object){
	return object->text_;
}

static void photos_photo_full_xtr_real_offset_set_user_id(photos_photo_full_xtr_real_offset_t *object, int64 value){
	object->user_id_ = value;
}

static int64 photos_photo_full_xtr_real_offset_get_user_id(photos_photo_full_xtr_real_offset_t *object){
	return object->user_id_;
}

static void photos_photo_full_xtr_real_offset_set_width(photos_photo_full_xtr_real_offset_t *object, int value){
	object->width_ = value;
}

static int photos_photo_full_xtr_real_offset_get_width(photos_photo_full_xtr_real_offset_t *object){
	return object->width_;
}

static void photos_photo_sizes_set_height(photos_photo_sizes_t *object, int value){
	object->height_ = value;
}

static int photos_photo_sizes_get_height(photos_photo_sizes_t *object){
	return object->height_;
}

static void photos_photo_sizes_set_url(photos_photo_sizes_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * photos_photo_sizes_get_url(photos_photo_sizes_t *object){
	return object->url_;
}

static void photos_photo_sizes_set_src(photos_photo_sizes_t *object, const char * value){
	object->src_ = strdup(value);
}

static const char * photos_photo_sizes_get_src(photos_photo_sizes_t *object){
	return object->src_;
}

static void photos_photo_sizes_set_type(photos_photo_sizes_t *object, photos_photo_sizes_type_t value){
	object->type_ = value;
}

static photos_photo_sizes_type_t photos_photo_sizes_get_type(photos_photo_sizes_t *object){
	return object->type_;
}

static void photos_photo_sizes_set_width(photos_photo_sizes_t *object, int value){
	object->width_ = value;
}

static int photos_photo_sizes_get_width(photos_photo_sizes_t *object){
	return object->width_;
}

static void photos_photo_tag_set_date(photos_photo_tag_t *object, int value){
	object->date_ = value;
}

static int photos_photo_tag_get_date(photos_photo_tag_t *object){
	return object->date_;
}

static void photos_photo_tag_set_id(photos_photo_tag_t *object, int value){
	object->id_ = value;
}

static int photos_photo_tag_get_id(photos_photo_tag_t *object){
	return object->id_;
}

static void photos_photo_tag_set_placer_id(photos_photo_tag_t *object, int value){
	object->placer_id_ = value;
}

static int photos_photo_tag_get_placer_id(photos_photo_tag_t *object){
	return object->placer_id_;
}

static void photos_photo_tag_set_tagged_name(photos_photo_tag_t *object, const char * value){
	object->tagged_name_ = strdup(value);
}

static const char * photos_photo_tag_get_tagged_name(photos_photo_tag_t *object){
	return object->tagged_name_;
}

static void photos_photo_tag_set_description(photos_photo_tag_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * photos_photo_tag_get_description(photos_photo_tag_t *object){
	return object->description_;
}

static void photos_photo_tag_set_user_id(photos_photo_tag_t *object, int64 value){
	object->user_id_ = value;
}

static int64 photos_photo_tag_get_user_id(photos_photo_tag_t *object){
	return object->user_id_;
}

static void photos_photo_tag_set_viewed(photos_photo_tag_t *object, base_bool_int_t value){
	object->viewed_ = value;
}

static base_bool_int_t photos_photo_tag_get_viewed(photos_photo_tag_t *object){
	return object->viewed_;
}

static void photos_photo_upload_set_album_id(photos_photo_upload_t *object, int value){
	object->album_id_ = value;
}

static int photos_photo_upload_get_album_id(photos_photo_upload_t *object){
	return object->album_id_;
}

static void photos_photo_upload_set_upload_url(photos_photo_upload_t *object, const char * value){
	object->upload_url_ = strdup(value);
}

static const char * photos_photo_upload_get_upload_url(photos_photo_upload_t *object){
	return object->upload_url_;
}

static void photos_photo_upload_set_fallback_upload_url(photos_photo_upload_t *object, const char * value){
	object->fallback_upload_url_ = strdup(value);
}

static const char * photos_photo_upload_get_fallback_upload_url(photos_photo_upload_t *object){
	return object->fallback_upload_url_;
}

static void photos_photo_upload_set_user_id(photos_photo_upload_t *object, int64 value){
	object->user_id_ = value;
}

static int64 photos_photo_upload_get_user_id(photos_photo_upload_t *object){
	return object->user_id_;
}

static void photos_photo_upload_set_group_id(photos_photo_upload_t *object, int64 value){
	object->group_id_ = value;
}

static int64 photos_photo_upload_get_group_id(photos_photo_upload_t *object){
	return object->group_id_;
}

static void photos_photo_xtr_real_offset_set_access_key(photos_photo_xtr_real_offset_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_access_key(photos_photo_xtr_real_offset_t *object){
	return object->access_key_;
}

static void photos_photo_xtr_real_offset_set_album_id(photos_photo_xtr_real_offset_t *object, int value){
	object->album_id_ = value;
}

static int photos_photo_xtr_real_offset_get_album_id(photos_photo_xtr_real_offset_t *object){
	return object->album_id_;
}

static void photos_photo_xtr_real_offset_set_date(photos_photo_xtr_real_offset_t *object, int value){
	object->date_ = value;
}

static int photos_photo_xtr_real_offset_get_date(photos_photo_xtr_real_offset_t *object){
	return object->date_;
}

static void photos_photo_xtr_real_offset_set_height(photos_photo_xtr_real_offset_t *object, int value){
	object->height_ = value;
}

static int photos_photo_xtr_real_offset_get_height(photos_photo_xtr_real_offset_t *object){
	return object->height_;
}

static void photos_photo_xtr_real_offset_set_hidden(photos_photo_xtr_real_offset_t *object, base_property_exists_t value){
	object->hidden_ = value;
}

static base_property_exists_t photos_photo_xtr_real_offset_get_hidden(photos_photo_xtr_real_offset_t *object){
	return object->hidden_;
}

static void photos_photo_xtr_real_offset_set_id(photos_photo_xtr_real_offset_t *object, int value){
	object->id_ = value;
}

static int photos_photo_xtr_real_offset_get_id(photos_photo_xtr_real_offset_t *object){
	return object->id_;
}

static void photos_photo_xtr_real_offset_set_owner_id(photos_photo_xtr_real_offset_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 photos_photo_xtr_real_offset_get_owner_id(photos_photo_xtr_real_offset_t *object){
	return object->owner_id_;
}

static void photos_photo_xtr_real_offset_set_photo_1280(photos_photo_xtr_real_offset_t *object, const char * value){
	object->photo_1280_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_photo_1280(photos_photo_xtr_real_offset_t *object){
	return object->photo_1280_;
}

static void photos_photo_xtr_real_offset_set_photo_130(photos_photo_xtr_real_offset_t *object, const char * value){
	object->photo_130_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_photo_130(photos_photo_xtr_real_offset_t *object){
	return object->photo_130_;
}

static void photos_photo_xtr_real_offset_set_photo_2560(photos_photo_xtr_real_offset_t *object, const char * value){
	object->photo_2560_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_photo_2560(photos_photo_xtr_real_offset_t *object){
	return object->photo_2560_;
}

static void photos_photo_xtr_real_offset_set_photo_604(photos_photo_xtr_real_offset_t *object, const char * value){
	object->photo_604_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_photo_604(photos_photo_xtr_real_offset_t *object){
	return object->photo_604_;
}

static void photos_photo_xtr_real_offset_set_photo_75(photos_photo_xtr_real_offset_t *object, const char * value){
	object->photo_75_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_photo_75(photos_photo_xtr_real_offset_t *object){
	return object->photo_75_;
}

static void photos_photo_xtr_real_offset_set_photo_807(photos_photo_xtr_real_offset_t *object, const char * value){
	object->photo_807_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_photo_807(photos_photo_xtr_real_offset_t *object){
	return object->photo_807_;
}

static void photos_photo_xtr_real_offset_set_post_id(photos_photo_xtr_real_offset_t *object, int value){
	object->post_id_ = value;
}

static int photos_photo_xtr_real_offset_get_post_id(photos_photo_xtr_real_offset_t *object){
	return object->post_id_;
}

static void photos_photo_xtr_real_offset_set_real_offset(photos_photo_xtr_real_offset_t *object, int value){
	object->real_offset_ = value;
}

static int photos_photo_xtr_real_offset_get_real_offset(photos_photo_xtr_real_offset_t *object){
	return object->real_offset_;
}

static void photos_photo_xtr_real_offset_set_sizes(photos_photo_xtr_real_offset_t *object, photos_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(photos_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static photos_photo_sizes * photos_photo_xtr_real_offset_get_sizes(photos_photo_xtr_real_offset_t *object){
	return object->sizes_;
}

static void photos_photo_xtr_real_offset_set_text(photos_photo_xtr_real_offset_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * photos_photo_xtr_real_offset_get_text(photos_photo_xtr_real_offset_t *object){
	return object->text_;
}

static void photos_photo_xtr_real_offset_set_user_id(photos_photo_xtr_real_offset_t *object, int64 value){
	object->user_id_ = value;
}

static int64 photos_photo_xtr_real_offset_get_user_id(photos_photo_xtr_real_offset_t *object){
	return object->user_id_;
}

static void photos_photo_xtr_real_offset_set_width(photos_photo_xtr_real_offset_t *object, int value){
	object->width_ = value;
}

static int photos_photo_xtr_real_offset_get_width(photos_photo_xtr_real_offset_t *object){
	return object->width_;
}

static void photos_photo_xtr_tag_info_set_access_key(photos_photo_xtr_tag_info_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_access_key(photos_photo_xtr_tag_info_t *object){
	return object->access_key_;
}

static void photos_photo_xtr_tag_info_set_album_id(photos_photo_xtr_tag_info_t *object, int value){
	object->album_id_ = value;
}

static int photos_photo_xtr_tag_info_get_album_id(photos_photo_xtr_tag_info_t *object){
	return object->album_id_;
}

static void photos_photo_xtr_tag_info_set_date(photos_photo_xtr_tag_info_t *object, int value){
	object->date_ = value;
}

static int photos_photo_xtr_tag_info_get_date(photos_photo_xtr_tag_info_t *object){
	return object->date_;
}

static void photos_photo_xtr_tag_info_set_height(photos_photo_xtr_tag_info_t *object, int value){
	object->height_ = value;
}

static int photos_photo_xtr_tag_info_get_height(photos_photo_xtr_tag_info_t *object){
	return object->height_;
}

static void photos_photo_xtr_tag_info_set_id(photos_photo_xtr_tag_info_t *object, int value){
	object->id_ = value;
}

static int photos_photo_xtr_tag_info_get_id(photos_photo_xtr_tag_info_t *object){
	return object->id_;
}

static void photos_photo_xtr_tag_info_set_owner_id(photos_photo_xtr_tag_info_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 photos_photo_xtr_tag_info_get_owner_id(photos_photo_xtr_tag_info_t *object){
	return object->owner_id_;
}

static void photos_photo_xtr_tag_info_set_photo_1280(photos_photo_xtr_tag_info_t *object, const char * value){
	object->photo_1280_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_photo_1280(photos_photo_xtr_tag_info_t *object){
	return object->photo_1280_;
}

static void photos_photo_xtr_tag_info_set_photo_130(photos_photo_xtr_tag_info_t *object, const char * value){
	object->photo_130_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_photo_130(photos_photo_xtr_tag_info_t *object){
	return object->photo_130_;
}

static void photos_photo_xtr_tag_info_set_photo_2560(photos_photo_xtr_tag_info_t *object, const char * value){
	object->photo_2560_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_photo_2560(photos_photo_xtr_tag_info_t *object){
	return object->photo_2560_;
}

static void photos_photo_xtr_tag_info_set_photo_604(photos_photo_xtr_tag_info_t *object, const char * value){
	object->photo_604_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_photo_604(photos_photo_xtr_tag_info_t *object){
	return object->photo_604_;
}

static void photos_photo_xtr_tag_info_set_photo_75(photos_photo_xtr_tag_info_t *object, const char * value){
	object->photo_75_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_photo_75(photos_photo_xtr_tag_info_t *object){
	return object->photo_75_;
}

static void photos_photo_xtr_tag_info_set_photo_807(photos_photo_xtr_tag_info_t *object, const char * value){
	object->photo_807_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_photo_807(photos_photo_xtr_tag_info_t *object){
	return object->photo_807_;
}

static void photos_photo_xtr_tag_info_set_placer_id(photos_photo_xtr_tag_info_t *object, int value){
	object->placer_id_ = value;
}

static int photos_photo_xtr_tag_info_get_placer_id(photos_photo_xtr_tag_info_t *object){
	return object->placer_id_;
}

static void photos_photo_xtr_tag_info_set_post_id(photos_photo_xtr_tag_info_t *object, int value){
	object->post_id_ = value;
}

static int photos_photo_xtr_tag_info_get_post_id(photos_photo_xtr_tag_info_t *object){
	return object->post_id_;
}

static void photos_photo_xtr_tag_info_set_sizes(photos_photo_xtr_tag_info_t *object, photos_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(photos_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static photos_photo_sizes * photos_photo_xtr_tag_info_get_sizes(photos_photo_xtr_tag_info_t *object){
	return object->sizes_;
}

static void photos_photo_xtr_tag_info_set_tag_created(photos_photo_xtr_tag_info_t *object, int value){
	object->tag_created_ = value;
}

static int photos_photo_xtr_tag_info_get_tag_created(photos_photo_xtr_tag_info_t *object){
	return object->tag_created_;
}

static void photos_photo_xtr_tag_info_set_tag_id(photos_photo_xtr_tag_info_t *object, int value){
	object->tag_id_ = value;
}

static int photos_photo_xtr_tag_info_get_tag_id(photos_photo_xtr_tag_info_t *object){
	return object->tag_id_;
}

static void photos_photo_xtr_tag_info_set_text(photos_photo_xtr_tag_info_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * photos_photo_xtr_tag_info_get_text(photos_photo_xtr_tag_info_t *object){
	return object->text_;
}

static void photos_photo_xtr_tag_info_set_user_id(photos_photo_xtr_tag_info_t *object, int64 value){
	object->user_id_ = value;
}

static int64 photos_photo_xtr_tag_info_get_user_id(photos_photo_xtr_tag_info_t *object){
	return object->user_id_;
}

static void photos_photo_xtr_tag_info_set_width(photos_photo_xtr_tag_info_t *object, int value){
	object->width_ = value;
}

static int photos_photo_xtr_tag_info_get_width(photos_photo_xtr_tag_info_t *object){
	return object->width_;
}

static void photos_tags_suggestion_item_set_title(photos_tags_suggestion_item_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * photos_tags_suggestion_item_get_title(photos_tags_suggestion_item_t *object){
	return object->title_;
}

static void photos_tags_suggestion_item_set_caption(photos_tags_suggestion_item_t *object, const char * value){
	object->caption_ = strdup(value);
}

static const char * photos_tags_suggestion_item_get_caption(photos_tags_suggestion_item_t *object){
	return object->caption_;
}

static void photos_tags_suggestion_item_set_type(photos_tags_suggestion_item_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * photos_tags_suggestion_item_get_type(photos_tags_suggestion_item_t *object){
	return object->type_;
}

static void photos_tags_suggestion_item_set_buttons(photos_tags_suggestion_item_t *object, photos_tags_suggestion_item_button * value, int len){
int i;
	object->buttons_ = malloc(len * sizeof(photos_tags_suggestion_item_button) + 8);
	for(i=0;i<len);++i){
		object->buttons[i] = value[i];
	}
	//NULL-terminate array
	object->buttons[i] = NULL;
}

static photos_tags_suggestion_item_button * photos_tags_suggestion_item_get_buttons(photos_tags_suggestion_item_t *object){
	return object->buttons_;
}

static void photos_tags_suggestion_item_set_photo(photos_tags_suggestion_item_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t photos_tags_suggestion_item_get_photo(photos_tags_suggestion_item_t *object){
	return object->photo_;
}

static void photos_tags_suggestion_item_set_tags(photos_tags_suggestion_item_t *object, photos_photo_tag * value, int len){
int i;
	object->tags_ = malloc(len * sizeof(photos_photo_tag) + 8);
	for(i=0;i<len);++i){
		object->tags[i] = value[i];
	}
	//NULL-terminate array
	object->tags[i] = NULL;
}

static photos_photo_tag * photos_tags_suggestion_item_get_tags(photos_tags_suggestion_item_t *object){
	return object->tags_;
}

static void photos_tags_suggestion_item_set_track_code(photos_tags_suggestion_item_t *object, const char * value){
	object->track_code_ = strdup(value);
}

static const char * photos_tags_suggestion_item_get_track_code(photos_tags_suggestion_item_t *object){
	return object->track_code_;
}

static void photos_tags_suggestion_item_button_set_title(photos_tags_suggestion_item_button_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * photos_tags_suggestion_item_button_get_title(photos_tags_suggestion_item_button_t *object){
	return object->title_;
}

static void photos_tags_suggestion_item_button_set_action(photos_tags_suggestion_item_button_t *object, const char * value){
	object->action_ = strdup(value);
}

static const char * photos_tags_suggestion_item_button_get_action(photos_tags_suggestion_item_button_t *object){
	return object->action_;
}

static void photos_tags_suggestion_item_button_set_style(photos_tags_suggestion_item_button_t *object, const char * value){
	object->style_ = strdup(value);
}

static const char * photos_tags_suggestion_item_button_get_style(photos_tags_suggestion_item_button_t *object){
	return object->style_;
}

static void link_target_object_set_type(link_target_object_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * link_target_object_get_type(link_target_object_t *object){
	return object->type_;
}

static void link_target_object_set_owner_id(link_target_object_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 link_target_object_get_owner_id(link_target_object_t *object){
	return object->owner_id_;
}

static void link_target_object_set_item_id(link_target_object_t *object, int value){
	object->item_id_ = value;
}

static int link_target_object_get_item_id(link_target_object_t *object){
	return object->item_id_;
}

static void events_event_attach_set_address(events_event_attach_t *object, const char * value){
	object->address_ = strdup(value);
}

static const char * events_event_attach_get_address(events_event_attach_t *object){
	return object->address_;
}

static void events_event_attach_set_button_text(events_event_attach_t *object, const char * value){
	object->button_text_ = strdup(value);
}

static const char * events_event_attach_get_button_text(events_event_attach_t *object){
	return object->button_text_;
}

static void events_event_attach_set_friends(events_event_attach_t *object, int * value, int len){
int i;
	object->friends_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->friends[i] = value[i];
	}
	//NULL-terminate array
	object->friends[i] = NULL;
}

static int * events_event_attach_get_friends(events_event_attach_t *object){
	return object->friends_;
}

static void events_event_attach_set_id(events_event_attach_t *object, int value){
	object->id_ = value;
}

static int events_event_attach_get_id(events_event_attach_t *object){
	return object->id_;
}

static void events_event_attach_set_is_favorite(events_event_attach_t *object, bool value){
	object->is_favorite_ = value;
}

static bool events_event_attach_get_is_favorite(events_event_attach_t *object){
	return object->is_favorite_;
}

static void events_event_attach_set_member_status(events_event_attach_t *object, groups_group_full_member_status_t value){
	object->member_status_ = value;
}

static groups_group_full_member_status_t events_event_attach_get_member_status(events_event_attach_t *object){
	return object->member_status_;
}

static void events_event_attach_set_text(events_event_attach_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * events_event_attach_get_text(events_event_attach_t *object){
	return object->text_;
}

static void events_event_attach_set_time(events_event_attach_t *object, int value){
	object->time_ = value;
}

static int events_event_attach_get_time(events_event_attach_t *object){
	return object->time_;
}

static void audio_audio_set_access_key(audio_audio_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * audio_audio_get_access_key(audio_audio_t *object){
	return object->access_key_;
}

static void audio_audio_set_artist(audio_audio_t *object, const char * value){
	object->artist_ = strdup(value);
}

static const char * audio_audio_get_artist(audio_audio_t *object){
	return object->artist_;
}

static void audio_audio_set_id(audio_audio_t *object, int value){
	object->id_ = value;
}

static int audio_audio_get_id(audio_audio_t *object){
	return object->id_;
}

static void audio_audio_set_owner_id(audio_audio_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 audio_audio_get_owner_id(audio_audio_t *object){
	return object->owner_id_;
}

static void audio_audio_set_title(audio_audio_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * audio_audio_get_title(audio_audio_t *object){
	return object->title_;
}

static void audio_audio_set_url(audio_audio_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * audio_audio_get_url(audio_audio_t *object){
	return object->url_;
}

static void audio_audio_set_duration(audio_audio_t *object, int value){
	object->duration_ = value;
}

static int audio_audio_get_duration(audio_audio_t *object){
	return object->duration_;
}

static void audio_audio_set_date(audio_audio_t *object, int value){
	object->date_ = value;
}

static int audio_audio_get_date(audio_audio_t *object){
	return object->date_;
}

static void audio_audio_set_album_id(audio_audio_t *object, int value){
	object->album_id_ = value;
}

static int audio_audio_get_album_id(audio_audio_t *object){
	return object->album_id_;
}

static void audio_audio_set_genre_id(audio_audio_t *object, int value){
	object->genre_id_ = value;
}

static int audio_audio_get_genre_id(audio_audio_t *object){
	return object->genre_id_;
}

static void audio_audio_set_performer(audio_audio_t *object, const char * value){
	object->performer_ = strdup(value);
}

static const char * audio_audio_get_performer(audio_audio_t *object){
	return object->performer_;
}

static void podcast_cover_set_sizes(podcast_cover_t *object, photos_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(photos_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static photos_photo_sizes * podcast_cover_get_sizes(podcast_cover_t *object){
	return object->sizes_;
}

static void podcast_external_data_set_url(podcast_external_data_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * podcast_external_data_get_url(podcast_external_data_t *object){
	return object->url_;
}

static void podcast_external_data_set_owner_url(podcast_external_data_t *object, const char * value){
	object->owner_url_ = strdup(value);
}

static const char * podcast_external_data_get_owner_url(podcast_external_data_t *object){
	return object->owner_url_;
}

static void podcast_external_data_set_title(podcast_external_data_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * podcast_external_data_get_title(podcast_external_data_t *object){
	return object->title_;
}

static void podcast_external_data_set_owner_name(podcast_external_data_t *object, const char * value){
	object->owner_name_ = strdup(value);
}

static const char * podcast_external_data_get_owner_name(podcast_external_data_t *object){
	return object->owner_name_;
}

static void podcast_external_data_set_cover(podcast_external_data_t *object, podcast_cover_t value){
	object->cover_ = value;
}

static podcast_cover_t podcast_external_data_get_cover(podcast_external_data_t *object){
	return object->cover_;
}

static void storage_value_set_key(storage_value_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * storage_value_get_key(storage_value_t *object){
	return object->key_;
}

static void storage_value_set_value(storage_value_t *object, const char * value){
	object->value_ = strdup(value);
}

static const char * storage_value_get_value(storage_value_t *object){
	return object->value_;
}

static void messages_audio_message_set_access_key(messages_audio_message_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * messages_audio_message_get_access_key(messages_audio_message_t *object){
	return object->access_key_;
}

static void messages_audio_message_set_transcript_error(messages_audio_message_t *object, int value){
	object->transcript_error_ = value;
}

static int messages_audio_message_get_transcript_error(messages_audio_message_t *object){
	return object->transcript_error_;
}

static void messages_audio_message_set_duration(messages_audio_message_t *object, int value){
	object->duration_ = value;
}

static int messages_audio_message_get_duration(messages_audio_message_t *object){
	return object->duration_;
}

static void messages_audio_message_set_id(messages_audio_message_t *object, int value){
	object->id_ = value;
}

static int messages_audio_message_get_id(messages_audio_message_t *object){
	return object->id_;
}

static void messages_audio_message_set_link_mp3(messages_audio_message_t *object, const char * value){
	object->link_mp3_ = strdup(value);
}

static const char * messages_audio_message_get_link_mp3(messages_audio_message_t *object){
	return object->link_mp3_;
}

static void messages_audio_message_set_link_ogg(messages_audio_message_t *object, const char * value){
	object->link_ogg_ = strdup(value);
}

static const char * messages_audio_message_get_link_ogg(messages_audio_message_t *object){
	return object->link_ogg_;
}

static void messages_audio_message_set_owner_id(messages_audio_message_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 messages_audio_message_get_owner_id(messages_audio_message_t *object){
	return object->owner_id_;
}

static void messages_audio_message_set_waveform(messages_audio_message_t *object, int * value, int len){
int i;
	object->waveform_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->waveform[i] = value[i];
	}
	//NULL-terminate array
	object->waveform[i] = NULL;
}

static int * messages_audio_message_get_waveform(messages_audio_message_t *object){
	return object->waveform_;
}

static void messages_chat_set_admin_id(messages_chat_t *object, int64 value){
	object->admin_id_ = value;
}

static int64 messages_chat_get_admin_id(messages_chat_t *object){
	return object->admin_id_;
}

static void messages_chat_set_id(messages_chat_t *object, int value){
	object->id_ = value;
}

static int messages_chat_get_id(messages_chat_t *object){
	return object->id_;
}

static void messages_chat_set_kicked(messages_chat_t *object, base_bool_int_t value){
	object->kicked_ = value;
}

static base_bool_int_t messages_chat_get_kicked(messages_chat_t *object){
	return object->kicked_;
}

static void messages_chat_set_left(messages_chat_t *object, base_bool_int_t value){
	object->left_ = value;
}

static base_bool_int_t messages_chat_get_left(messages_chat_t *object){
	return object->left_;
}

static void messages_chat_set_photo_100(messages_chat_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * messages_chat_get_photo_100(messages_chat_t *object){
	return object->photo_100_;
}

static void messages_chat_set_photo_200(messages_chat_t *object, const char * value){
	object->photo_200_ = strdup(value);
}

static const char * messages_chat_get_photo_200(messages_chat_t *object){
	return object->photo_200_;
}

static void messages_chat_set_photo_50(messages_chat_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * messages_chat_get_photo_50(messages_chat_t *object){
	return object->photo_50_;
}

static void messages_chat_set_push_settings(messages_chat_t *object, messages_chat_push_settings_t value){
	object->push_settings_ = value;
}

static messages_chat_push_settings_t messages_chat_get_push_settings(messages_chat_t *object){
	return object->push_settings_;
}

static void messages_chat_set_title(messages_chat_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * messages_chat_get_title(messages_chat_t *object){
	return object->title_;
}

static void messages_chat_set_type(messages_chat_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_chat_get_type(messages_chat_t *object){
	return object->type_;
}

static void messages_chat_set_users(messages_chat_t *object, int64 * value, int len){
int i;
	object->users_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->users[i] = value[i];
	}
	//NULL-terminate array
	object->users[i] = NULL;
}

static int64 * messages_chat_get_users(messages_chat_t *object){
	return object->users_;
}

static void messages_chat_set_is_default_photo(messages_chat_t *object, bool value){
	object->is_default_photo_ = value;
}

static bool messages_chat_get_is_default_photo(messages_chat_t *object){
	return object->is_default_photo_;
}

static void messages_chat_set_members_count(messages_chat_t *object, int value){
	object->members_count_ = value;
}

static int messages_chat_get_members_count(messages_chat_t *object){
	return object->members_count_;
}

static void messages_chat_set_is_group_channel(messages_chat_t *object, bool value){
	object->is_group_channel_ = value;
}

static bool messages_chat_get_is_group_channel(messages_chat_t *object){
	return object->is_group_channel_;
}

static void messages_chat_full_set_admin_id(messages_chat_full_t *object, int64 value){
	object->admin_id_ = value;
}

static int64 messages_chat_full_get_admin_id(messages_chat_full_t *object){
	return object->admin_id_;
}

static void messages_chat_full_set_id(messages_chat_full_t *object, int value){
	object->id_ = value;
}

static int messages_chat_full_get_id(messages_chat_full_t *object){
	return object->id_;
}

static void messages_chat_full_set_kicked(messages_chat_full_t *object, base_bool_int_t value){
	object->kicked_ = value;
}

static base_bool_int_t messages_chat_full_get_kicked(messages_chat_full_t *object){
	return object->kicked_;
}

static void messages_chat_full_set_left(messages_chat_full_t *object, base_bool_int_t value){
	object->left_ = value;
}

static base_bool_int_t messages_chat_full_get_left(messages_chat_full_t *object){
	return object->left_;
}

static void messages_chat_full_set_photo_100(messages_chat_full_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * messages_chat_full_get_photo_100(messages_chat_full_t *object){
	return object->photo_100_;
}

static void messages_chat_full_set_photo_200(messages_chat_full_t *object, const char * value){
	object->photo_200_ = strdup(value);
}

static const char * messages_chat_full_get_photo_200(messages_chat_full_t *object){
	return object->photo_200_;
}

static void messages_chat_full_set_photo_50(messages_chat_full_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * messages_chat_full_get_photo_50(messages_chat_full_t *object){
	return object->photo_50_;
}

static void messages_chat_full_set_push_settings(messages_chat_full_t *object, messages_chat_push_settings_t value){
	object->push_settings_ = value;
}

static messages_chat_push_settings_t messages_chat_full_get_push_settings(messages_chat_full_t *object){
	return object->push_settings_;
}

static void messages_chat_full_set_title(messages_chat_full_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * messages_chat_full_get_title(messages_chat_full_t *object){
	return object->title_;
}

static void messages_chat_full_set_type(messages_chat_full_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_chat_full_get_type(messages_chat_full_t *object){
	return object->type_;
}

static void messages_chat_full_set_users(messages_chat_full_t *object, messages_user_xtr_invited_by * value, int len){
int i;
	object->users_ = malloc(len * sizeof(messages_user_xtr_invited_by) + 8);
	for(i=0;i<len);++i){
		object->users[i] = value[i];
	}
	//NULL-terminate array
	object->users[i] = NULL;
}

static messages_user_xtr_invited_by * messages_chat_full_get_users(messages_chat_full_t *object){
	return object->users_;
}

static void messages_chat_preview_set_admin_id(messages_chat_preview_t *object, int64 value){
	object->admin_id_ = value;
}

static int64 messages_chat_preview_get_admin_id(messages_chat_preview_t *object){
	return object->admin_id_;
}

static void messages_chat_preview_set_joined(messages_chat_preview_t *object, bool value){
	object->joined_ = value;
}

static bool messages_chat_preview_get_joined(messages_chat_preview_t *object){
	return object->joined_;
}

static void messages_chat_preview_set_local_id(messages_chat_preview_t *object, int value){
	object->local_id_ = value;
}

static int messages_chat_preview_get_local_id(messages_chat_preview_t *object){
	return object->local_id_;
}

static void messages_chat_preview_set_members(messages_chat_preview_t *object, int64 * value, int len){
int i;
	object->members_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->members[i] = value[i];
	}
	//NULL-terminate array
	object->members[i] = NULL;
}

static int64 * messages_chat_preview_get_members(messages_chat_preview_t *object){
	return object->members_;
}

static void messages_chat_preview_set_members_count(messages_chat_preview_t *object, int value){
	object->members_count_ = value;
}

static int messages_chat_preview_get_members_count(messages_chat_preview_t *object){
	return object->members_count_;
}

static void messages_chat_preview_set_title(messages_chat_preview_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * messages_chat_preview_get_title(messages_chat_preview_t *object){
	return object->title_;
}

static void messages_chat_preview_set_is_member(messages_chat_preview_t *object, bool value){
	object->is_member_ = value;
}

static bool messages_chat_preview_get_is_member(messages_chat_preview_t *object){
	return object->is_member_;
}

static void messages_chat_preview_set_photo(messages_chat_preview_t *object, messages_chat_settings_photo_t value){
	object->photo_ = value;
}

static messages_chat_settings_photo_t messages_chat_preview_get_photo(messages_chat_preview_t *object){
	return object->photo_;
}

static void messages_chat_preview_set_is_don(messages_chat_preview_t *object, bool value){
	object->is_don_ = value;
}

static bool messages_chat_preview_get_is_don(messages_chat_preview_t *object){
	return object->is_don_;
}

static void messages_chat_preview_set_is_group_channel(messages_chat_preview_t *object, bool value){
	object->is_group_channel_ = value;
}

static bool messages_chat_preview_get_is_group_channel(messages_chat_preview_t *object){
	return object->is_group_channel_;
}

static void messages_chat_preview_set_button(messages_chat_preview_t *object, base_link_button_t value){
	object->button_ = value;
}

static base_link_button_t messages_chat_preview_get_button(messages_chat_preview_t *object){
	return object->button_;
}

static void messages_chat_push_settings_set_disabled_until(messages_chat_push_settings_t *object, int value){
	object->disabled_until_ = value;
}

static int messages_chat_push_settings_get_disabled_until(messages_chat_push_settings_t *object){
	return object->disabled_until_;
}

static void messages_chat_push_settings_set_sound(messages_chat_push_settings_t *object, base_bool_int_t value){
	object->sound_ = value;
}

static base_bool_int_t messages_chat_push_settings_get_sound(messages_chat_push_settings_t *object){
	return object->sound_;
}

static void messages_chat_restrictions_set_admins_promote_users(messages_chat_restrictions_t *object, bool value){
	object->admins_promote_users_ = value;
}

static bool messages_chat_restrictions_get_admins_promote_users(messages_chat_restrictions_t *object){
	return object->admins_promote_users_;
}

static void messages_chat_restrictions_set_only_admins_edit_info(messages_chat_restrictions_t *object, bool value){
	object->only_admins_edit_info_ = value;
}

static bool messages_chat_restrictions_get_only_admins_edit_info(messages_chat_restrictions_t *object){
	return object->only_admins_edit_info_;
}

static void messages_chat_restrictions_set_only_admins_edit_pin(messages_chat_restrictions_t *object, bool value){
	object->only_admins_edit_pin_ = value;
}

static bool messages_chat_restrictions_get_only_admins_edit_pin(messages_chat_restrictions_t *object){
	return object->only_admins_edit_pin_;
}

static void messages_chat_restrictions_set_only_admins_invite(messages_chat_restrictions_t *object, bool value){
	object->only_admins_invite_ = value;
}

static bool messages_chat_restrictions_get_only_admins_invite(messages_chat_restrictions_t *object){
	return object->only_admins_invite_;
}

static void messages_chat_restrictions_set_only_admins_kick(messages_chat_restrictions_t *object, bool value){
	object->only_admins_kick_ = value;
}

static bool messages_chat_restrictions_get_only_admins_kick(messages_chat_restrictions_t *object){
	return object->only_admins_kick_;
}

static void messages_chat_settings_set_members_count(messages_chat_settings_t *object, int value){
	object->members_count_ = value;
}

static int messages_chat_settings_get_members_count(messages_chat_settings_t *object){
	return object->members_count_;
}

static void messages_chat_settings_set_friends_count(messages_chat_settings_t *object, int value){
	object->friends_count_ = value;
}

static int messages_chat_settings_get_friends_count(messages_chat_settings_t *object){
	return object->friends_count_;
}

static void messages_chat_settings_set_owner_id(messages_chat_settings_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 messages_chat_settings_get_owner_id(messages_chat_settings_t *object){
	return object->owner_id_;
}

static void messages_chat_settings_set_title(messages_chat_settings_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * messages_chat_settings_get_title(messages_chat_settings_t *object){
	return object->title_;
}

static void messages_chat_settings_set_pinned_message(messages_chat_settings_t *object, messages_pinned_message_t value){
	object->pinned_message_ = value;
}

static messages_pinned_message_t messages_chat_settings_get_pinned_message(messages_chat_settings_t *object){
	return object->pinned_message_;
}

static void messages_chat_settings_set_state(messages_chat_settings_t *object, messages_chat_settings_state_t value){
	object->state_ = value;
}

static messages_chat_settings_state_t messages_chat_settings_get_state(messages_chat_settings_t *object){
	return object->state_;
}

static void messages_chat_settings_set_photo(messages_chat_settings_t *object, messages_chat_settings_photo_t value){
	object->photo_ = value;
}

static messages_chat_settings_photo_t messages_chat_settings_get_photo(messages_chat_settings_t *object){
	return object->photo_;
}

static void messages_chat_settings_set_admin_ids(messages_chat_settings_t *object, int64 * value, int len){
int i;
	object->admin_ids_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->admin_ids[i] = value[i];
	}
	//NULL-terminate array
	object->admin_ids[i] = NULL;
}

static int64 * messages_chat_settings_get_admin_ids(messages_chat_settings_t *object){
	return object->admin_ids_;
}

static void messages_chat_settings_set_active_ids(messages_chat_settings_t *object, int64 * value, int len){
int i;
	object->active_ids_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->active_ids[i] = value[i];
	}
	//NULL-terminate array
	object->active_ids[i] = NULL;
}

static int64 * messages_chat_settings_get_active_ids(messages_chat_settings_t *object){
	return object->active_ids_;
}

static void messages_chat_settings_set_is_group_channel(messages_chat_settings_t *object, bool value){
	object->is_group_channel_ = value;
}

static bool messages_chat_settings_get_is_group_channel(messages_chat_settings_t *object){
	return object->is_group_channel_;
}

static void messages_chat_settings_set_acl(messages_chat_settings_t *object, messages_chat_settings_acl_t value){
	object->acl_ = value;
}

static messages_chat_settings_acl_t messages_chat_settings_get_acl(messages_chat_settings_t *object){
	return object->acl_;
}

static void messages_chat_settings_set_permissions(messages_chat_settings_t *object, messages_chat_settings_permissions_t value){
	object->permissions_ = value;
}

static messages_chat_settings_permissions_t messages_chat_settings_get_permissions(messages_chat_settings_t *object){
	return object->permissions_;
}

static void messages_chat_settings_set_is_disappearing(messages_chat_settings_t *object, bool value){
	object->is_disappearing_ = value;
}

static bool messages_chat_settings_get_is_disappearing(messages_chat_settings_t *object){
	return object->is_disappearing_;
}

static void messages_chat_settings_set_theme(messages_chat_settings_t *object, const char * value){
	object->theme_ = strdup(value);
}

static const char * messages_chat_settings_get_theme(messages_chat_settings_t *object){
	return object->theme_;
}

static void messages_chat_settings_set_disappearing_chat_link(messages_chat_settings_t *object, const char * value){
	object->disappearing_chat_link_ = strdup(value);
}

static const char * messages_chat_settings_get_disappearing_chat_link(messages_chat_settings_t *object){
	return object->disappearing_chat_link_;
}

static void messages_chat_settings_set_is_service(messages_chat_settings_t *object, bool value){
	object->is_service_ = value;
}

static bool messages_chat_settings_get_is_service(messages_chat_settings_t *object){
	return object->is_service_;
}

static void messages_chat_settings_acl_set_can_change_info(messages_chat_settings_acl_t *object, bool value){
	object->can_change_info_ = value;
}

static bool messages_chat_settings_acl_get_can_change_info(messages_chat_settings_acl_t *object){
	return object->can_change_info_;
}

static void messages_chat_settings_acl_set_can_change_invite_link(messages_chat_settings_acl_t *object, bool value){
	object->can_change_invite_link_ = value;
}

static bool messages_chat_settings_acl_get_can_change_invite_link(messages_chat_settings_acl_t *object){
	return object->can_change_invite_link_;
}

static void messages_chat_settings_acl_set_can_change_pin(messages_chat_settings_acl_t *object, bool value){
	object->can_change_pin_ = value;
}

static bool messages_chat_settings_acl_get_can_change_pin(messages_chat_settings_acl_t *object){
	return object->can_change_pin_;
}

static void messages_chat_settings_acl_set_can_invite(messages_chat_settings_acl_t *object, bool value){
	object->can_invite_ = value;
}

static bool messages_chat_settings_acl_get_can_invite(messages_chat_settings_acl_t *object){
	return object->can_invite_;
}

static void messages_chat_settings_acl_set_can_promote_users(messages_chat_settings_acl_t *object, bool value){
	object->can_promote_users_ = value;
}

static bool messages_chat_settings_acl_get_can_promote_users(messages_chat_settings_acl_t *object){
	return object->can_promote_users_;
}

static void messages_chat_settings_acl_set_can_see_invite_link(messages_chat_settings_acl_t *object, bool value){
	object->can_see_invite_link_ = value;
}

static bool messages_chat_settings_acl_get_can_see_invite_link(messages_chat_settings_acl_t *object){
	return object->can_see_invite_link_;
}

static void messages_chat_settings_acl_set_can_moderate(messages_chat_settings_acl_t *object, bool value){
	object->can_moderate_ = value;
}

static bool messages_chat_settings_acl_get_can_moderate(messages_chat_settings_acl_t *object){
	return object->can_moderate_;
}

static void messages_chat_settings_acl_set_can_copy_chat(messages_chat_settings_acl_t *object, bool value){
	object->can_copy_chat_ = value;
}

static bool messages_chat_settings_acl_get_can_copy_chat(messages_chat_settings_acl_t *object){
	return object->can_copy_chat_;
}

static void messages_chat_settings_acl_set_can_call(messages_chat_settings_acl_t *object, bool value){
	object->can_call_ = value;
}

static bool messages_chat_settings_acl_get_can_call(messages_chat_settings_acl_t *object){
	return object->can_call_;
}

static void messages_chat_settings_acl_set_can_use_mass_mentions(messages_chat_settings_acl_t *object, bool value){
	object->can_use_mass_mentions_ = value;
}

static bool messages_chat_settings_acl_get_can_use_mass_mentions(messages_chat_settings_acl_t *object){
	return object->can_use_mass_mentions_;
}

static void messages_chat_settings_acl_set_can_change_service_type(messages_chat_settings_acl_t *object, bool value){
	object->can_change_service_type_ = value;
}

static bool messages_chat_settings_acl_get_can_change_service_type(messages_chat_settings_acl_t *object){
	return object->can_change_service_type_;
}

static void messages_chat_settings_permissions_set_invite(messages_chat_settings_permissions_t *object, const char * value){
	object->invite_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_invite(messages_chat_settings_permissions_t *object){
	return object->invite_;
}

static void messages_chat_settings_permissions_set_change_info(messages_chat_settings_permissions_t *object, const char * value){
	object->change_info_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_change_info(messages_chat_settings_permissions_t *object){
	return object->change_info_;
}

static void messages_chat_settings_permissions_set_change_pin(messages_chat_settings_permissions_t *object, const char * value){
	object->change_pin_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_change_pin(messages_chat_settings_permissions_t *object){
	return object->change_pin_;
}

static void messages_chat_settings_permissions_set_use_mass_mentions(messages_chat_settings_permissions_t *object, const char * value){
	object->use_mass_mentions_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_use_mass_mentions(messages_chat_settings_permissions_t *object){
	return object->use_mass_mentions_;
}

static void messages_chat_settings_permissions_set_see_invite_link(messages_chat_settings_permissions_t *object, const char * value){
	object->see_invite_link_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_see_invite_link(messages_chat_settings_permissions_t *object){
	return object->see_invite_link_;
}

static void messages_chat_settings_permissions_set_call(messages_chat_settings_permissions_t *object, const char * value){
	object->call_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_call(messages_chat_settings_permissions_t *object){
	return object->call_;
}

static void messages_chat_settings_permissions_set_change_admins(messages_chat_settings_permissions_t *object, const char * value){
	object->change_admins_ = strdup(value);
}

static const char * messages_chat_settings_permissions_get_change_admins(messages_chat_settings_permissions_t *object){
	return object->change_admins_;
}

static void messages_chat_settings_photo_set_photo_50(messages_chat_settings_photo_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * messages_chat_settings_photo_get_photo_50(messages_chat_settings_photo_t *object){
	return object->photo_50_;
}

static void messages_chat_settings_photo_set_photo_100(messages_chat_settings_photo_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * messages_chat_settings_photo_get_photo_100(messages_chat_settings_photo_t *object){
	return object->photo_100_;
}

static void messages_chat_settings_photo_set_photo_200(messages_chat_settings_photo_t *object, const char * value){
	object->photo_200_ = strdup(value);
}

static const char * messages_chat_settings_photo_get_photo_200(messages_chat_settings_photo_t *object){
	return object->photo_200_;
}

static void messages_chat_settings_photo_set_is_default_photo(messages_chat_settings_photo_t *object, bool value){
	object->is_default_photo_ = value;
}

static bool messages_chat_settings_photo_get_is_default_photo(messages_chat_settings_photo_t *object){
	return object->is_default_photo_;
}

static void messages_chat_settings_photo_set_is_default_call_photo(messages_chat_settings_photo_t *object, bool value){
	object->is_default_call_photo_ = value;
}

static bool messages_chat_settings_photo_get_is_default_call_photo(messages_chat_settings_photo_t *object){
	return object->is_default_call_photo_;
}

static void messages_conversation_set_peer(messages_conversation_t *object, messages_conversation_peer_t value){
	object->peer_ = value;
}

static messages_conversation_peer_t messages_conversation_get_peer(messages_conversation_t *object){
	return object->peer_;
}

static void messages_conversation_set_sort_id(messages_conversation_t *object, messages_conversation_sort_id_t value){
	object->sort_id_ = value;
}

static messages_conversation_sort_id_t messages_conversation_get_sort_id(messages_conversation_t *object){
	return object->sort_id_;
}

static void messages_conversation_set_last_message_id(messages_conversation_t *object, int value){
	object->last_message_id_ = value;
}

static int messages_conversation_get_last_message_id(messages_conversation_t *object){
	return object->last_message_id_;
}

static void messages_conversation_set_last_conversation_message_id(messages_conversation_t *object, int value){
	object->last_conversation_message_id_ = value;
}

static int messages_conversation_get_last_conversation_message_id(messages_conversation_t *object){
	return object->last_conversation_message_id_;
}

static void messages_conversation_set_in_read(messages_conversation_t *object, int value){
	object->in_read_ = value;
}

static int messages_conversation_get_in_read(messages_conversation_t *object){
	return object->in_read_;
}

static void messages_conversation_set_out_read(messages_conversation_t *object, int value){
	object->out_read_ = value;
}

static int messages_conversation_get_out_read(messages_conversation_t *object){
	return object->out_read_;
}

static void messages_conversation_set_unread_count(messages_conversation_t *object, int value){
	object->unread_count_ = value;
}

static int messages_conversation_get_unread_count(messages_conversation_t *object){
	return object->unread_count_;
}

static void messages_conversation_set_is_marked_unread(messages_conversation_t *object, bool value){
	object->is_marked_unread_ = value;
}

static bool messages_conversation_get_is_marked_unread(messages_conversation_t *object){
	return object->is_marked_unread_;
}

static void messages_conversation_set_out_read_by(messages_conversation_t *object, messages_out_read_by_t value){
	object->out_read_by_ = value;
}

static messages_out_read_by_t messages_conversation_get_out_read_by(messages_conversation_t *object){
	return object->out_read_by_;
}

static void messages_conversation_set_important(messages_conversation_t *object, bool value){
	object->important_ = value;
}

static bool messages_conversation_get_important(messages_conversation_t *object){
	return object->important_;
}

static void messages_conversation_set_unanswered(messages_conversation_t *object, bool value){
	object->unanswered_ = value;
}

static bool messages_conversation_get_unanswered(messages_conversation_t *object){
	return object->unanswered_;
}

static void messages_conversation_set_special_service_type(messages_conversation_t *object, const char * value){
	object->special_service_type_ = strdup(value);
}

static const char * messages_conversation_get_special_service_type(messages_conversation_t *object){
	return object->special_service_type_;
}

static void messages_conversation_set_message_request_data(messages_conversation_t *object, messages_message_request_data_t value){
	object->message_request_data_ = value;
}

static messages_message_request_data_t messages_conversation_get_message_request_data(messages_conversation_t *object){
	return object->message_request_data_;
}

static void messages_conversation_set_mentions(messages_conversation_t *object, int * value, int len){
int i;
	object->mentions_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->mentions[i] = value[i];
	}
	//NULL-terminate array
	object->mentions[i] = NULL;
}

static int * messages_conversation_get_mentions(messages_conversation_t *object){
	return object->mentions_;
}

static void messages_conversation_set_current_keyboard(messages_conversation_t *object, messages_keyboard_t value){
	object->current_keyboard_ = value;
}

static messages_keyboard_t messages_conversation_get_current_keyboard(messages_conversation_t *object){
	return object->current_keyboard_;
}

static void messages_conversation_set_push_settings(messages_conversation_t *object, messages_push_settings_t value){
	object->push_settings_ = value;
}

static messages_push_settings_t messages_conversation_get_push_settings(messages_conversation_t *object){
	return object->push_settings_;
}

static void messages_conversation_set_can_write(messages_conversation_t *object, messages_conversation_can_write_t value){
	object->can_write_ = value;
}

static messages_conversation_can_write_t messages_conversation_get_can_write(messages_conversation_t *object){
	return object->can_write_;
}

static void messages_conversation_set_chat_settings(messages_conversation_t *object, messages_chat_settings_t value){
	object->chat_settings_ = value;
}

static messages_chat_settings_t messages_conversation_get_chat_settings(messages_conversation_t *object){
	return object->chat_settings_;
}

static void messages_conversation_can_write_set_allowed(messages_conversation_can_write_t *object, bool value){
	object->allowed_ = value;
}

static bool messages_conversation_can_write_get_allowed(messages_conversation_can_write_t *object){
	return object->allowed_;
}

static void messages_conversation_can_write_set_reason(messages_conversation_can_write_t *object, int value){
	object->reason_ = value;
}

static int messages_conversation_can_write_get_reason(messages_conversation_can_write_t *object){
	return object->reason_;
}

static void messages_conversation_member_set_can_kick(messages_conversation_member_t *object, bool value){
	object->can_kick_ = value;
}

static bool messages_conversation_member_get_can_kick(messages_conversation_member_t *object){
	return object->can_kick_;
}

static void messages_conversation_member_set_invited_by(messages_conversation_member_t *object, int64 value){
	object->invited_by_ = value;
}

static int64 messages_conversation_member_get_invited_by(messages_conversation_member_t *object){
	return object->invited_by_;
}

static void messages_conversation_member_set_is_admin(messages_conversation_member_t *object, bool value){
	object->is_admin_ = value;
}

static bool messages_conversation_member_get_is_admin(messages_conversation_member_t *object){
	return object->is_admin_;
}

static void messages_conversation_member_set_is_owner(messages_conversation_member_t *object, bool value){
	object->is_owner_ = value;
}

static bool messages_conversation_member_get_is_owner(messages_conversation_member_t *object){
	return object->is_owner_;
}

static void messages_conversation_member_set_is_message_request(messages_conversation_member_t *object, bool value){
	object->is_message_request_ = value;
}

static bool messages_conversation_member_get_is_message_request(messages_conversation_member_t *object){
	return object->is_message_request_;
}

static void messages_conversation_member_set_join_date(messages_conversation_member_t *object, int value){
	object->join_date_ = value;
}

static int messages_conversation_member_get_join_date(messages_conversation_member_t *object){
	return object->join_date_;
}

static void messages_conversation_member_set_request_date(messages_conversation_member_t *object, int value){
	object->request_date_ = value;
}

static int messages_conversation_member_get_request_date(messages_conversation_member_t *object){
	return object->request_date_;
}

static void messages_conversation_member_set_member_id(messages_conversation_member_t *object, int64 value){
	object->member_id_ = value;
}

static int64 messages_conversation_member_get_member_id(messages_conversation_member_t *object){
	return object->member_id_;
}

static void messages_conversation_peer_set_id(messages_conversation_peer_t *object, int value){
	object->id_ = value;
}

static int messages_conversation_peer_get_id(messages_conversation_peer_t *object){
	return object->id_;
}

static void messages_conversation_peer_set_local_id(messages_conversation_peer_t *object, int value){
	object->local_id_ = value;
}

static int messages_conversation_peer_get_local_id(messages_conversation_peer_t *object){
	return object->local_id_;
}

static void messages_conversation_peer_set_type(messages_conversation_peer_t *object, messages_conversation_peer_type_t value){
	object->type_ = value;
}

static messages_conversation_peer_type_t messages_conversation_peer_get_type(messages_conversation_peer_t *object){
	return object->type_;
}

static void messages_conversation_sort_id_set_major_id(messages_conversation_sort_id_t *object, int value){
	object->major_id_ = value;
}

static int messages_conversation_sort_id_get_major_id(messages_conversation_sort_id_t *object){
	return object->major_id_;
}

static void messages_conversation_sort_id_set_minor_id(messages_conversation_sort_id_t *object, int value){
	object->minor_id_ = value;
}

static int messages_conversation_sort_id_get_minor_id(messages_conversation_sort_id_t *object){
	return object->minor_id_;
}

static void messages_conversation_with_message_set_conversation(messages_conversation_with_message_t *object, messages_conversation_t value){
	object->conversation_ = value;
}

static messages_conversation_t messages_conversation_with_message_get_conversation(messages_conversation_with_message_t *object){
	return object->conversation_;
}

static void messages_conversation_with_message_set_last_message(messages_conversation_with_message_t *object, messages_message_t value){
	object->last_message_ = value;
}

static messages_message_t messages_conversation_with_message_get_last_message(messages_conversation_with_message_t *object){
	return object->last_message_;
}

static void messages_foreign_message_set_attachments(messages_foreign_message_t *object, messages_message_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(messages_message_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static messages_message_attachment * messages_foreign_message_get_attachments(messages_foreign_message_t *object){
	return object->attachments_;
}

static void messages_foreign_message_set_conversation_message_id(messages_foreign_message_t *object, int value){
	object->conversation_message_id_ = value;
}

static int messages_foreign_message_get_conversation_message_id(messages_foreign_message_t *object){
	return object->conversation_message_id_;
}

static void messages_foreign_message_set_date(messages_foreign_message_t *object, int value){
	object->date_ = value;
}

static int messages_foreign_message_get_date(messages_foreign_message_t *object){
	return object->date_;
}

static void messages_foreign_message_set_from_id(messages_foreign_message_t *object, int64 value){
	object->from_id_ = value;
}

static int64 messages_foreign_message_get_from_id(messages_foreign_message_t *object){
	return object->from_id_;
}

static void messages_foreign_message_set_fwd_messages(messages_foreign_message_t *object, messages_foreign_message * value, int len){
int i;
	object->fwd_messages_ = malloc(len * sizeof(messages_foreign_message) + 8);
	for(i=0;i<len);++i){
		object->fwd_messages[i] = value[i];
	}
	//NULL-terminate array
	object->fwd_messages[i] = NULL;
}

static messages_foreign_message * messages_foreign_message_get_fwd_messages(messages_foreign_message_t *object){
	return object->fwd_messages_;
}

static void messages_foreign_message_set_geo(messages_foreign_message_t *object, base_geo_t value){
	object->geo_ = value;
}

static base_geo_t messages_foreign_message_get_geo(messages_foreign_message_t *object){
	return object->geo_;
}

static void messages_foreign_message_set_id(messages_foreign_message_t *object, int value){
	object->id_ = value;
}

static int messages_foreign_message_get_id(messages_foreign_message_t *object){
	return object->id_;
}

static void messages_foreign_message_set_peer_id(messages_foreign_message_t *object, int value){
	object->peer_id_ = value;
}

static int messages_foreign_message_get_peer_id(messages_foreign_message_t *object){
	return object->peer_id_;
}

static void messages_foreign_message_set_reply_message(messages_foreign_message_t *object, messages_foreign_message_t value){
	object->reply_message_ = value;
}

static messages_foreign_message_t messages_foreign_message_get_reply_message(messages_foreign_message_t *object){
	return object->reply_message_;
}

static void messages_foreign_message_set_text(messages_foreign_message_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * messages_foreign_message_get_text(messages_foreign_message_t *object){
	return object->text_;
}

static void messages_foreign_message_set_update_time(messages_foreign_message_t *object, int value){
	object->update_time_ = value;
}

static int messages_foreign_message_get_update_time(messages_foreign_message_t *object){
	return object->update_time_;
}

static void messages_foreign_message_set_was_listened(messages_foreign_message_t *object, bool value){
	object->was_listened_ = value;
}

static bool messages_foreign_message_get_was_listened(messages_foreign_message_t *object){
	return object->was_listened_;
}

static void messages_foreign_message_set_payload(messages_foreign_message_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_foreign_message_get_payload(messages_foreign_message_t *object){
	return object->payload_;
}

static void messages_forward_set_owner_id(messages_forward_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 messages_forward_get_owner_id(messages_forward_t *object){
	return object->owner_id_;
}

static void messages_forward_set_peer_id(messages_forward_t *object, int value){
	object->peer_id_ = value;
}

static int messages_forward_get_peer_id(messages_forward_t *object){
	return object->peer_id_;
}

static void messages_forward_set_conversation_message_ids(messages_forward_t *object, int * value, int len){
int i;
	object->conversation_message_ids_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->conversation_message_ids[i] = value[i];
	}
	//NULL-terminate array
	object->conversation_message_ids[i] = NULL;
}

static int * messages_forward_get_conversation_message_ids(messages_forward_t *object){
	return object->conversation_message_ids_;
}

static void messages_forward_set_message_ids(messages_forward_t *object, int * value, int len){
int i;
	object->message_ids_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->message_ids[i] = value[i];
	}
	//NULL-terminate array
	object->message_ids[i] = NULL;
}

static int * messages_forward_get_message_ids(messages_forward_t *object){
	return object->message_ids_;
}

static void messages_forward_set_is_reply(messages_forward_t *object, bool value){
	object->is_reply_ = value;
}

static bool messages_forward_get_is_reply(messages_forward_t *object){
	return object->is_reply_;
}

static void messages_getConversationById_set_count(messages_getConversationById_t *object, int value){
	object->count_ = value;
}

static int messages_getConversationById_get_count(messages_getConversationById_t *object){
	return object->count_;
}

static void messages_getConversationById_set_items(messages_getConversationById_t *object, messages_conversation * value, int len){
int i;
	object->items_ = malloc(len * sizeof(messages_conversation) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static messages_conversation * messages_getConversationById_get_items(messages_getConversationById_t *object){
	return object->items_;
}

static void messages_getConversationMembers_set_items(messages_getConversationMembers_t *object, messages_conversation_member * value, int len){
int i;
	object->items_ = malloc(len * sizeof(messages_conversation_member) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static messages_conversation_member * messages_getConversationMembers_get_items(messages_getConversationMembers_t *object){
	return object->items_;
}

static void messages_getConversationMembers_set_count(messages_getConversationMembers_t *object, int value){
	object->count_ = value;
}

static int messages_getConversationMembers_get_count(messages_getConversationMembers_t *object){
	return object->count_;
}

static void messages_getConversationMembers_set_chat_restrictions(messages_getConversationMembers_t *object, messages_chat_restrictions_t value){
	object->chat_restrictions_ = value;
}

static messages_chat_restrictions_t messages_getConversationMembers_get_chat_restrictions(messages_getConversationMembers_t *object){
	return object->chat_restrictions_;
}

static void messages_getConversationMembers_set_profiles(messages_getConversationMembers_t *object, users_user_full * value, int len){
int i;
	object->profiles_ = malloc(len * sizeof(users_user_full) + 8);
	for(i=0;i<len);++i){
		object->profiles[i] = value[i];
	}
	//NULL-terminate array
	object->profiles[i] = NULL;
}

static users_user_full * messages_getConversationMembers_get_profiles(messages_getConversationMembers_t *object){
	return object->profiles_;
}

static void messages_getConversationMembers_set_groups(messages_getConversationMembers_t *object, groups_group_full * value, int len){
int i;
	object->groups_ = malloc(len * sizeof(groups_group_full) + 8);
	for(i=0;i<len);++i){
		object->groups[i] = value[i];
	}
	//NULL-terminate array
	object->groups[i] = NULL;
}

static groups_group_full * messages_getConversationMembers_get_groups(messages_getConversationMembers_t *object){
	return object->groups_;
}

static void messages_graffiti_set_access_key(messages_graffiti_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * messages_graffiti_get_access_key(messages_graffiti_t *object){
	return object->access_key_;
}

static void messages_graffiti_set_id(messages_graffiti_t *object, int value){
	object->id_ = value;
}

static int messages_graffiti_get_id(messages_graffiti_t *object){
	return object->id_;
}

static void messages_graffiti_set_owner_id(messages_graffiti_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 messages_graffiti_get_owner_id(messages_graffiti_t *object){
	return object->owner_id_;
}

static void messages_graffiti_set_url(messages_graffiti_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * messages_graffiti_get_url(messages_graffiti_t *object){
	return object->url_;
}

static void messages_graffiti_set_width(messages_graffiti_t *object, int value){
	object->width_ = value;
}

static int messages_graffiti_get_width(messages_graffiti_t *object){
	return object->width_;
}

static void messages_graffiti_set_height(messages_graffiti_t *object, int value){
	object->height_ = value;
}

static int messages_graffiti_get_height(messages_graffiti_t *object){
	return object->height_;
}

static void messages_history_attachment_set_attachment(messages_history_attachment_t *object, messages_history_message_attachment_t value){
	object->attachment_ = value;
}

static messages_history_message_attachment_t messages_history_attachment_get_attachment(messages_history_attachment_t *object){
	return object->attachment_;
}

static void messages_history_attachment_set_message_id(messages_history_attachment_t *object, int value){
	object->message_id_ = value;
}

static int messages_history_attachment_get_message_id(messages_history_attachment_t *object){
	return object->message_id_;
}

static void messages_history_attachment_set_from_id(messages_history_attachment_t *object, int64 value){
	object->from_id_ = value;
}

static int64 messages_history_attachment_get_from_id(messages_history_attachment_t *object){
	return object->from_id_;
}

static void messages_history_attachment_set_forward_level(messages_history_attachment_t *object, int value){
	object->forward_level_ = value;
}

static int messages_history_attachment_get_forward_level(messages_history_attachment_t *object){
	return object->forward_level_;
}

static void messages_history_attachment_set_was_listened(messages_history_attachment_t *object, bool value){
	object->was_listened_ = value;
}

static bool messages_history_attachment_get_was_listened(messages_history_attachment_t *object){
	return object->was_listened_;
}

static void messages_history_message_attachment_set_audio(messages_history_message_attachment_t *object, audio_audio_t value){
	object->audio_ = value;
}

static audio_audio_t messages_history_message_attachment_get_audio(messages_history_message_attachment_t *object){
	return object->audio_;
}

static void messages_history_message_attachment_set_audio_message(messages_history_message_attachment_t *object, messages_audio_message_t value){
	object->audio_message_ = value;
}

static messages_audio_message_t messages_history_message_attachment_get_audio_message(messages_history_message_attachment_t *object){
	return object->audio_message_;
}

static void messages_history_message_attachment_set_doc(messages_history_message_attachment_t *object, docs_doc_t value){
	object->doc_ = value;
}

static docs_doc_t messages_history_message_attachment_get_doc(messages_history_message_attachment_t *object){
	return object->doc_;
}

static void messages_history_message_attachment_set_graffiti(messages_history_message_attachment_t *object, messages_graffiti_t value){
	object->graffiti_ = value;
}

static messages_graffiti_t messages_history_message_attachment_get_graffiti(messages_history_message_attachment_t *object){
	return object->graffiti_;
}

static void messages_history_message_attachment_set_link(messages_history_message_attachment_t *object, base_link_t value){
	object->link_ = value;
}

static base_link_t messages_history_message_attachment_get_link(messages_history_message_attachment_t *object){
	return object->link_;
}

static void messages_history_message_attachment_set_market(messages_history_message_attachment_t *object, market_market_item_t value){
	object->market_ = value;
}

static market_market_item_t messages_history_message_attachment_get_market(messages_history_message_attachment_t *object){
	return object->market_;
}

static void messages_history_message_attachment_set_photo(messages_history_message_attachment_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t messages_history_message_attachment_get_photo(messages_history_message_attachment_t *object){
	return object->photo_;
}

static void messages_history_message_attachment_set_type(messages_history_message_attachment_t *object, messages_history_message_attachment_type_t value){
	object->type_ = value;
}

static messages_history_message_attachment_type_t messages_history_message_attachment_get_type(messages_history_message_attachment_t *object){
	return object->type_;
}

static void messages_history_message_attachment_set_video(messages_history_message_attachment_t *object, video_video_t value){
	object->video_ = value;
}

static video_video_t messages_history_message_attachment_get_video(messages_history_message_attachment_t *object){
	return object->video_;
}

static void messages_history_message_attachment_set_wall(messages_history_message_attachment_t *object, wall_wallpost_full_t value){
	object->wall_ = value;
}

static wall_wallpost_full_t messages_history_message_attachment_get_wall(messages_history_message_attachment_t *object){
	return object->wall_;
}

static void messages_keyboard_set_one_time(messages_keyboard_t *object, bool value){
	object->one_time_ = value;
}

static bool messages_keyboard_get_one_time(messages_keyboard_t *object){
	return object->one_time_;
}

static void messages_keyboard_set_buttons(messages_keyboard_t *object, (null) * value, int len){
int i;
	object->buttons_ = malloc(len * sizeof((null)) + 8);
	for(i=0;i<len);++i){
		object->buttons[i] = value[i];
	}
	//NULL-terminate array
	object->buttons[i] = NULL;
}

static (null) * messages_keyboard_get_buttons(messages_keyboard_t *object){
	return object->buttons_;
}

static void messages_keyboard_set_author_id(messages_keyboard_t *object, int64 value){
	object->author_id_ = value;
}

static int64 messages_keyboard_get_author_id(messages_keyboard_t *object){
	return object->author_id_;
}

static void messages_keyboard_set_inline(messages_keyboard_t *object, bool value){
	object->inline_ = value;
}

static bool messages_keyboard_get_inline(messages_keyboard_t *object){
	return object->inline_;
}

static void messages_keyboard_button_set_action(messages_keyboard_button_t *object, messages_keyboard_button_property_action_t value){
	object->action_ = value;
}

static messages_keyboard_button_property_action_t messages_keyboard_button_get_action(messages_keyboard_button_t *object){
	return object->action_;
}

static void messages_keyboard_button_set_color(messages_keyboard_button_t *object, const char * value){
	object->color_ = strdup(value);
}

static const char * messages_keyboard_button_get_color(messages_keyboard_button_t *object){
	return object->color_;
}

static void messages_keyboard_button_action_callback_set_label(messages_keyboard_button_action_callback_t *object, const char * value){
	object->label_ = strdup(value);
}

static const char * messages_keyboard_button_action_callback_get_label(messages_keyboard_button_action_callback_t *object){
	return object->label_;
}

static void messages_keyboard_button_action_callback_set_payload(messages_keyboard_button_action_callback_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_keyboard_button_action_callback_get_payload(messages_keyboard_button_action_callback_t *object){
	return object->payload_;
}

static void messages_keyboard_button_action_callback_set_type(messages_keyboard_button_action_callback_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_callback_get_type(messages_keyboard_button_action_callback_t *object){
	return object->type_;
}

static void messages_keyboard_button_action_location_set_payload(messages_keyboard_button_action_location_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_keyboard_button_action_location_get_payload(messages_keyboard_button_action_location_t *object){
	return object->payload_;
}

static void messages_keyboard_button_action_location_set_type(messages_keyboard_button_action_location_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_location_get_type(messages_keyboard_button_action_location_t *object){
	return object->type_;
}

static void messages_keyboard_button_action_open_app_set_app_id(messages_keyboard_button_action_open_app_t *object, int value){
	object->app_id_ = value;
}

static int messages_keyboard_button_action_open_app_get_app_id(messages_keyboard_button_action_open_app_t *object){
	return object->app_id_;
}

static void messages_keyboard_button_action_open_app_set_hash(messages_keyboard_button_action_open_app_t *object, const char * value){
	object->hash_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_app_get_hash(messages_keyboard_button_action_open_app_t *object){
	return object->hash_;
}

static void messages_keyboard_button_action_open_app_set_label(messages_keyboard_button_action_open_app_t *object, const char * value){
	object->label_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_app_get_label(messages_keyboard_button_action_open_app_t *object){
	return object->label_;
}

static void messages_keyboard_button_action_open_app_set_owner_id(messages_keyboard_button_action_open_app_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 messages_keyboard_button_action_open_app_get_owner_id(messages_keyboard_button_action_open_app_t *object){
	return object->owner_id_;
}

static void messages_keyboard_button_action_open_app_set_payload(messages_keyboard_button_action_open_app_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_app_get_payload(messages_keyboard_button_action_open_app_t *object){
	return object->payload_;
}

static void messages_keyboard_button_action_open_app_set_type(messages_keyboard_button_action_open_app_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_app_get_type(messages_keyboard_button_action_open_app_t *object){
	return object->type_;
}

static void messages_keyboard_button_action_open_link_set_label(messages_keyboard_button_action_open_link_t *object, const char * value){
	object->label_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_link_get_label(messages_keyboard_button_action_open_link_t *object){
	return object->label_;
}

static void messages_keyboard_button_action_open_link_set_link(messages_keyboard_button_action_open_link_t *object, const char * value){
	object->link_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_link_get_link(messages_keyboard_button_action_open_link_t *object){
	return object->link_;
}

static void messages_keyboard_button_action_open_link_set_payload(messages_keyboard_button_action_open_link_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_link_get_payload(messages_keyboard_button_action_open_link_t *object){
	return object->payload_;
}

static void messages_keyboard_button_action_open_link_set_type(messages_keyboard_button_action_open_link_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_link_get_type(messages_keyboard_button_action_open_link_t *object){
	return object->type_;
}

static void messages_keyboard_button_action_open_photo_set_type(messages_keyboard_button_action_open_photo_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_open_photo_get_type(messages_keyboard_button_action_open_photo_t *object){
	return object->type_;
}

static void messages_keyboard_button_action_text_set_label(messages_keyboard_button_action_text_t *object, const char * value){
	object->label_ = strdup(value);
}

static const char * messages_keyboard_button_action_text_get_label(messages_keyboard_button_action_text_t *object){
	return object->label_;
}

static void messages_keyboard_button_action_text_set_payload(messages_keyboard_button_action_text_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_keyboard_button_action_text_get_payload(messages_keyboard_button_action_text_t *object){
	return object->payload_;
}

static void messages_keyboard_button_action_text_set_type(messages_keyboard_button_action_text_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_text_get_type(messages_keyboard_button_action_text_t *object){
	return object->type_;
}

static void messages_keyboard_button_action_vkpay_set_hash(messages_keyboard_button_action_vkpay_t *object, const char * value){
	object->hash_ = strdup(value);
}

static const char * messages_keyboard_button_action_vkpay_get_hash(messages_keyboard_button_action_vkpay_t *object){
	return object->hash_;
}

static void messages_keyboard_button_action_vkpay_set_payload(messages_keyboard_button_action_vkpay_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_keyboard_button_action_vkpay_get_payload(messages_keyboard_button_action_vkpay_t *object){
	return object->payload_;
}

static void messages_keyboard_button_action_vkpay_set_type(messages_keyboard_button_action_vkpay_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * messages_keyboard_button_action_vkpay_get_type(messages_keyboard_button_action_vkpay_t *object){
	return object->type_;
}

static void messages_last_activity_set_online(messages_last_activity_t *object, base_bool_int_t value){
	object->online_ = value;
}

static base_bool_int_t messages_last_activity_get_online(messages_last_activity_t *object){
	return object->online_;
}

static void messages_last_activity_set_time(messages_last_activity_t *object, int value){
	object->time_ = value;
}

static int messages_last_activity_get_time(messages_last_activity_t *object){
	return object->time_;
}

static void messages_longpoll_messages_set_count(messages_longpoll_messages_t *object, int value){
	object->count_ = value;
}

static int messages_longpoll_messages_get_count(messages_longpoll_messages_t *object){
	return object->count_;
}

static void messages_longpoll_messages_set_items(messages_longpoll_messages_t *object, messages_message * value, int len){
int i;
	object->items_ = malloc(len * sizeof(messages_message) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static messages_message * messages_longpoll_messages_get_items(messages_longpoll_messages_t *object){
	return object->items_;
}

static void messages_longpoll_params_set_server(messages_longpoll_params_t *object, const char * value){
	object->server_ = strdup(value);
}

static const char * messages_longpoll_params_get_server(messages_longpoll_params_t *object){
	return object->server_;
}

static void messages_longpoll_params_set_key(messages_longpoll_params_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * messages_longpoll_params_get_key(messages_longpoll_params_t *object){
	return object->key_;
}

static void messages_longpoll_params_set_ts(messages_longpoll_params_t *object, int value){
	object->ts_ = value;
}

static int messages_longpoll_params_get_ts(messages_longpoll_params_t *object){
	return object->ts_;
}

static void messages_longpoll_params_set_pts(messages_longpoll_params_t *object, int value){
	object->pts_ = value;
}

static int messages_longpoll_params_get_pts(messages_longpoll_params_t *object){
	return object->pts_;
}

static void messages_message_set_action(messages_message_t *object, messages_message_action_t value){
	object->action_ = value;
}

static messages_message_action_t messages_message_get_action(messages_message_t *object){
	return object->action_;
}

static void messages_message_set_admin_author_id(messages_message_t *object, int64 value){
	object->admin_author_id_ = value;
}

static int64 messages_message_get_admin_author_id(messages_message_t *object){
	return object->admin_author_id_;
}

static void messages_message_set_attachments(messages_message_t *object, messages_message_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(messages_message_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static messages_message_attachment * messages_message_get_attachments(messages_message_t *object){
	return object->attachments_;
}

static void messages_message_set_conversation_message_id(messages_message_t *object, int value){
	object->conversation_message_id_ = value;
}

static int messages_message_get_conversation_message_id(messages_message_t *object){
	return object->conversation_message_id_;
}

static void messages_message_set_date(messages_message_t *object, int value){
	object->date_ = value;
}

static int messages_message_get_date(messages_message_t *object){
	return object->date_;
}

static void messages_message_set_deleted(messages_message_t *object, base_bool_int_t value){
	object->deleted_ = value;
}

static base_bool_int_t messages_message_get_deleted(messages_message_t *object){
	return object->deleted_;
}

static void messages_message_set_from_id(messages_message_t *object, int64 value){
	object->from_id_ = value;
}

static int64 messages_message_get_from_id(messages_message_t *object){
	return object->from_id_;
}

static void messages_message_set_fwd_messages(messages_message_t *object, messages_foreign_message * value, int len){
int i;
	object->fwd_messages_ = malloc(len * sizeof(messages_foreign_message) + 8);
	for(i=0;i<len);++i){
		object->fwd_messages[i] = value[i];
	}
	//NULL-terminate array
	object->fwd_messages[i] = NULL;
}

static messages_foreign_message * messages_message_get_fwd_messages(messages_message_t *object){
	return object->fwd_messages_;
}

static void messages_message_set_geo(messages_message_t *object, base_geo_t value){
	object->geo_ = value;
}

static base_geo_t messages_message_get_geo(messages_message_t *object){
	return object->geo_;
}

static void messages_message_set_id(messages_message_t *object, int value){
	object->id_ = value;
}

static int messages_message_get_id(messages_message_t *object){
	return object->id_;
}

static void messages_message_set_important(messages_message_t *object, bool value){
	object->important_ = value;
}

static bool messages_message_get_important(messages_message_t *object){
	return object->important_;
}

static void messages_message_set_is_hidden(messages_message_t *object, bool value){
	object->is_hidden_ = value;
}

static bool messages_message_get_is_hidden(messages_message_t *object){
	return object->is_hidden_;
}

static void messages_message_set_is_cropped(messages_message_t *object, bool value){
	object->is_cropped_ = value;
}

static bool messages_message_get_is_cropped(messages_message_t *object){
	return object->is_cropped_;
}

static void messages_message_set_keyboard(messages_message_t *object, messages_keyboard_t value){
	object->keyboard_ = value;
}

static messages_keyboard_t messages_message_get_keyboard(messages_message_t *object){
	return object->keyboard_;
}

static void messages_message_set_members_count(messages_message_t *object, int value){
	object->members_count_ = value;
}

static int messages_message_get_members_count(messages_message_t *object){
	return object->members_count_;
}

static void messages_message_set_out(messages_message_t *object, base_bool_int_t value){
	object->out_ = value;
}

static base_bool_int_t messages_message_get_out(messages_message_t *object){
	return object->out_;
}

static void messages_message_set_payload(messages_message_t *object, const char * value){
	object->payload_ = strdup(value);
}

static const char * messages_message_get_payload(messages_message_t *object){
	return object->payload_;
}

static void messages_message_set_peer_id(messages_message_t *object, int value){
	object->peer_id_ = value;
}

static int messages_message_get_peer_id(messages_message_t *object){
	return object->peer_id_;
}

static void messages_message_set_random_id(messages_message_t *object, int value){
	object->random_id_ = value;
}

static int messages_message_get_random_id(messages_message_t *object){
	return object->random_id_;
}

static void messages_message_set_ref(messages_message_t *object, const char * value){
	object->ref_ = strdup(value);
}

static const char * messages_message_get_ref(messages_message_t *object){
	return object->ref_;
}

static void messages_message_set_ref_source(messages_message_t *object, const char * value){
	object->ref_source_ = strdup(value);
}

static const char * messages_message_get_ref_source(messages_message_t *object){
	return object->ref_source_;
}

static void messages_message_set_reply_message(messages_message_t *object, messages_foreign_message_t value){
	object->reply_message_ = value;
}

static messages_foreign_message_t messages_message_get_reply_message(messages_message_t *object){
	return object->reply_message_;
}

static void messages_message_set_text(messages_message_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * messages_message_get_text(messages_message_t *object){
	return object->text_;
}

static void messages_message_set_update_time(messages_message_t *object, int value){
	object->update_time_ = value;
}

static int messages_message_get_update_time(messages_message_t *object){
	return object->update_time_;
}

static void messages_message_set_was_listened(messages_message_t *object, bool value){
	object->was_listened_ = value;
}

static bool messages_message_get_was_listened(messages_message_t *object){
	return object->was_listened_;
}

static void messages_message_set_pinned_at(messages_message_t *object, int value){
	object->pinned_at_ = value;
}

static int messages_message_get_pinned_at(messages_message_t *object){
	return object->pinned_at_;
}

static void messages_message_set_is_silent(messages_message_t *object, bool value){
	object->is_silent_ = value;
}

static bool messages_message_get_is_silent(messages_message_t *object){
	return object->is_silent_;
}

static void messages_message_action_set_conversation_message_id(messages_message_action_t *object, int value){
	object->conversation_message_id_ = value;
}

static int messages_message_action_get_conversation_message_id(messages_message_action_t *object){
	return object->conversation_message_id_;
}

static void messages_message_action_set_email(messages_message_action_t *object, const char * value){
	object->email_ = strdup(value);
}

static const char * messages_message_action_get_email(messages_message_action_t *object){
	return object->email_;
}

static void messages_message_action_set_member_id(messages_message_action_t *object, int64 value){
	object->member_id_ = value;
}

static int64 messages_message_action_get_member_id(messages_message_action_t *object){
	return object->member_id_;
}

static void messages_message_action_set_message(messages_message_action_t *object, const char * value){
	object->message_ = strdup(value);
}

static const char * messages_message_action_get_message(messages_message_action_t *object){
	return object->message_;
}

static void messages_message_action_set_photo(messages_message_action_t *object, messages_message_action_photo_t value){
	object->photo_ = value;
}

static messages_message_action_photo_t messages_message_action_get_photo(messages_message_action_t *object){
	return object->photo_;
}

static void messages_message_action_set_text(messages_message_action_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * messages_message_action_get_text(messages_message_action_t *object){
	return object->text_;
}

static void messages_message_action_set_type(messages_message_action_t *object, messages_message_action_status_t value){
	object->type_ = value;
}

static messages_message_action_status_t messages_message_action_get_type(messages_message_action_t *object){
	return object->type_;
}

static void messages_message_action_photo_set_photo_50(messages_message_action_photo_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * messages_message_action_photo_get_photo_50(messages_message_action_photo_t *object){
	return object->photo_50_;
}

static void messages_message_action_photo_set_photo_100(messages_message_action_photo_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * messages_message_action_photo_get_photo_100(messages_message_action_photo_t *object){
	return object->photo_100_;
}

static void messages_message_action_photo_set_photo_200(messages_message_action_photo_t *object, const char * value){
	object->photo_200_ = strdup(value);
}

static const char * messages_message_action_photo_get_photo_200(messages_message_action_photo_t *object){
	return object->photo_200_;
}

static void messages_message_attachment_set_audio(messages_message_attachment_t *object, audio_audio_t value){
	object->audio_ = value;
}

static audio_audio_t messages_message_attachment_get_audio(messages_message_attachment_t *object){
	return object->audio_;
}

static void messages_message_attachment_set_audio_message(messages_message_attachment_t *object, messages_audio_message_t value){
	object->audio_message_ = value;
}

static messages_audio_message_t messages_message_attachment_get_audio_message(messages_message_attachment_t *object){
	return object->audio_message_;
}

static void messages_message_attachment_set_call(messages_message_attachment_t *object, calls_call_t value){
	object->call_ = value;
}

static calls_call_t messages_message_attachment_get_call(messages_message_attachment_t *object){
	return object->call_;
}

static void messages_message_attachment_set_doc(messages_message_attachment_t *object, docs_doc_t value){
	object->doc_ = value;
}

static docs_doc_t messages_message_attachment_get_doc(messages_message_attachment_t *object){
	return object->doc_;
}

static void messages_message_attachment_set_gift(messages_message_attachment_t *object, gifts_layout_t value){
	object->gift_ = value;
}

static gifts_layout_t messages_message_attachment_get_gift(messages_message_attachment_t *object){
	return object->gift_;
}

static void messages_message_attachment_set_graffiti(messages_message_attachment_t *object, messages_graffiti_t value){
	object->graffiti_ = value;
}

static messages_graffiti_t messages_message_attachment_get_graffiti(messages_message_attachment_t *object){
	return object->graffiti_;
}

static void messages_message_attachment_set_market(messages_message_attachment_t *object, market_market_item_t value){
	object->market_ = value;
}

static market_market_item_t messages_message_attachment_get_market(messages_message_attachment_t *object){
	return object->market_;
}

static void messages_message_attachment_set_market_market_album(messages_message_attachment_t *object, market_market_album_t value){
	object->market_market_album_ = value;
}

static market_market_album_t messages_message_attachment_get_market_market_album(messages_message_attachment_t *object){
	return object->market_market_album_;
}

static void messages_message_attachment_set_photo(messages_message_attachment_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t messages_message_attachment_get_photo(messages_message_attachment_t *object){
	return object->photo_;
}

static void messages_message_attachment_set_sticker(messages_message_attachment_t *object, base_sticker_t value){
	object->sticker_ = value;
}

static base_sticker_t messages_message_attachment_get_sticker(messages_message_attachment_t *object){
	return object->sticker_;
}

static void messages_message_attachment_set_story(messages_message_attachment_t *object, stories_story_t value){
	object->story_ = value;
}

static stories_story_t messages_message_attachment_get_story(messages_message_attachment_t *object){
	return object->story_;
}

static void messages_message_attachment_set_type(messages_message_attachment_t *object, messages_message_attachment_type_t value){
	object->type_ = value;
}

static messages_message_attachment_type_t messages_message_attachment_get_type(messages_message_attachment_t *object){
	return object->type_;
}

static void messages_message_attachment_set_video(messages_message_attachment_t *object, video_video_full_t value){
	object->video_ = value;
}

static video_video_full_t messages_message_attachment_get_video(messages_message_attachment_t *object){
	return object->video_;
}

static void messages_message_attachment_set_wall_reply(messages_message_attachment_t *object, wall_wall_comment_t value){
	object->wall_reply_ = value;
}

static wall_wall_comment_t messages_message_attachment_get_wall_reply(messages_message_attachment_t *object){
	return object->wall_reply_;
}

static void messages_message_attachment_set_poll(messages_message_attachment_t *object, polls_poll_t value){
	object->poll_ = value;
}

static polls_poll_t messages_message_attachment_get_poll(messages_message_attachment_t *object){
	return object->poll_;
}

static void messages_message_request_data_set_status(messages_message_request_data_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * messages_message_request_data_get_status(messages_message_request_data_t *object){
	return object->status_;
}

static void messages_message_request_data_set_inviter_id(messages_message_request_data_t *object, int64 value){
	object->inviter_id_ = value;
}

static int64 messages_message_request_data_get_inviter_id(messages_message_request_data_t *object){
	return object->inviter_id_;
}

static void messages_message_request_data_set_request_date(messages_message_request_data_t *object, int value){
	object->request_date_ = value;
}

static int messages_message_request_data_get_request_date(messages_message_request_data_t *object){
	return object->request_date_;
}

static void messages_messages_array_set_count(messages_messages_array_t *object, int value){
	object->count_ = value;
}

static int messages_messages_array_get_count(messages_messages_array_t *object){
	return object->count_;
}

static void messages_messages_array_set_items(messages_messages_array_t *object, messages_message * value, int len){
int i;
	object->items_ = malloc(len * sizeof(messages_message) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static messages_message * messages_messages_array_get_items(messages_messages_array_t *object){
	return object->items_;
}

static void messages_out_read_by_set_count(messages_out_read_by_t *object, int value){
	object->count_ = value;
}

static int messages_out_read_by_get_count(messages_out_read_by_t *object){
	return object->count_;
}

static void messages_out_read_by_set_member_ids(messages_out_read_by_t *object, int64 * value, int len){
int i;
	object->member_ids_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->member_ids[i] = value[i];
	}
	//NULL-terminate array
	object->member_ids[i] = NULL;
}

static int64 * messages_out_read_by_get_member_ids(messages_out_read_by_t *object){
	return object->member_ids_;
}

static void messages_pinned_message_set_attachments(messages_pinned_message_t *object, messages_message_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(messages_message_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static messages_message_attachment * messages_pinned_message_get_attachments(messages_pinned_message_t *object){
	return object->attachments_;
}

static void messages_pinned_message_set_conversation_message_id(messages_pinned_message_t *object, int value){
	object->conversation_message_id_ = value;
}

static int messages_pinned_message_get_conversation_message_id(messages_pinned_message_t *object){
	return object->conversation_message_id_;
}

static void messages_pinned_message_set_id(messages_pinned_message_t *object, int value){
	object->id_ = value;
}

static int messages_pinned_message_get_id(messages_pinned_message_t *object){
	return object->id_;
}

static void messages_pinned_message_set_date(messages_pinned_message_t *object, int value){
	object->date_ = value;
}

static int messages_pinned_message_get_date(messages_pinned_message_t *object){
	return object->date_;
}

static void messages_pinned_message_set_from_id(messages_pinned_message_t *object, int64 value){
	object->from_id_ = value;
}

static int64 messages_pinned_message_get_from_id(messages_pinned_message_t *object){
	return object->from_id_;
}

static void messages_pinned_message_set_fwd_messages(messages_pinned_message_t *object, messages_foreign_message * value, int len){
int i;
	object->fwd_messages_ = malloc(len * sizeof(messages_foreign_message) + 8);
	for(i=0;i<len);++i){
		object->fwd_messages[i] = value[i];
	}
	//NULL-terminate array
	object->fwd_messages[i] = NULL;
}

static messages_foreign_message * messages_pinned_message_get_fwd_messages(messages_pinned_message_t *object){
	return object->fwd_messages_;
}

static void messages_pinned_message_set_geo(messages_pinned_message_t *object, base_geo_t value){
	object->geo_ = value;
}

static base_geo_t messages_pinned_message_get_geo(messages_pinned_message_t *object){
	return object->geo_;
}

static void messages_pinned_message_set_peer_id(messages_pinned_message_t *object, int value){
	object->peer_id_ = value;
}

static int messages_pinned_message_get_peer_id(messages_pinned_message_t *object){
	return object->peer_id_;
}

static void messages_pinned_message_set_reply_message(messages_pinned_message_t *object, messages_foreign_message_t value){
	object->reply_message_ = value;
}

static messages_foreign_message_t messages_pinned_message_get_reply_message(messages_pinned_message_t *object){
	return object->reply_message_;
}

static void messages_pinned_message_set_text(messages_pinned_message_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * messages_pinned_message_get_text(messages_pinned_message_t *object){
	return object->text_;
}

static void messages_pinned_message_set_keyboard(messages_pinned_message_t *object, messages_keyboard_t value){
	object->keyboard_ = value;
}

static messages_keyboard_t messages_pinned_message_get_keyboard(messages_pinned_message_t *object){
	return object->keyboard_;
}

static void messages_push_settings_set_disabled_forever(messages_push_settings_t *object, bool value){
	object->disabled_forever_ = value;
}

static bool messages_push_settings_get_disabled_forever(messages_push_settings_t *object){
	return object->disabled_forever_;
}

static void messages_push_settings_set_disabled_until(messages_push_settings_t *object, int value){
	object->disabled_until_ = value;
}

static int messages_push_settings_get_disabled_until(messages_push_settings_t *object){
	return object->disabled_until_;
}

static void messages_push_settings_set_no_sound(messages_push_settings_t *object, bool value){
	object->no_sound_ = value;
}

static bool messages_push_settings_get_no_sound(messages_push_settings_t *object){
	return object->no_sound_;
}

static void messages_push_settings_set_disabled_mentions(messages_push_settings_t *object, bool value){
	object->disabled_mentions_ = value;
}

static bool messages_push_settings_get_disabled_mentions(messages_push_settings_t *object){
	return object->disabled_mentions_;
}

static void messages_push_settings_set_disabled_mass_mentions(messages_push_settings_t *object, bool value){
	object->disabled_mass_mentions_ = value;
}

static bool messages_push_settings_get_disabled_mass_mentions(messages_push_settings_t *object){
	return object->disabled_mass_mentions_;
}

static void messages_send_user_ids_response_item_set_peer_id(messages_send_user_ids_response_item_t *object, int value){
	object->peer_id_ = value;
}

static int messages_send_user_ids_response_item_get_peer_id(messages_send_user_ids_response_item_t *object){
	return object->peer_id_;
}

static void messages_send_user_ids_response_item_set_message_id(messages_send_user_ids_response_item_t *object, int value){
	object->message_id_ = value;
}

static int messages_send_user_ids_response_item_get_message_id(messages_send_user_ids_response_item_t *object){
	return object->message_id_;
}

static void messages_send_user_ids_response_item_set_conversation_message_id(messages_send_user_ids_response_item_t *object, int value){
	object->conversation_message_id_ = value;
}

static int messages_send_user_ids_response_item_get_conversation_message_id(messages_send_user_ids_response_item_t *object){
	return object->conversation_message_id_;
}

static void messages_send_user_ids_response_item_set_error(messages_send_user_ids_response_item_t *object, base_message_error_t value){
	object->error_ = value;
}

static base_message_error_t messages_send_user_ids_response_item_get_error(messages_send_user_ids_response_item_t *object){
	return object->error_;
}

static void newsfeed_item_audio_audio_set_count(newsfeed_item_audio_audio_t *object, int value){
	object->count_ = value;
}

static int newsfeed_item_audio_audio_get_count(newsfeed_item_audio_audio_t *object){
	return object->count_;
}

static void newsfeed_item_audio_audio_set_items(newsfeed_item_audio_audio_t *object, audio_audio * value, int len){
int i;
	object->items_ = malloc(len * sizeof(audio_audio) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static audio_audio * newsfeed_item_audio_audio_get_items(newsfeed_item_audio_audio_t *object){
	return object->items_;
}

static void newsfeed_item_base_set_type(newsfeed_item_base_t *object, newsfeed_newsfeed_item_type_t value){
	object->type_ = value;
}

static newsfeed_newsfeed_item_type_t newsfeed_item_base_get_type(newsfeed_item_base_t *object){
	return object->type_;
}

static void newsfeed_item_base_set_source_id(newsfeed_item_base_t *object, int64 value){
	object->source_id_ = value;
}

static int64 newsfeed_item_base_get_source_id(newsfeed_item_base_t *object){
	return object->source_id_;
}

static void newsfeed_item_base_set_date(newsfeed_item_base_t *object, int value){
	object->date_ = value;
}

static int newsfeed_item_base_get_date(newsfeed_item_base_t *object){
	return object->date_;
}

static void newsfeed_item_digest_button_set_title(newsfeed_item_digest_button_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * newsfeed_item_digest_button_get_title(newsfeed_item_digest_button_t *object){
	return object->title_;
}

static void newsfeed_item_digest_button_set_style(newsfeed_item_digest_button_t *object, const char * value){
	object->style_ = strdup(value);
}

static const char * newsfeed_item_digest_button_get_style(newsfeed_item_digest_button_t *object){
	return object->style_;
}

static void newsfeed_item_digest_footer_set_style(newsfeed_item_digest_footer_t *object, const char * value){
	object->style_ = strdup(value);
}

static const char * newsfeed_item_digest_footer_get_style(newsfeed_item_digest_footer_t *object){
	return object->style_;
}

static void newsfeed_item_digest_footer_set_text(newsfeed_item_digest_footer_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * newsfeed_item_digest_footer_get_text(newsfeed_item_digest_footer_t *object){
	return object->text_;
}

static void newsfeed_item_digest_footer_set_button(newsfeed_item_digest_footer_t *object, newsfeed_item_digest_button_t value){
	object->button_ = value;
}

static newsfeed_item_digest_button_t newsfeed_item_digest_footer_get_button(newsfeed_item_digest_footer_t *object){
	return object->button_;
}

static void newsfeed_item_digest_full_item_set_text(newsfeed_item_digest_full_item_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * newsfeed_item_digest_full_item_get_text(newsfeed_item_digest_full_item_t *object){
	return object->text_;
}

static void newsfeed_item_digest_full_item_set_source_name(newsfeed_item_digest_full_item_t *object, const char * value){
	object->source_name_ = strdup(value);
}

static const char * newsfeed_item_digest_full_item_get_source_name(newsfeed_item_digest_full_item_t *object){
	return object->source_name_;
}

static void newsfeed_item_digest_full_item_set_attachment_index(newsfeed_item_digest_full_item_t *object, int value){
	object->attachment_index_ = value;
}

static int newsfeed_item_digest_full_item_get_attachment_index(newsfeed_item_digest_full_item_t *object){
	return object->attachment_index_;
}

static void newsfeed_item_digest_full_item_set_attachment(newsfeed_item_digest_full_item_t *object, wall_wallpost_attachment_t value){
	object->attachment_ = value;
}

static wall_wallpost_attachment_t newsfeed_item_digest_full_item_get_attachment(newsfeed_item_digest_full_item_t *object){
	return object->attachment_;
}

static void newsfeed_item_digest_full_item_set_style(newsfeed_item_digest_full_item_t *object, const char * value){
	object->style_ = strdup(value);
}

static const char * newsfeed_item_digest_full_item_get_style(newsfeed_item_digest_full_item_t *object){
	return object->style_;
}

static void newsfeed_item_digest_full_item_set_post(newsfeed_item_digest_full_item_t *object, wall_wallpost_t value){
	object->post_ = value;
}

static wall_wallpost_t newsfeed_item_digest_full_item_get_post(newsfeed_item_digest_full_item_t *object){
	return object->post_;
}

static void newsfeed_item_digest_header_set_title(newsfeed_item_digest_header_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * newsfeed_item_digest_header_get_title(newsfeed_item_digest_header_t *object){
	return object->title_;
}

static void newsfeed_item_digest_header_set_subtitle(newsfeed_item_digest_header_t *object, const char * value){
	object->subtitle_ = strdup(value);
}

static const char * newsfeed_item_digest_header_get_subtitle(newsfeed_item_digest_header_t *object){
	return object->subtitle_;
}

static void newsfeed_item_digest_header_set_style(newsfeed_item_digest_header_t *object, const char * value){
	object->style_ = strdup(value);
}

static const char * newsfeed_item_digest_header_get_style(newsfeed_item_digest_header_t *object){
	return object->style_;
}

static void newsfeed_item_digest_header_set_button(newsfeed_item_digest_header_t *object, newsfeed_item_digest_button_t value){
	object->button_ = value;
}

static newsfeed_item_digest_button_t newsfeed_item_digest_header_get_button(newsfeed_item_digest_header_t *object){
	return object->button_;
}

static void newsfeed_item_friend_friends_set_count(newsfeed_item_friend_friends_t *object, int value){
	object->count_ = value;
}

static int newsfeed_item_friend_friends_get_count(newsfeed_item_friend_friends_t *object){
	return object->count_;
}

static void newsfeed_item_friend_friends_set_items(newsfeed_item_friend_friends_t *object, base_user_id * value, int len){
int i;
	object->items_ = malloc(len * sizeof(base_user_id) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static base_user_id * newsfeed_item_friend_friends_get_items(newsfeed_item_friend_friends_t *object){
	return object->items_;
}

static void newsfeed_item_holiday_recommendations_block_header_set_title(newsfeed_item_holiday_recommendations_block_header_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * newsfeed_item_holiday_recommendations_block_header_get_title(newsfeed_item_holiday_recommendations_block_header_t *object){
	return object->title_;
}

static void newsfeed_item_holiday_recommendations_block_header_set_subtitle(newsfeed_item_holiday_recommendations_block_header_t *object, const char * value){
	object->subtitle_ = strdup(value);
}

static const char * newsfeed_item_holiday_recommendations_block_header_get_subtitle(newsfeed_item_holiday_recommendations_block_header_t *object){
	return object->subtitle_;
}

static void newsfeed_item_holiday_recommendations_block_header_set_image(newsfeed_item_holiday_recommendations_block_header_t *object, base_image * value, int len){
int i;
	object->image_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->image[i] = value[i];
	}
	//NULL-terminate array
	object->image[i] = NULL;
}

static base_image * newsfeed_item_holiday_recommendations_block_header_get_image(newsfeed_item_holiday_recommendations_block_header_t *object){
	return object->image_;
}

static void newsfeed_item_holiday_recommendations_block_header_set_action(newsfeed_item_holiday_recommendations_block_header_t *object, base_link_button_action_t value){
	object->action_ = value;
}

static base_link_button_action_t newsfeed_item_holiday_recommendations_block_header_get_action(newsfeed_item_holiday_recommendations_block_header_t *object){
	return object->action_;
}

static void newsfeed_item_photo_photos_set_count(newsfeed_item_photo_photos_t *object, int value){
	object->count_ = value;
}

static int newsfeed_item_photo_photos_get_count(newsfeed_item_photo_photos_t *object){
	return object->count_;
}

static void newsfeed_item_photo_photos_set_items(newsfeed_item_photo_photos_t *object, newsfeed_newsfeed_photo * value, int len){
int i;
	object->items_ = malloc(len * sizeof(newsfeed_newsfeed_photo) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static newsfeed_newsfeed_photo * newsfeed_item_photo_photos_get_items(newsfeed_item_photo_photos_t *object){
	return object->items_;
}

static void newsfeed_item_photo_tag_photo_tags_set_count(newsfeed_item_photo_tag_photo_tags_t *object, int value){
	object->count_ = value;
}

static int newsfeed_item_photo_tag_photo_tags_get_count(newsfeed_item_photo_tag_photo_tags_t *object){
	return object->count_;
}

static void newsfeed_item_photo_tag_photo_tags_set_items(newsfeed_item_photo_tag_photo_tags_t *object, newsfeed_newsfeed_photo * value, int len){
int i;
	object->items_ = malloc(len * sizeof(newsfeed_newsfeed_photo) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static newsfeed_newsfeed_photo * newsfeed_item_photo_tag_photo_tags_get_items(newsfeed_item_photo_tag_photo_tags_t *object){
	return object->items_;
}

static void newsfeed_item_promo_button_action_set_url(newsfeed_item_promo_button_action_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * newsfeed_item_promo_button_action_get_url(newsfeed_item_promo_button_action_t *object){
	return object->url_;
}

static void newsfeed_item_promo_button_action_set_type(newsfeed_item_promo_button_action_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * newsfeed_item_promo_button_action_get_type(newsfeed_item_promo_button_action_t *object){
	return object->type_;
}

static void newsfeed_item_promo_button_action_set_target(newsfeed_item_promo_button_action_t *object, const char * value){
	object->target_ = strdup(value);
}

static const char * newsfeed_item_promo_button_action_get_target(newsfeed_item_promo_button_action_t *object){
	return object->target_;
}

static void newsfeed_item_promo_button_image_set_width(newsfeed_item_promo_button_image_t *object, int value){
	object->width_ = value;
}

static int newsfeed_item_promo_button_image_get_width(newsfeed_item_promo_button_image_t *object){
	return object->width_;
}

static void newsfeed_item_promo_button_image_set_height(newsfeed_item_promo_button_image_t *object, int value){
	object->height_ = value;
}

static int newsfeed_item_promo_button_image_get_height(newsfeed_item_promo_button_image_t *object){
	return object->height_;
}

static void newsfeed_item_promo_button_image_set_url(newsfeed_item_promo_button_image_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * newsfeed_item_promo_button_image_get_url(newsfeed_item_promo_button_image_t *object){
	return object->url_;
}

static void newsfeed_item_video_video_set_count(newsfeed_item_video_video_t *object, int value){
	object->count_ = value;
}

static int newsfeed_item_video_video_get_count(newsfeed_item_video_video_t *object){
	return object->count_;
}

static void newsfeed_item_video_video_set_items(newsfeed_item_video_video_t *object, video_video * value, int len){
int i;
	object->items_ = malloc(len * sizeof(video_video) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static video_video * newsfeed_item_video_video_get_items(newsfeed_item_video_video_t *object){
	return object->items_;
}

static void newsfeed_item_wallpost_feedback_set_type(newsfeed_item_wallpost_feedback_t *object, newsfeed_item_wallpost_feedback_type_t value){
	object->type_ = value;
}

static newsfeed_item_wallpost_feedback_type_t newsfeed_item_wallpost_feedback_get_type(newsfeed_item_wallpost_feedback_t *object){
	return object->type_;
}

static void newsfeed_item_wallpost_feedback_set_question(newsfeed_item_wallpost_feedback_t *object, const char * value){
	object->question_ = strdup(value);
}

static const char * newsfeed_item_wallpost_feedback_get_question(newsfeed_item_wallpost_feedback_t *object){
	return object->question_;
}

static void newsfeed_item_wallpost_feedback_set_answers(newsfeed_item_wallpost_feedback_t *object, newsfeed_item_wallpost_feedback_answer * value, int len){
int i;
	object->answers_ = malloc(len * sizeof(newsfeed_item_wallpost_feedback_answer) + 8);
	for(i=0;i<len);++i){
		object->answers[i] = value[i];
	}
	//NULL-terminate array
	object->answers[i] = NULL;
}

static newsfeed_item_wallpost_feedback_answer * newsfeed_item_wallpost_feedback_get_answers(newsfeed_item_wallpost_feedback_t *object){
	return object->answers_;
}

static void newsfeed_item_wallpost_feedback_set_stars_count(newsfeed_item_wallpost_feedback_t *object, int value){
	object->stars_count_ = value;
}

static int newsfeed_item_wallpost_feedback_get_stars_count(newsfeed_item_wallpost_feedback_t *object){
	return object->stars_count_;
}

static void newsfeed_item_wallpost_feedback_set_gratitude(newsfeed_item_wallpost_feedback_t *object, const char * value){
	object->gratitude_ = strdup(value);
}

static const char * newsfeed_item_wallpost_feedback_get_gratitude(newsfeed_item_wallpost_feedback_t *object){
	return object->gratitude_;
}

static void newsfeed_item_wallpost_feedback_answer_set_title(newsfeed_item_wallpost_feedback_answer_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * newsfeed_item_wallpost_feedback_answer_get_title(newsfeed_item_wallpost_feedback_answer_t *object){
	return object->title_;
}

static void newsfeed_item_wallpost_feedback_answer_set_id(newsfeed_item_wallpost_feedback_answer_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * newsfeed_item_wallpost_feedback_answer_get_id(newsfeed_item_wallpost_feedback_answer_t *object){
	return object->id_;
}

static void newsfeed_list_set_id(newsfeed_list_t *object, int value){
	object->id_ = value;
}

static int newsfeed_list_get_id(newsfeed_list_t *object){
	return object->id_;
}

static void newsfeed_list_set_title(newsfeed_list_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * newsfeed_list_get_title(newsfeed_list_t *object){
	return object->title_;
}

static void base_city_set_id(base_city_t *object, int value){
	object->id_ = value;
}

static int base_city_get_id(base_city_t *object){
	return object->id_;
}

static void base_city_set_title(base_city_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * base_city_get_title(base_city_t *object){
	return object->title_;
}

static void base_comments_info_set_can_post(base_comments_info_t *object, base_bool_int_t value){
	object->can_post_ = value;
}

static base_bool_int_t base_comments_info_get_can_post(base_comments_info_t *object){
	return object->can_post_;
}

static void base_comments_info_set_can_open(base_comments_info_t *object, base_bool_int_t value){
	object->can_open_ = value;
}

static base_bool_int_t base_comments_info_get_can_open(base_comments_info_t *object){
	return object->can_open_;
}

static void base_comments_info_set_can_close(base_comments_info_t *object, base_bool_int_t value){
	object->can_close_ = value;
}

static base_bool_int_t base_comments_info_get_can_close(base_comments_info_t *object){
	return object->can_close_;
}

static void base_comments_info_set_count(base_comments_info_t *object, int value){
	object->count_ = value;
}

static int base_comments_info_get_count(base_comments_info_t *object){
	return object->count_;
}

static void base_comments_info_set_groups_can_post(base_comments_info_t *object, bool value){
	object->groups_can_post_ = value;
}

static bool base_comments_info_get_groups_can_post(base_comments_info_t *object){
	return object->groups_can_post_;
}

static void base_comments_info_set_donut(base_comments_info_t *object, wall_wallpost_comments_donut_t value){
	object->donut_ = value;
}

static wall_wallpost_comments_donut_t base_comments_info_get_donut(base_comments_info_t *object){
	return object->donut_;
}

static void base_country_set_id(base_country_t *object, int value){
	object->id_ = value;
}

static int base_country_get_id(base_country_t *object){
	return object->id_;
}

static void base_country_set_title(base_country_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * base_country_get_title(base_country_t *object){
	return object->title_;
}

static void base_crop_photo_set_photo(base_crop_photo_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t base_crop_photo_get_photo(base_crop_photo_t *object){
	return object->photo_;
}

static void base_crop_photo_set_crop(base_crop_photo_t *object, base_crop_photo_crop_t value){
	object->crop_ = value;
}

static base_crop_photo_crop_t base_crop_photo_get_crop(base_crop_photo_t *object){
	return object->crop_;
}

static void base_crop_photo_set_rect(base_crop_photo_t *object, base_crop_photo_rect_t value){
	object->rect_ = value;
}

static base_crop_photo_rect_t base_crop_photo_get_rect(base_crop_photo_t *object){
	return object->rect_;
}

static void base_error_set_error_code(base_error_t *object, int value){
	object->error_code_ = value;
}

static int base_error_get_error_code(base_error_t *object){
	return object->error_code_;
}

static void base_error_set_error_subcode(base_error_t *object, int value){
	object->error_subcode_ = value;
}

static int base_error_get_error_subcode(base_error_t *object){
	return object->error_subcode_;
}

static void base_error_set_error_msg(base_error_t *object, const char * value){
	object->error_msg_ = strdup(value);
}

static const char * base_error_get_error_msg(base_error_t *object){
	return object->error_msg_;
}

static void base_error_set_error_text(base_error_t *object, const char * value){
	object->error_text_ = strdup(value);
}

static const char * base_error_get_error_text(base_error_t *object){
	return object->error_text_;
}

static void base_error_set_request_params(base_error_t *object, base_request_param * value, int len){
int i;
	object->request_params_ = malloc(len * sizeof(base_request_param) + 8);
	for(i=0;i<len);++i){
		object->request_params[i] = value[i];
	}
	//NULL-terminate array
	object->request_params[i] = NULL;
}

static base_request_param * base_error_get_request_params(base_error_t *object){
	return object->request_params_;
}

static void base_geo_set_coordinates(base_geo_t *object, base_geo_coordinates_t value){
	object->coordinates_ = value;
}

static base_geo_coordinates_t base_geo_get_coordinates(base_geo_t *object){
	return object->coordinates_;
}

static void base_geo_set_place(base_geo_t *object, base_place_t value){
	object->place_ = value;
}

static base_place_t base_geo_get_place(base_geo_t *object){
	return object->place_;
}

static void base_geo_set_showmap(base_geo_t *object, int value){
	object->showmap_ = value;
}

static int base_geo_get_showmap(base_geo_t *object){
	return object->showmap_;
}

static void base_geo_set_type(base_geo_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * base_geo_get_type(base_geo_t *object){
	return object->type_;
}

static void base_gradient_point_set_color(base_gradient_point_t *object, const char * value){
	object->color_ = strdup(value);
}

static const char * base_gradient_point_get_color(base_gradient_point_t *object){
	return object->color_;
}

static void base_image_set_id(base_image_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * base_image_get_id(base_image_t *object){
	return object->id_;
}

static void base_image_set_url(base_image_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * base_image_get_url(base_image_t *object){
	return object->url_;
}

static void base_image_set_width(base_image_t *object, int value){
	object->width_ = value;
}

static int base_image_get_width(base_image_t *object){
	return object->width_;
}

static void base_image_set_height(base_image_t *object, int value){
	object->height_ = value;
}

static int base_image_get_height(base_image_t *object){
	return object->height_;
}

static void base_likes_set_count(base_likes_t *object, int value){
	object->count_ = value;
}

static int base_likes_get_count(base_likes_t *object){
	return object->count_;
}

static void base_likes_set_user_likes(base_likes_t *object, base_bool_int_t value){
	object->user_likes_ = value;
}

static base_bool_int_t base_likes_get_user_likes(base_likes_t *object){
	return object->user_likes_;
}

static void base_likes_info_set_can_like(base_likes_info_t *object, base_bool_int_t value){
	object->can_like_ = value;
}

static base_bool_int_t base_likes_info_get_can_like(base_likes_info_t *object){
	return object->can_like_;
}

static void base_likes_info_set_can_publish(base_likes_info_t *object, base_bool_int_t value){
	object->can_publish_ = value;
}

static base_bool_int_t base_likes_info_get_can_publish(base_likes_info_t *object){
	return object->can_publish_;
}

static void base_likes_info_set_count(base_likes_info_t *object, int value){
	object->count_ = value;
}

static int base_likes_info_get_count(base_likes_info_t *object){
	return object->count_;
}

static void base_likes_info_set_user_likes(base_likes_info_t *object, int value){
	object->user_likes_ = value;
}

static int base_likes_info_get_user_likes(base_likes_info_t *object){
	return object->user_likes_;
}

static void base_link_set_application(base_link_t *object, base_link_application_t value){
	object->application_ = value;
}

static base_link_application_t base_link_get_application(base_link_t *object){
	return object->application_;
}

static void base_link_set_button(base_link_t *object, base_link_button_t value){
	object->button_ = value;
}

static base_link_button_t base_link_get_button(base_link_t *object){
	return object->button_;
}

static void base_link_set_caption(base_link_t *object, const char * value){
	object->caption_ = strdup(value);
}

static const char * base_link_get_caption(base_link_t *object){
	return object->caption_;
}

static void base_link_set_description(base_link_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * base_link_get_description(base_link_t *object){
	return object->description_;
}

static void base_link_set_id(base_link_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * base_link_get_id(base_link_t *object){
	return object->id_;
}

static void base_link_set_is_favorite(base_link_t *object, bool value){
	object->is_favorite_ = value;
}

static bool base_link_get_is_favorite(base_link_t *object){
	return object->is_favorite_;
}

static void base_link_set_photo(base_link_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t base_link_get_photo(base_link_t *object){
	return object->photo_;
}

static void base_link_set_preview_page(base_link_t *object, const char * value){
	object->preview_page_ = strdup(value);
}

static const char * base_link_get_preview_page(base_link_t *object){
	return object->preview_page_;
}

static void base_link_set_preview_url(base_link_t *object, const char * value){
	object->preview_url_ = strdup(value);
}

static const char * base_link_get_preview_url(base_link_t *object){
	return object->preview_url_;
}

static void base_link_set_product(base_link_t *object, base_link_product_t value){
	object->product_ = value;
}

static base_link_product_t base_link_get_product(base_link_t *object){
	return object->product_;
}

static void base_link_set_rating(base_link_t *object, base_link_rating_t value){
	object->rating_ = value;
}

static base_link_rating_t base_link_get_rating(base_link_t *object){
	return object->rating_;
}

static void base_link_set_title(base_link_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * base_link_get_title(base_link_t *object){
	return object->title_;
}

static void base_link_set_url(base_link_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * base_link_get_url(base_link_t *object){
	return object->url_;
}

static void base_link_set_target_object(base_link_t *object, link_target_object_t value){
	object->target_object_ = value;
}

static link_target_object_t base_link_get_target_object(base_link_t *object){
	return object->target_object_;
}

static void base_link_set_is_external(base_link_t *object, bool value){
	object->is_external_ = value;
}

static bool base_link_get_is_external(base_link_t *object){
	return object->is_external_;
}

static void base_link_set_video(base_link_t *object, video_video_t value){
	object->video_ = value;
}

static video_video_t base_link_get_video(base_link_t *object){
	return object->video_;
}

static void base_link_application_set_store(base_link_application_t *object, base_link_application_store_t value){
	object->store_ = value;
}

static base_link_application_store_t base_link_application_get_store(base_link_application_t *object){
	return object->store_;
}

static void base_link_application_store_set_name(base_link_application_store_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * base_link_application_store_get_name(base_link_application_store_t *object){
	return object->name_;
}

static void base_link_button_set_action(base_link_button_t *object, base_link_button_action_t value){
	object->action_ = value;
}

static base_link_button_action_t base_link_button_get_action(base_link_button_t *object){
	return object->action_;
}

static void base_link_button_set_title(base_link_button_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * base_link_button_get_title(base_link_button_t *object){
	return object->title_;
}

static void base_link_button_set_block_id(base_link_button_t *object, const char * value){
	object->block_id_ = strdup(value);
}

static const char * base_link_button_get_block_id(base_link_button_t *object){
	return object->block_id_;
}

static void base_link_button_set_section_id(base_link_button_t *object, const char * value){
	object->section_id_ = strdup(value);
}

static const char * base_link_button_get_section_id(base_link_button_t *object){
	return object->section_id_;
}

static void base_link_button_set_curator_id(base_link_button_t *object, int value){
	object->curator_id_ = value;
}

static int base_link_button_get_curator_id(base_link_button_t *object){
	return object->curator_id_;
}

static void base_link_button_set_album_id(base_link_button_t *object, int value){
	object->album_id_ = value;
}

static int base_link_button_get_album_id(base_link_button_t *object){
	return object->album_id_;
}

static void base_link_button_set_owner_id(base_link_button_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 base_link_button_get_owner_id(base_link_button_t *object){
	return object->owner_id_;
}

static void base_link_button_set_icon(base_link_button_t *object, const char * value){
	object->icon_ = strdup(value);
}

static const char * base_link_button_get_icon(base_link_button_t *object){
	return object->icon_;
}

static void base_link_button_set_style(base_link_button_t *object, base_link_button_style_t value){
	object->style_ = value;
}

static base_link_button_style_t base_link_button_get_style(base_link_button_t *object){
	return object->style_;
}

static void base_link_button_action_set_type(base_link_button_action_t *object, base_link_button_action_type_t value){
	object->type_ = value;
}

static base_link_button_action_type_t base_link_button_action_get_type(base_link_button_action_t *object){
	return object->type_;
}

static void base_link_button_action_set_url(base_link_button_action_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * base_link_button_action_get_url(base_link_button_action_t *object){
	return object->url_;
}

static void base_link_button_action_set_consume_reason(base_link_button_action_t *object, const char * value){
	object->consume_reason_ = strdup(value);
}

static const char * base_link_button_action_get_consume_reason(base_link_button_action_t *object){
	return object->consume_reason_;
}

static void base_link_product_set_price(base_link_product_t *object, market_price_t value){
	object->price_ = value;
}

static market_price_t base_link_product_get_price(base_link_product_t *object){
	return object->price_;
}

static void base_link_product_set_merchant(base_link_product_t *object, const char * value){
	object->merchant_ = strdup(value);
}

static const char * base_link_product_get_merchant(base_link_product_t *object){
	return object->merchant_;
}

static void base_link_product_set_orders_count(base_link_product_t *object, int value){
	object->orders_count_ = value;
}

static int base_link_product_get_orders_count(base_link_product_t *object){
	return object->orders_count_;
}

static void base_link_rating_set_reviews_count(base_link_rating_t *object, int value){
	object->reviews_count_ = value;
}

static int base_link_rating_get_reviews_count(base_link_rating_t *object){
	return object->reviews_count_;
}

static void base_message_error_set_code(base_message_error_t *object, int value){
	object->code_ = value;
}

static int base_message_error_get_code(base_message_error_t *object){
	return object->code_;
}

static void base_message_error_set_description(base_message_error_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * base_message_error_get_description(base_message_error_t *object){
	return object->description_;
}

static void base_object_set_id(base_object_t *object, int value){
	object->id_ = value;
}

static int base_object_get_id(base_object_t *object){
	return object->id_;
}

static void base_object_set_title(base_object_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * base_object_get_title(base_object_t *object){
	return object->title_;
}

static void base_object_count_set_count(base_object_count_t *object, int value){
	object->count_ = value;
}

static int base_object_count_get_count(base_object_count_t *object){
	return object->count_;
}

static void base_object_with_name_set_id(base_object_with_name_t *object, int value){
	object->id_ = value;
}

static int base_object_with_name_get_id(base_object_with_name_t *object){
	return object->id_;
}

static void base_object_with_name_set_name(base_object_with_name_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * base_object_with_name_get_name(base_object_with_name_t *object){
	return object->name_;
}

static void base_place_set_address(base_place_t *object, const char * value){
	object->address_ = strdup(value);
}

static const char * base_place_get_address(base_place_t *object){
	return object->address_;
}

static void base_place_set_checkins(base_place_t *object, int value){
	object->checkins_ = value;
}

static int base_place_get_checkins(base_place_t *object){
	return object->checkins_;
}

static void base_place_set_city(base_place_t *object, const char * value){
	object->city_ = strdup(value);
}

static const char * base_place_get_city(base_place_t *object){
	return object->city_;
}

static void base_place_set_country(base_place_t *object, const char * value){
	object->country_ = strdup(value);
}

static const char * base_place_get_country(base_place_t *object){
	return object->country_;
}

static void base_place_set_created(base_place_t *object, int value){
	object->created_ = value;
}

static int base_place_get_created(base_place_t *object){
	return object->created_;
}

static void base_place_set_icon(base_place_t *object, const char * value){
	object->icon_ = strdup(value);
}

static const char * base_place_get_icon(base_place_t *object){
	return object->icon_;
}

static void base_place_set_id(base_place_t *object, int value){
	object->id_ = value;
}

static int base_place_get_id(base_place_t *object){
	return object->id_;
}

static void base_place_set_title(base_place_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * base_place_get_title(base_place_t *object){
	return object->title_;
}

static void base_place_set_type(base_place_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * base_place_get_type(base_place_t *object){
	return object->type_;
}

static void base_reposts_info_set_count(base_reposts_info_t *object, int value){
	object->count_ = value;
}

static int base_reposts_info_get_count(base_reposts_info_t *object){
	return object->count_;
}

static void base_reposts_info_set_wall_count(base_reposts_info_t *object, int value){
	object->wall_count_ = value;
}

static int base_reposts_info_get_wall_count(base_reposts_info_t *object){
	return object->wall_count_;
}

static void base_reposts_info_set_mail_count(base_reposts_info_t *object, int value){
	object->mail_count_ = value;
}

static int base_reposts_info_get_mail_count(base_reposts_info_t *object){
	return object->mail_count_;
}

static void base_reposts_info_set_user_reposted(base_reposts_info_t *object, int value){
	object->user_reposted_ = value;
}

static int base_reposts_info_get_user_reposted(base_reposts_info_t *object){
	return object->user_reposted_;
}

static void base_request_param_set_key(base_request_param_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * base_request_param_get_key(base_request_param_t *object){
	return object->key_;
}

static void base_request_param_set_value(base_request_param_t *object, const char * value){
	object->value_ = strdup(value);
}

static const char * base_request_param_get_value(base_request_param_t *object){
	return object->value_;
}

static void base_sticker_animation_set_type(base_sticker_animation_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * base_sticker_animation_get_type(base_sticker_animation_t *object){
	return object->type_;
}

static void base_sticker_animation_set_url(base_sticker_animation_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * base_sticker_animation_get_url(base_sticker_animation_t *object){
	return object->url_;
}

static void base_sticker_new_set_sticker_id(base_sticker_new_t *object, int value){
	object->sticker_id_ = value;
}

static int base_sticker_new_get_sticker_id(base_sticker_new_t *object){
	return object->sticker_id_;
}

static void base_sticker_new_set_product_id(base_sticker_new_t *object, int value){
	object->product_id_ = value;
}

static int base_sticker_new_get_product_id(base_sticker_new_t *object){
	return object->product_id_;
}

static void base_sticker_new_set_images(base_sticker_new_t *object, base_image * value, int len){
int i;
	object->images_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->images[i] = value[i];
	}
	//NULL-terminate array
	object->images[i] = NULL;
}

static base_image * base_sticker_new_get_images(base_sticker_new_t *object){
	return object->images_;
}

static void base_sticker_new_set_images_with_background(base_sticker_new_t *object, base_image * value, int len){
int i;
	object->images_with_background_ = malloc(len * sizeof(base_image) + 8);
	for(i=0;i<len);++i){
		object->images_with_background[i] = value[i];
	}
	//NULL-terminate array
	object->images_with_background[i] = NULL;
}

static base_image * base_sticker_new_get_images_with_background(base_sticker_new_t *object){
	return object->images_with_background_;
}

static void base_sticker_new_set_animation_url(base_sticker_new_t *object, const char * value){
	object->animation_url_ = strdup(value);
}

static const char * base_sticker_new_get_animation_url(base_sticker_new_t *object){
	return object->animation_url_;
}

static void base_sticker_new_set_animations(base_sticker_new_t *object, base_sticker_animation * value, int len){
int i;
	object->animations_ = malloc(len * sizeof(base_sticker_animation) + 8);
	for(i=0;i<len);++i){
		object->animations[i] = value[i];
	}
	//NULL-terminate array
	object->animations[i] = NULL;
}

static base_sticker_animation * base_sticker_new_get_animations(base_sticker_new_t *object){
	return object->animations_;
}

static void base_sticker_new_set_is_allowed(base_sticker_new_t *object, bool value){
	object->is_allowed_ = value;
}

static bool base_sticker_new_get_is_allowed(base_sticker_new_t *object){
	return object->is_allowed_;
}

static void base_sticker_old_set_id(base_sticker_old_t *object, int value){
	object->id_ = value;
}

static int base_sticker_old_get_id(base_sticker_old_t *object){
	return object->id_;
}

static void base_sticker_old_set_product_id(base_sticker_old_t *object, int value){
	object->product_id_ = value;
}

static int base_sticker_old_get_product_id(base_sticker_old_t *object){
	return object->product_id_;
}

static void base_sticker_old_set_width(base_sticker_old_t *object, int value){
	object->width_ = value;
}

static int base_sticker_old_get_width(base_sticker_old_t *object){
	return object->width_;
}

static void base_sticker_old_set_height(base_sticker_old_t *object, int value){
	object->height_ = value;
}

static int base_sticker_old_get_height(base_sticker_old_t *object){
	return object->height_;
}

static void base_sticker_old_set_photo_128(base_sticker_old_t *object, const char * value){
	object->photo_128_ = strdup(value);
}

static const char * base_sticker_old_get_photo_128(base_sticker_old_t *object){
	return object->photo_128_;
}

static void base_sticker_old_set_photo_256(base_sticker_old_t *object, const char * value){
	object->photo_256_ = strdup(value);
}

static const char * base_sticker_old_get_photo_256(base_sticker_old_t *object){
	return object->photo_256_;
}

static void base_sticker_old_set_photo_352(base_sticker_old_t *object, const char * value){
	object->photo_352_ = strdup(value);
}

static const char * base_sticker_old_get_photo_352(base_sticker_old_t *object){
	return object->photo_352_;
}

static void base_sticker_old_set_photo_512(base_sticker_old_t *object, const char * value){
	object->photo_512_ = strdup(value);
}

static const char * base_sticker_old_get_photo_512(base_sticker_old_t *object){
	return object->photo_512_;
}

static void base_sticker_old_set_photo_64(base_sticker_old_t *object, const char * value){
	object->photo_64_ = strdup(value);
}

static const char * base_sticker_old_get_photo_64(base_sticker_old_t *object){
	return object->photo_64_;
}

static void base_sticker_old_set_is_allowed(base_sticker_old_t *object, bool value){
	object->is_allowed_ = value;
}

static bool base_sticker_old_get_is_allowed(base_sticker_old_t *object){
	return object->is_allowed_;
}

static void base_upload_server_set_upload_url(base_upload_server_t *object, const char * value){
	object->upload_url_ = strdup(value);
}

static const char * base_upload_server_get_upload_url(base_upload_server_t *object){
	return object->upload_url_;
}

static void base_user_id_set_user_id(base_user_id_t *object, int64 value){
	object->user_id_ = value;
}

static int64 base_user_id_get_user_id(base_user_id_t *object){
	return object->user_id_;
}

static void stickers_image_set_set_base_url(stickers_image_set_t *object, const char * value){
	object->base_url_ = strdup(value);
}

static const char * stickers_image_set_get_base_url(stickers_image_set_t *object){
	return object->base_url_;
}

static void stickers_image_set_set_version(stickers_image_set_t *object, int value){
	object->version_ = value;
}

static int stickers_image_set_get_version(stickers_image_set_t *object){
	return object->version_;
}

static void wall_app_post_set_id(wall_app_post_t *object, int value){
	object->id_ = value;
}

static int wall_app_post_get_id(wall_app_post_t *object){
	return object->id_;
}

static void wall_app_post_set_name(wall_app_post_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * wall_app_post_get_name(wall_app_post_t *object){
	return object->name_;
}

static void wall_app_post_set_photo_130(wall_app_post_t *object, const char * value){
	object->photo_130_ = strdup(value);
}

static const char * wall_app_post_get_photo_130(wall_app_post_t *object){
	return object->photo_130_;
}

static void wall_app_post_set_photo_604(wall_app_post_t *object, const char * value){
	object->photo_604_ = strdup(value);
}

static const char * wall_app_post_get_photo_604(wall_app_post_t *object){
	return object->photo_604_;
}

static void wall_attached_note_set_comments(wall_attached_note_t *object, int value){
	object->comments_ = value;
}

static int wall_attached_note_get_comments(wall_attached_note_t *object){
	return object->comments_;
}

static void wall_attached_note_set_date(wall_attached_note_t *object, int value){
	object->date_ = value;
}

static int wall_attached_note_get_date(wall_attached_note_t *object){
	return object->date_;
}

static void wall_attached_note_set_id(wall_attached_note_t *object, int value){
	object->id_ = value;
}

static int wall_attached_note_get_id(wall_attached_note_t *object){
	return object->id_;
}

static void wall_attached_note_set_owner_id(wall_attached_note_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 wall_attached_note_get_owner_id(wall_attached_note_t *object){
	return object->owner_id_;
}

static void wall_attached_note_set_read_comments(wall_attached_note_t *object, int value){
	object->read_comments_ = value;
}

static int wall_attached_note_get_read_comments(wall_attached_note_t *object){
	return object->read_comments_;
}

static void wall_attached_note_set_title(wall_attached_note_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * wall_attached_note_get_title(wall_attached_note_t *object){
	return object->title_;
}

static void wall_attached_note_set_text(wall_attached_note_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_attached_note_get_text(wall_attached_note_t *object){
	return object->text_;
}

static void wall_attached_note_set_privacy_view(wall_attached_note_t *object, char * * value, int len){
int i;
	object->privacy_view_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->privacy_view[i] = value[i];
	}
	//NULL-terminate array
	object->privacy_view[i] = NULL;
}

static char * * wall_attached_note_get_privacy_view(wall_attached_note_t *object){
	return object->privacy_view_;
}

static void wall_attached_note_set_privacy_comment(wall_attached_note_t *object, char * * value, int len){
int i;
	object->privacy_comment_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->privacy_comment[i] = value[i];
	}
	//NULL-terminate array
	object->privacy_comment[i] = NULL;
}

static char * * wall_attached_note_get_privacy_comment(wall_attached_note_t *object){
	return object->privacy_comment_;
}

static void wall_attached_note_set_can_comment(wall_attached_note_t *object, int value){
	object->can_comment_ = value;
}

static int wall_attached_note_get_can_comment(wall_attached_note_t *object){
	return object->can_comment_;
}

static void wall_attached_note_set_text_wiki(wall_attached_note_t *object, const char * value){
	object->text_wiki_ = strdup(value);
}

static const char * wall_attached_note_get_text_wiki(wall_attached_note_t *object){
	return object->text_wiki_;
}

static void wall_attached_note_set_view_url(wall_attached_note_t *object, const char * value){
	object->view_url_ = strdup(value);
}

static const char * wall_attached_note_get_view_url(wall_attached_note_t *object){
	return object->view_url_;
}

static void wall_carousel_base_set_carousel_offset(wall_carousel_base_t *object, int value){
	object->carousel_offset_ = value;
}

static int wall_carousel_base_get_carousel_offset(wall_carousel_base_t *object){
	return object->carousel_offset_;
}

static void wall_comment_attachment_set_audio(wall_comment_attachment_t *object, audio_audio_t value){
	object->audio_ = value;
}

static audio_audio_t wall_comment_attachment_get_audio(wall_comment_attachment_t *object){
	return object->audio_;
}

static void wall_comment_attachment_set_doc(wall_comment_attachment_t *object, docs_doc_t value){
	object->doc_ = value;
}

static docs_doc_t wall_comment_attachment_get_doc(wall_comment_attachment_t *object){
	return object->doc_;
}

static void wall_comment_attachment_set_link(wall_comment_attachment_t *object, base_link_t value){
	object->link_ = value;
}

static base_link_t wall_comment_attachment_get_link(wall_comment_attachment_t *object){
	return object->link_;
}

static void wall_comment_attachment_set_market(wall_comment_attachment_t *object, market_market_item_t value){
	object->market_ = value;
}

static market_market_item_t wall_comment_attachment_get_market(wall_comment_attachment_t *object){
	return object->market_;
}

static void wall_comment_attachment_set_market_market_album(wall_comment_attachment_t *object, market_market_album_t value){
	object->market_market_album_ = value;
}

static market_market_album_t wall_comment_attachment_get_market_market_album(wall_comment_attachment_t *object){
	return object->market_market_album_;
}

static void wall_comment_attachment_set_note(wall_comment_attachment_t *object, wall_attached_note_t value){
	object->note_ = value;
}

static wall_attached_note_t wall_comment_attachment_get_note(wall_comment_attachment_t *object){
	return object->note_;
}

static void wall_comment_attachment_set_page(wall_comment_attachment_t *object, pages_wikipage_full_t value){
	object->page_ = value;
}

static pages_wikipage_full_t wall_comment_attachment_get_page(wall_comment_attachment_t *object){
	return object->page_;
}

static void wall_comment_attachment_set_photo(wall_comment_attachment_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t wall_comment_attachment_get_photo(wall_comment_attachment_t *object){
	return object->photo_;
}

static void wall_comment_attachment_set_sticker(wall_comment_attachment_t *object, base_sticker_t value){
	object->sticker_ = value;
}

static base_sticker_t wall_comment_attachment_get_sticker(wall_comment_attachment_t *object){
	return object->sticker_;
}

static void wall_comment_attachment_set_type(wall_comment_attachment_t *object, wall_comment_attachment_type_t value){
	object->type_ = value;
}

static wall_comment_attachment_type_t wall_comment_attachment_get_type(wall_comment_attachment_t *object){
	return object->type_;
}

static void wall_comment_attachment_set_video(wall_comment_attachment_t *object, video_video_t value){
	object->video_ = value;
}

static video_video_t wall_comment_attachment_get_video(wall_comment_attachment_t *object){
	return object->video_;
}

static void wall_geo_set_coordinates(wall_geo_t *object, const char * value){
	object->coordinates_ = strdup(value);
}

static const char * wall_geo_get_coordinates(wall_geo_t *object){
	return object->coordinates_;
}

static void wall_geo_set_place(wall_geo_t *object, base_place_t value){
	object->place_ = value;
}

static base_place_t wall_geo_get_place(wall_geo_t *object){
	return object->place_;
}

static void wall_geo_set_showmap(wall_geo_t *object, int value){
	object->showmap_ = value;
}

static int wall_geo_get_showmap(wall_geo_t *object){
	return object->showmap_;
}

static void wall_geo_set_type(wall_geo_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * wall_geo_get_type(wall_geo_t *object){
	return object->type_;
}

static void wall_graffiti_set_id(wall_graffiti_t *object, int value){
	object->id_ = value;
}

static int wall_graffiti_get_id(wall_graffiti_t *object){
	return object->id_;
}

static void wall_graffiti_set_owner_id(wall_graffiti_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 wall_graffiti_get_owner_id(wall_graffiti_t *object){
	return object->owner_id_;
}

static void wall_graffiti_set_photo_200(wall_graffiti_t *object, const char * value){
	object->photo_200_ = strdup(value);
}

static const char * wall_graffiti_get_photo_200(wall_graffiti_t *object){
	return object->photo_200_;
}

static void wall_graffiti_set_photo_586(wall_graffiti_t *object, const char * value){
	object->photo_586_ = strdup(value);
}

static const char * wall_graffiti_get_photo_586(wall_graffiti_t *object){
	return object->photo_586_;
}

static void wall_graffiti_set_height(wall_graffiti_t *object, int value){
	object->height_ = value;
}

static int wall_graffiti_get_height(wall_graffiti_t *object){
	return object->height_;
}

static void wall_graffiti_set_url(wall_graffiti_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * wall_graffiti_get_url(wall_graffiti_t *object){
	return object->url_;
}

static void wall_graffiti_set_width(wall_graffiti_t *object, int value){
	object->width_ = value;
}

static int wall_graffiti_get_width(wall_graffiti_t *object){
	return object->width_;
}

static void wall_graffiti_set_access_key(wall_graffiti_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * wall_graffiti_get_access_key(wall_graffiti_t *object){
	return object->access_key_;
}

static void wall_post_copyright_set_id(wall_post_copyright_t *object, int64 value){
	object->id_ = value;
}

static int64 wall_post_copyright_get_id(wall_post_copyright_t *object){
	return object->id_;
}

static void wall_post_copyright_set_link(wall_post_copyright_t *object, const char * value){
	object->link_ = strdup(value);
}

static const char * wall_post_copyright_get_link(wall_post_copyright_t *object){
	return object->link_;
}

static void wall_post_copyright_set_name(wall_post_copyright_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * wall_post_copyright_get_name(wall_post_copyright_t *object){
	return object->name_;
}

static void wall_post_copyright_set_type(wall_post_copyright_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * wall_post_copyright_get_type(wall_post_copyright_t *object){
	return object->type_;
}

static void wall_post_source_set_data(wall_post_source_t *object, const char * value){
	object->data_ = strdup(value);
}

static const char * wall_post_source_get_data(wall_post_source_t *object){
	return object->data_;
}

static void wall_post_source_set_platform(wall_post_source_t *object, const char * value){
	object->platform_ = strdup(value);
}

static const char * wall_post_source_get_platform(wall_post_source_t *object){
	return object->platform_;
}

static void wall_post_source_set_type(wall_post_source_t *object, wall_post_source_type_t value){
	object->type_ = value;
}

static wall_post_source_type_t wall_post_source_get_type(wall_post_source_t *object){
	return object->type_;
}

static void wall_post_source_set_url(wall_post_source_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * wall_post_source_get_url(wall_post_source_t *object){
	return object->url_;
}

static void wall_post_source_set_link(wall_post_source_t *object, base_link_t value){
	object->link_ = value;
}

static base_link_t wall_post_source_get_link(wall_post_source_t *object){
	return object->link_;
}

static void wall_posted_photo_set_id(wall_posted_photo_t *object, int value){
	object->id_ = value;
}

static int wall_posted_photo_get_id(wall_posted_photo_t *object){
	return object->id_;
}

static void wall_posted_photo_set_owner_id(wall_posted_photo_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 wall_posted_photo_get_owner_id(wall_posted_photo_t *object){
	return object->owner_id_;
}

static void wall_posted_photo_set_photo_130(wall_posted_photo_t *object, const char * value){
	object->photo_130_ = strdup(value);
}

static const char * wall_posted_photo_get_photo_130(wall_posted_photo_t *object){
	return object->photo_130_;
}

static void wall_posted_photo_set_photo_604(wall_posted_photo_t *object, const char * value){
	object->photo_604_ = strdup(value);
}

static const char * wall_posted_photo_get_photo_604(wall_posted_photo_t *object){
	return object->photo_604_;
}

static void wall_views_set_count(wall_views_t *object, int value){
	object->count_ = value;
}

static int wall_views_get_count(wall_views_t *object){
	return object->count_;
}

static void wall_wall_comment_set_id(wall_wall_comment_t *object, int value){
	object->id_ = value;
}

static int wall_wall_comment_get_id(wall_wall_comment_t *object){
	return object->id_;
}

static void wall_wall_comment_set_from_id(wall_wall_comment_t *object, int64 value){
	object->from_id_ = value;
}

static int64 wall_wall_comment_get_from_id(wall_wall_comment_t *object){
	return object->from_id_;
}

static void wall_wall_comment_set_can_edit(wall_wall_comment_t *object, base_bool_int_t value){
	object->can_edit_ = value;
}

static base_bool_int_t wall_wall_comment_get_can_edit(wall_wall_comment_t *object){
	return object->can_edit_;
}

static void wall_wall_comment_set_post_id(wall_wall_comment_t *object, int value){
	object->post_id_ = value;
}

static int wall_wall_comment_get_post_id(wall_wall_comment_t *object){
	return object->post_id_;
}

static void wall_wall_comment_set_owner_id(wall_wall_comment_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 wall_wall_comment_get_owner_id(wall_wall_comment_t *object){
	return object->owner_id_;
}

static void wall_wall_comment_set_parents_stack(wall_wall_comment_t *object, int * value, int len){
int i;
	object->parents_stack_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->parents_stack[i] = value[i];
	}
	//NULL-terminate array
	object->parents_stack[i] = NULL;
}

static int * wall_wall_comment_get_parents_stack(wall_wall_comment_t *object){
	return object->parents_stack_;
}

static void wall_wall_comment_set_photo_id(wall_wall_comment_t *object, int value){
	object->photo_id_ = value;
}

static int wall_wall_comment_get_photo_id(wall_wall_comment_t *object){
	return object->photo_id_;
}

static void wall_wall_comment_set_video_id(wall_wall_comment_t *object, int value){
	object->video_id_ = value;
}

static int wall_wall_comment_get_video_id(wall_wall_comment_t *object){
	return object->video_id_;
}

static void wall_wall_comment_set_date(wall_wall_comment_t *object, int value){
	object->date_ = value;
}

static int wall_wall_comment_get_date(wall_wall_comment_t *object){
	return object->date_;
}

static void wall_wall_comment_set_text(wall_wall_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_wall_comment_get_text(wall_wall_comment_t *object){
	return object->text_;
}

static void wall_wall_comment_set_attachments(wall_wall_comment_t *object, wall_comment_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(wall_comment_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static wall_comment_attachment * wall_wall_comment_get_attachments(wall_wall_comment_t *object){
	return object->attachments_;
}

static void wall_wall_comment_set_donut(wall_wall_comment_t *object, wall_wall_comment_donut_t value){
	object->donut_ = value;
}

static wall_wall_comment_donut_t wall_wall_comment_get_donut(wall_wall_comment_t *object){
	return object->donut_;
}

static void wall_wall_comment_set_likes(wall_wall_comment_t *object, base_likes_info_t value){
	object->likes_ = value;
}

static base_likes_info_t wall_wall_comment_get_likes(wall_wall_comment_t *object){
	return object->likes_;
}

static void wall_wall_comment_set_real_offset(wall_wall_comment_t *object, int value){
	object->real_offset_ = value;
}

static int wall_wall_comment_get_real_offset(wall_wall_comment_t *object){
	return object->real_offset_;
}

static void wall_wall_comment_set_reply_to_user(wall_wall_comment_t *object, int64 value){
	object->reply_to_user_ = value;
}

static int64 wall_wall_comment_get_reply_to_user(wall_wall_comment_t *object){
	return object->reply_to_user_;
}

static void wall_wall_comment_set_reply_to_comment(wall_wall_comment_t *object, int value){
	object->reply_to_comment_ = value;
}

static int wall_wall_comment_get_reply_to_comment(wall_wall_comment_t *object){
	return object->reply_to_comment_;
}

static void wall_wall_comment_set_thread(wall_wall_comment_t *object, comment_thread_t value){
	object->thread_ = value;
}

static comment_thread_t wall_wall_comment_get_thread(wall_wall_comment_t *object){
	return object->thread_;
}

static void wall_wall_comment_set_deleted(wall_wall_comment_t *object, bool value){
	object->deleted_ = value;
}

static bool wall_wall_comment_get_deleted(wall_wall_comment_t *object){
	return object->deleted_;
}

static void wall_wall_comment_set_pid(wall_wall_comment_t *object, int value){
	object->pid_ = value;
}

static int wall_wall_comment_get_pid(wall_wall_comment_t *object){
	return object->pid_;
}

static void wall_wall_comment_donut_set_is_don(wall_wall_comment_donut_t *object, bool value){
	object->is_don_ = value;
}

static bool wall_wall_comment_donut_get_is_don(wall_wall_comment_donut_t *object){
	return object->is_don_;
}

static void wall_wall_comment_donut_set_placeholder(wall_wall_comment_donut_t *object, wall_wall_comment_donut_placeholder_t value){
	object->placeholder_ = value;
}

static wall_wall_comment_donut_placeholder_t wall_wall_comment_donut_get_placeholder(wall_wall_comment_donut_t *object){
	return object->placeholder_;
}

static void wall_wall_comment_donut_placeholder_set_text(wall_wall_comment_donut_placeholder_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_wall_comment_donut_placeholder_get_text(wall_wall_comment_donut_placeholder_t *object){
	return object->text_;
}

static void wall_wallpost_set_access_key(wall_wallpost_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * wall_wallpost_get_access_key(wall_wallpost_t *object){
	return object->access_key_;
}

static void wall_wallpost_set_is_deleted(wall_wallpost_t *object, bool value){
	object->is_deleted_ = value;
}

static bool wall_wallpost_get_is_deleted(wall_wallpost_t *object){
	return object->is_deleted_;
}

static void wall_wallpost_set_attachments(wall_wallpost_t *object, wall_wallpost_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(wall_wallpost_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static wall_wallpost_attachment * wall_wallpost_get_attachments(wall_wallpost_t *object){
	return object->attachments_;
}

static void wall_wallpost_set_copyright(wall_wallpost_t *object, wall_post_copyright_t value){
	object->copyright_ = value;
}

static wall_post_copyright_t wall_wallpost_get_copyright(wall_wallpost_t *object){
	return object->copyright_;
}

static void wall_wallpost_set_date(wall_wallpost_t *object, int value){
	object->date_ = value;
}

static int wall_wallpost_get_date(wall_wallpost_t *object){
	return object->date_;
}

static void wall_wallpost_set_edited(wall_wallpost_t *object, int value){
	object->edited_ = value;
}

static int wall_wallpost_get_edited(wall_wallpost_t *object){
	return object->edited_;
}

static void wall_wallpost_set_from_id(wall_wallpost_t *object, int64 value){
	object->from_id_ = value;
}

static int64 wall_wallpost_get_from_id(wall_wallpost_t *object){
	return object->from_id_;
}

static void wall_wallpost_set_geo(wall_wallpost_t *object, wall_geo_t value){
	object->geo_ = value;
}

static wall_geo_t wall_wallpost_get_geo(wall_wallpost_t *object){
	return object->geo_;
}

static void wall_wallpost_set_id(wall_wallpost_t *object, int value){
	object->id_ = value;
}

static int wall_wallpost_get_id(wall_wallpost_t *object){
	return object->id_;
}

static void wall_wallpost_set_is_archived(wall_wallpost_t *object, bool value){
	object->is_archived_ = value;
}

static bool wall_wallpost_get_is_archived(wall_wallpost_t *object){
	return object->is_archived_;
}

static void wall_wallpost_set_is_favorite(wall_wallpost_t *object, bool value){
	object->is_favorite_ = value;
}

static bool wall_wallpost_get_is_favorite(wall_wallpost_t *object){
	return object->is_favorite_;
}

static void wall_wallpost_set_likes(wall_wallpost_t *object, base_likes_info_t value){
	object->likes_ = value;
}

static base_likes_info_t wall_wallpost_get_likes(wall_wallpost_t *object){
	return object->likes_;
}

static void wall_wallpost_set_owner_id(wall_wallpost_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 wall_wallpost_get_owner_id(wall_wallpost_t *object){
	return object->owner_id_;
}

static void wall_wallpost_set_post_id(wall_wallpost_t *object, int value){
	object->post_id_ = value;
}

static int wall_wallpost_get_post_id(wall_wallpost_t *object){
	return object->post_id_;
}

static void wall_wallpost_set_parents_stack(wall_wallpost_t *object, int * value, int len){
int i;
	object->parents_stack_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->parents_stack[i] = value[i];
	}
	//NULL-terminate array
	object->parents_stack[i] = NULL;
}

static int * wall_wallpost_get_parents_stack(wall_wallpost_t *object){
	return object->parents_stack_;
}

static void wall_wallpost_set_post_source(wall_wallpost_t *object, wall_post_source_t value){
	object->post_source_ = value;
}

static wall_post_source_t wall_wallpost_get_post_source(wall_wallpost_t *object){
	return object->post_source_;
}

static void wall_wallpost_set_post_type(wall_wallpost_t *object, wall_post_type_t value){
	object->post_type_ = value;
}

static wall_post_type_t wall_wallpost_get_post_type(wall_wallpost_t *object){
	return object->post_type_;
}

static void wall_wallpost_set_reposts(wall_wallpost_t *object, base_reposts_info_t value){
	object->reposts_ = value;
}

static base_reposts_info_t wall_wallpost_get_reposts(wall_wallpost_t *object){
	return object->reposts_;
}

static void wall_wallpost_set_signer_id(wall_wallpost_t *object, int64 value){
	object->signer_id_ = value;
}

static int64 wall_wallpost_get_signer_id(wall_wallpost_t *object){
	return object->signer_id_;
}

static void wall_wallpost_set_text(wall_wallpost_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_wallpost_get_text(wall_wallpost_t *object){
	return object->text_;
}

static void wall_wallpost_set_views(wall_wallpost_t *object, wall_views_t value){
	object->views_ = value;
}

static wall_views_t wall_wallpost_get_views(wall_wallpost_t *object){
	return object->views_;
}

static void wall_wallpost_attachment_set_access_key(wall_wallpost_attachment_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * wall_wallpost_attachment_get_access_key(wall_wallpost_attachment_t *object){
	return object->access_key_;
}

static void wall_wallpost_attachment_set_album(wall_wallpost_attachment_t *object, photos_photo_album_t value){
	object->album_ = value;
}

static photos_photo_album_t wall_wallpost_attachment_get_album(wall_wallpost_attachment_t *object){
	return object->album_;
}

static void wall_wallpost_attachment_set_app(wall_wallpost_attachment_t *object, wall_app_post_t value){
	object->app_ = value;
}

static wall_app_post_t wall_wallpost_attachment_get_app(wall_wallpost_attachment_t *object){
	return object->app_;
}

static void wall_wallpost_attachment_set_audio(wall_wallpost_attachment_t *object, audio_audio_t value){
	object->audio_ = value;
}

static audio_audio_t wall_wallpost_attachment_get_audio(wall_wallpost_attachment_t *object){
	return object->audio_;
}

static void wall_wallpost_attachment_set_doc(wall_wallpost_attachment_t *object, docs_doc_t value){
	object->doc_ = value;
}

static docs_doc_t wall_wallpost_attachment_get_doc(wall_wallpost_attachment_t *object){
	return object->doc_;
}

static void wall_wallpost_attachment_set_event(wall_wallpost_attachment_t *object, events_event_attach_t value){
	object->event_ = value;
}

static events_event_attach_t wall_wallpost_attachment_get_event(wall_wallpost_attachment_t *object){
	return object->event_;
}

static void wall_wallpost_attachment_set_group(wall_wallpost_attachment_t *object, groups_group_attach_t value){
	object->group_ = value;
}

static groups_group_attach_t wall_wallpost_attachment_get_group(wall_wallpost_attachment_t *object){
	return object->group_;
}

static void wall_wallpost_attachment_set_graffiti(wall_wallpost_attachment_t *object, wall_graffiti_t value){
	object->graffiti_ = value;
}

static wall_graffiti_t wall_wallpost_attachment_get_graffiti(wall_wallpost_attachment_t *object){
	return object->graffiti_;
}

static void wall_wallpost_attachment_set_link(wall_wallpost_attachment_t *object, base_link_t value){
	object->link_ = value;
}

static base_link_t wall_wallpost_attachment_get_link(wall_wallpost_attachment_t *object){
	return object->link_;
}

static void wall_wallpost_attachment_set_market(wall_wallpost_attachment_t *object, market_market_item_t value){
	object->market_ = value;
}

static market_market_item_t wall_wallpost_attachment_get_market(wall_wallpost_attachment_t *object){
	return object->market_;
}

static void wall_wallpost_attachment_set_market_album(wall_wallpost_attachment_t *object, market_market_album_t value){
	object->market_album_ = value;
}

static market_market_album_t wall_wallpost_attachment_get_market_album(wall_wallpost_attachment_t *object){
	return object->market_album_;
}

static void wall_wallpost_attachment_set_note(wall_wallpost_attachment_t *object, notes_note_t value){
	object->note_ = value;
}

static notes_note_t wall_wallpost_attachment_get_note(wall_wallpost_attachment_t *object){
	return object->note_;
}

static void wall_wallpost_attachment_set_page(wall_wallpost_attachment_t *object, pages_wikipage_full_t value){
	object->page_ = value;
}

static pages_wikipage_full_t wall_wallpost_attachment_get_page(wall_wallpost_attachment_t *object){
	return object->page_;
}

static void wall_wallpost_attachment_set_photo(wall_wallpost_attachment_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t wall_wallpost_attachment_get_photo(wall_wallpost_attachment_t *object){
	return object->photo_;
}

static void wall_wallpost_attachment_set_poll(wall_wallpost_attachment_t *object, polls_poll_t value){
	object->poll_ = value;
}

static polls_poll_t wall_wallpost_attachment_get_poll(wall_wallpost_attachment_t *object){
	return object->poll_;
}

static void wall_wallpost_attachment_set_posted_photo(wall_wallpost_attachment_t *object, wall_posted_photo_t value){
	object->posted_photo_ = value;
}

static wall_posted_photo_t wall_wallpost_attachment_get_posted_photo(wall_wallpost_attachment_t *object){
	return object->posted_photo_;
}

static void wall_wallpost_attachment_set_type(wall_wallpost_attachment_t *object, wall_wallpost_attachment_type_t value){
	object->type_ = value;
}

static wall_wallpost_attachment_type_t wall_wallpost_attachment_get_type(wall_wallpost_attachment_t *object){
	return object->type_;
}

static void wall_wallpost_attachment_set_video(wall_wallpost_attachment_t *object, video_video_full_t value){
	object->video_ = value;
}

static video_video_full_t wall_wallpost_attachment_get_video(wall_wallpost_attachment_t *object){
	return object->video_;
}

static void wall_wallpost_comments_donut_set_placeholder(wall_wallpost_comments_donut_t *object, wall_wallpost_comments_donut_placeholder_t value){
	object->placeholder_ = value;
}

static wall_wallpost_comments_donut_placeholder_t wall_wallpost_comments_donut_get_placeholder(wall_wallpost_comments_donut_t *object){
	return object->placeholder_;
}

static void wall_wallpost_comments_donut_placeholder_set_text(wall_wallpost_comments_donut_placeholder_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_wallpost_comments_donut_placeholder_get_text(wall_wallpost_comments_donut_placeholder_t *object){
	return object->text_;
}

static void wall_wallpost_donut_set_is_donut(wall_wallpost_donut_t *object, bool value){
	object->is_donut_ = value;
}

static bool wall_wallpost_donut_get_is_donut(wall_wallpost_donut_t *object){
	return object->is_donut_;
}

static void wall_wallpost_donut_set_paid_duration(wall_wallpost_donut_t *object, int value){
	object->paid_duration_ = value;
}

static int wall_wallpost_donut_get_paid_duration(wall_wallpost_donut_t *object){
	return object->paid_duration_;
}

static void wall_wallpost_donut_set_placeholder(wall_wallpost_donut_t *object, wall_wallpost_donut_placeholder_t value){
	object->placeholder_ = value;
}

static wall_wallpost_donut_placeholder_t wall_wallpost_donut_get_placeholder(wall_wallpost_donut_t *object){
	return object->placeholder_;
}

static void wall_wallpost_donut_set_can_publish_free_copy(wall_wallpost_donut_t *object, bool value){
	object->can_publish_free_copy_ = value;
}

static bool wall_wallpost_donut_get_can_publish_free_copy(wall_wallpost_donut_t *object){
	return object->can_publish_free_copy_;
}

static void wall_wallpost_donut_set_edit_mode(wall_wallpost_donut_t *object, const char * value){
	object->edit_mode_ = strdup(value);
}

static const char * wall_wallpost_donut_get_edit_mode(wall_wallpost_donut_t *object){
	return object->edit_mode_;
}

static void wall_wallpost_donut_placeholder_set_text(wall_wallpost_donut_placeholder_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_wallpost_donut_placeholder_get_text(wall_wallpost_donut_placeholder_t *object){
	return object->text_;
}

static void wall_wallpost_to_id_set_attachments(wall_wallpost_to_id_t *object, wall_wallpost_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(wall_wallpost_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static wall_wallpost_attachment * wall_wallpost_to_id_get_attachments(wall_wallpost_to_id_t *object){
	return object->attachments_;
}

static void wall_wallpost_to_id_set_comments(wall_wallpost_to_id_t *object, base_comments_info_t value){
	object->comments_ = value;
}

static base_comments_info_t wall_wallpost_to_id_get_comments(wall_wallpost_to_id_t *object){
	return object->comments_;
}

static void wall_wallpost_to_id_set_copy_owner_id(wall_wallpost_to_id_t *object, int64 value){
	object->copy_owner_id_ = value;
}

static int64 wall_wallpost_to_id_get_copy_owner_id(wall_wallpost_to_id_t *object){
	return object->copy_owner_id_;
}

static void wall_wallpost_to_id_set_copy_post_id(wall_wallpost_to_id_t *object, int value){
	object->copy_post_id_ = value;
}

static int wall_wallpost_to_id_get_copy_post_id(wall_wallpost_to_id_t *object){
	return object->copy_post_id_;
}

static void wall_wallpost_to_id_set_date(wall_wallpost_to_id_t *object, int value){
	object->date_ = value;
}

static int wall_wallpost_to_id_get_date(wall_wallpost_to_id_t *object){
	return object->date_;
}

static void wall_wallpost_to_id_set_from_id(wall_wallpost_to_id_t *object, int64 value){
	object->from_id_ = value;
}

static int64 wall_wallpost_to_id_get_from_id(wall_wallpost_to_id_t *object){
	return object->from_id_;
}

static void wall_wallpost_to_id_set_geo(wall_wallpost_to_id_t *object, wall_geo_t value){
	object->geo_ = value;
}

static wall_geo_t wall_wallpost_to_id_get_geo(wall_wallpost_to_id_t *object){
	return object->geo_;
}

static void wall_wallpost_to_id_set_id(wall_wallpost_to_id_t *object, int value){
	object->id_ = value;
}

static int wall_wallpost_to_id_get_id(wall_wallpost_to_id_t *object){
	return object->id_;
}

static void wall_wallpost_to_id_set_is_favorite(wall_wallpost_to_id_t *object, bool value){
	object->is_favorite_ = value;
}

static bool wall_wallpost_to_id_get_is_favorite(wall_wallpost_to_id_t *object){
	return object->is_favorite_;
}

static void wall_wallpost_to_id_set_likes(wall_wallpost_to_id_t *object, base_likes_info_t value){
	object->likes_ = value;
}

static base_likes_info_t wall_wallpost_to_id_get_likes(wall_wallpost_to_id_t *object){
	return object->likes_;
}

static void wall_wallpost_to_id_set_post_id(wall_wallpost_to_id_t *object, int value){
	object->post_id_ = value;
}

static int wall_wallpost_to_id_get_post_id(wall_wallpost_to_id_t *object){
	return object->post_id_;
}

static void wall_wallpost_to_id_set_post_source(wall_wallpost_to_id_t *object, wall_post_source_t value){
	object->post_source_ = value;
}

static wall_post_source_t wall_wallpost_to_id_get_post_source(wall_wallpost_to_id_t *object){
	return object->post_source_;
}

static void wall_wallpost_to_id_set_post_type(wall_wallpost_to_id_t *object, wall_post_type_t value){
	object->post_type_ = value;
}

static wall_post_type_t wall_wallpost_to_id_get_post_type(wall_wallpost_to_id_t *object){
	return object->post_type_;
}

static void wall_wallpost_to_id_set_reposts(wall_wallpost_to_id_t *object, base_reposts_info_t value){
	object->reposts_ = value;
}

static base_reposts_info_t wall_wallpost_to_id_get_reposts(wall_wallpost_to_id_t *object){
	return object->reposts_;
}

static void wall_wallpost_to_id_set_signer_id(wall_wallpost_to_id_t *object, int64 value){
	object->signer_id_ = value;
}

static int64 wall_wallpost_to_id_get_signer_id(wall_wallpost_to_id_t *object){
	return object->signer_id_;
}

static void wall_wallpost_to_id_set_text(wall_wallpost_to_id_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * wall_wallpost_to_id_get_text(wall_wallpost_to_id_t *object){
	return object->text_;
}

static void wall_wallpost_to_id_set_to_id(wall_wallpost_to_id_t *object, int64 value){
	object->to_id_ = value;
}

static int64 wall_wallpost_to_id_get_to_id(wall_wallpost_to_id_t *object){
	return object->to_id_;
}

static void client_info_for_bots_set_button_actions(client_info_for_bots_t *object, messages_template_action_type_names * value, int len){
int i;
	object->button_actions_ = malloc(len * sizeof(messages_template_action_type_names) + 8);
	for(i=0;i<len);++i){
		object->button_actions[i] = value[i];
	}
	//NULL-terminate array
	object->button_actions[i] = NULL;
}

static messages_template_action_type_names * client_info_for_bots_get_button_actions(client_info_for_bots_t *object){
	return object->button_actions_;
}

static void client_info_for_bots_set_keyboard(client_info_for_bots_t *object, bool value){
	object->keyboard_ = value;
}

static bool client_info_for_bots_get_keyboard(client_info_for_bots_t *object){
	return object->keyboard_;
}

static void client_info_for_bots_set_inline_keyboard(client_info_for_bots_t *object, bool value){
	object->inline_keyboard_ = value;
}

static bool client_info_for_bots_get_inline_keyboard(client_info_for_bots_t *object){
	return object->inline_keyboard_;
}

static void client_info_for_bots_set_carousel(client_info_for_bots_t *object, bool value){
	object->carousel_ = value;
}

static bool client_info_for_bots_get_carousel(client_info_for_bots_t *object){
	return object->carousel_;
}

static void client_info_for_bots_set_lang_id(client_info_for_bots_t *object, int value){
	object->lang_id_ = value;
}

static int client_info_for_bots_get_lang_id(client_info_for_bots_t *object){
	return object->lang_id_;
}

static void callback_base_set_type(callback_base_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * callback_base_get_type(callback_base_t *object){
	return object->type_;
}

static void callback_base_set_group_id(callback_base_t *object, int64 value){
	object->group_id_ = value;
}

static int64 callback_base_get_group_id(callback_base_t *object){
	return object->group_id_;
}

static void callback_base_set_event_id(callback_base_t *object, const char * value){
	object->event_id_ = strdup(value);
}

static const char * callback_base_get_event_id(callback_base_t *object){
	return object->event_id_;
}

static void callback_base_set_secret(callback_base_t *object, const char * value){
	object->secret_ = strdup(value);
}

static const char * callback_base_get_secret(callback_base_t *object){
	return object->secret_;
}

static void callback_board_post_delete_set_topic_owner_id(callback_board_post_delete_t *object, int value){
	object->topic_owner_id_ = value;
}

static int callback_board_post_delete_get_topic_owner_id(callback_board_post_delete_t *object){
	return object->topic_owner_id_;
}

static void callback_board_post_delete_set_topic_id(callback_board_post_delete_t *object, int value){
	object->topic_id_ = value;
}

static int callback_board_post_delete_get_topic_id(callback_board_post_delete_t *object){
	return object->topic_id_;
}

static void callback_board_post_delete_set_id(callback_board_post_delete_t *object, int value){
	object->id_ = value;
}

static int callback_board_post_delete_get_id(callback_board_post_delete_t *object){
	return object->id_;
}

static void callback_donut_money_withdraw_error_set_reason(callback_donut_money_withdraw_error_t *object, const char * value){
	object->reason_ = strdup(value);
}

static const char * callback_donut_money_withdraw_error_get_reason(callback_donut_money_withdraw_error_t *object){
	return object->reason_;
}

static void callback_donut_subscription_cancelled_set_user_id(callback_donut_subscription_cancelled_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_donut_subscription_cancelled_get_user_id(callback_donut_subscription_cancelled_t *object){
	return object->user_id_;
}

static void callback_donut_subscription_create_set_user_id(callback_donut_subscription_create_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_donut_subscription_create_get_user_id(callback_donut_subscription_create_t *object){
	return object->user_id_;
}

static void callback_donut_subscription_create_set_amount(callback_donut_subscription_create_t *object, int value){
	object->amount_ = value;
}

static int callback_donut_subscription_create_get_amount(callback_donut_subscription_create_t *object){
	return object->amount_;
}

static void callback_donut_subscription_expired_set_user_id(callback_donut_subscription_expired_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_donut_subscription_expired_get_user_id(callback_donut_subscription_expired_t *object){
	return object->user_id_;
}

static void callback_donut_subscription_price_changed_set_user_id(callback_donut_subscription_price_changed_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_donut_subscription_price_changed_get_user_id(callback_donut_subscription_price_changed_t *object){
	return object->user_id_;
}

static void callback_donut_subscription_price_changed_set_amount_old(callback_donut_subscription_price_changed_t *object, int value){
	object->amount_old_ = value;
}

static int callback_donut_subscription_price_changed_get_amount_old(callback_donut_subscription_price_changed_t *object){
	return object->amount_old_;
}

static void callback_donut_subscription_price_changed_set_amount_new(callback_donut_subscription_price_changed_t *object, int value){
	object->amount_new_ = value;
}

static int callback_donut_subscription_price_changed_get_amount_new(callback_donut_subscription_price_changed_t *object){
	return object->amount_new_;
}

static void callback_donut_subscription_prolonged_set_user_id(callback_donut_subscription_prolonged_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_donut_subscription_prolonged_get_user_id(callback_donut_subscription_prolonged_t *object){
	return object->user_id_;
}

static void callback_donut_subscription_prolonged_set_amount(callback_donut_subscription_prolonged_t *object, int value){
	object->amount_ = value;
}

static int callback_donut_subscription_prolonged_get_amount(callback_donut_subscription_prolonged_t *object){
	return object->amount_;
}

static void callback_group_change_photo_set_user_id(callback_group_change_photo_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_group_change_photo_get_user_id(callback_group_change_photo_t *object){
	return object->user_id_;
}

static void callback_group_change_photo_set_photo(callback_group_change_photo_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t callback_group_change_photo_get_photo(callback_group_change_photo_t *object){
	return object->photo_;
}

static void callback_group_change_settings_set_user_id(callback_group_change_settings_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_group_change_settings_get_user_id(callback_group_change_settings_t *object){
	return object->user_id_;
}

static void callback_group_change_settings_set_self(callback_group_change_settings_t *object, base_bool_int_t value){
	object->self_ = value;
}

static base_bool_int_t callback_group_change_settings_get_self(callback_group_change_settings_t *object){
	return object->self_;
}

static void callback_group_join_set_user_id(callback_group_join_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_group_join_get_user_id(callback_group_join_t *object){
	return object->user_id_;
}

static void callback_group_join_set_join_type(callback_group_join_t *object, callback_group_join_type_t value){
	object->join_type_ = value;
}

static callback_group_join_type_t callback_group_join_get_join_type(callback_group_join_t *object){
	return object->join_type_;
}

static void callback_group_leave_set_user_id(callback_group_leave_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_group_leave_get_user_id(callback_group_leave_t *object){
	return object->user_id_;
}

static void callback_group_leave_set_self(callback_group_leave_t *object, base_bool_int_t value){
	object->self_ = value;
}

static base_bool_int_t callback_group_leave_get_self(callback_group_leave_t *object){
	return object->self_;
}

static void callback_group_officers_edit_set_admin_id(callback_group_officers_edit_t *object, int value){
	object->admin_id_ = value;
}

static int callback_group_officers_edit_get_admin_id(callback_group_officers_edit_t *object){
	return object->admin_id_;
}

static void callback_group_officers_edit_set_user_id(callback_group_officers_edit_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_group_officers_edit_get_user_id(callback_group_officers_edit_t *object){
	return object->user_id_;
}

static void callback_group_officers_edit_set_level_old(callback_group_officers_edit_t *object, callback_group_officer_role_t value){
	object->level_old_ = value;
}

static callback_group_officer_role_t callback_group_officers_edit_get_level_old(callback_group_officers_edit_t *object){
	return object->level_old_;
}

static void callback_group_officers_edit_set_level_new(callback_group_officers_edit_t *object, callback_group_officer_role_t value){
	object->level_new_ = value;
}

static callback_group_officer_role_t callback_group_officers_edit_get_level_new(callback_group_officers_edit_t *object){
	return object->level_new_;
}

static void callback_group_settings_changes_set_title(callback_group_settings_changes_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * callback_group_settings_changes_get_title(callback_group_settings_changes_t *object){
	return object->title_;
}

static void callback_group_settings_changes_set_description(callback_group_settings_changes_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * callback_group_settings_changes_get_description(callback_group_settings_changes_t *object){
	return object->description_;
}

static void callback_group_settings_changes_set_access(callback_group_settings_changes_t *object, groups_group_is_closed_t value){
	object->access_ = value;
}

static groups_group_is_closed_t callback_group_settings_changes_get_access(callback_group_settings_changes_t *object){
	return object->access_;
}

static void callback_group_settings_changes_set_screen_name(callback_group_settings_changes_t *object, const char * value){
	object->screen_name_ = strdup(value);
}

static const char * callback_group_settings_changes_get_screen_name(callback_group_settings_changes_t *object){
	return object->screen_name_;
}

static void callback_group_settings_changes_set_public_category(callback_group_settings_changes_t *object, int value){
	object->public_category_ = value;
}

static int callback_group_settings_changes_get_public_category(callback_group_settings_changes_t *object){
	return object->public_category_;
}

static void callback_group_settings_changes_set_public_subcategory(callback_group_settings_changes_t *object, int value){
	object->public_subcategory_ = value;
}

static int callback_group_settings_changes_get_public_subcategory(callback_group_settings_changes_t *object){
	return object->public_subcategory_;
}

static void callback_group_settings_changes_set_age_limits(callback_group_settings_changes_t *object, groups_group_full_age_limits_t value){
	object->age_limits_ = value;
}

static groups_group_full_age_limits_t callback_group_settings_changes_get_age_limits(callback_group_settings_changes_t *object){
	return object->age_limits_;
}

static void callback_group_settings_changes_set_website(callback_group_settings_changes_t *object, const char * value){
	object->website_ = strdup(value);
}

static const char * callback_group_settings_changes_get_website(callback_group_settings_changes_t *object){
	return object->website_;
}

static void callback_group_settings_changes_set_enable_status_default(callback_group_settings_changes_t *object, groups_group_wall_t value){
	object->enable_status_default_ = value;
}

static groups_group_wall_t callback_group_settings_changes_get_enable_status_default(callback_group_settings_changes_t *object){
	return object->enable_status_default_;
}

static void callback_group_settings_changes_set_enable_audio(callback_group_settings_changes_t *object, groups_group_audio_t value){
	object->enable_audio_ = value;
}

static groups_group_audio_t callback_group_settings_changes_get_enable_audio(callback_group_settings_changes_t *object){
	return object->enable_audio_;
}

static void callback_group_settings_changes_set_enable_video(callback_group_settings_changes_t *object, groups_group_video_t value){
	object->enable_video_ = value;
}

static groups_group_video_t callback_group_settings_changes_get_enable_video(callback_group_settings_changes_t *object){
	return object->enable_video_;
}

static void callback_group_settings_changes_set_enable_photo(callback_group_settings_changes_t *object, groups_group_photos_t value){
	object->enable_photo_ = value;
}

static groups_group_photos_t callback_group_settings_changes_get_enable_photo(callback_group_settings_changes_t *object){
	return object->enable_photo_;
}

static void callback_group_settings_changes_set_enable_market(callback_group_settings_changes_t *object, callback_group_market_t value){
	object->enable_market_ = value;
}

static callback_group_market_t callback_group_settings_changes_get_enable_market(callback_group_settings_changes_t *object){
	return object->enable_market_;
}

static void callback_like_add_remove_set_liker_id(callback_like_add_remove_t *object, int value){
	object->liker_id_ = value;
}

static int callback_like_add_remove_get_liker_id(callback_like_add_remove_t *object){
	return object->liker_id_;
}

static void callback_like_add_remove_set_object_type(callback_like_add_remove_t *object, const char * value){
	object->object_type_ = strdup(value);
}

static const char * callback_like_add_remove_get_object_type(callback_like_add_remove_t *object){
	return object->object_type_;
}

static void callback_like_add_remove_set_object_owner_id(callback_like_add_remove_t *object, int value){
	object->object_owner_id_ = value;
}

static int callback_like_add_remove_get_object_owner_id(callback_like_add_remove_t *object){
	return object->object_owner_id_;
}

static void callback_like_add_remove_set_object_id(callback_like_add_remove_t *object, int value){
	object->object_id_ = value;
}

static int callback_like_add_remove_get_object_id(callback_like_add_remove_t *object){
	return object->object_id_;
}

static void callback_like_add_remove_set_post_id(callback_like_add_remove_t *object, int value){
	object->post_id_ = value;
}

static int callback_like_add_remove_get_post_id(callback_like_add_remove_t *object){
	return object->post_id_;
}

static void callback_like_add_remove_set_thread_reply_id(callback_like_add_remove_t *object, int value){
	object->thread_reply_id_ = value;
}

static int callback_like_add_remove_get_thread_reply_id(callback_like_add_remove_t *object){
	return object->thread_reply_id_;
}

static void callback_market_comment_set_id(callback_market_comment_t *object, int value){
	object->id_ = value;
}

static int callback_market_comment_get_id(callback_market_comment_t *object){
	return object->id_;
}

static void callback_market_comment_set_from_id(callback_market_comment_t *object, int value){
	object->from_id_ = value;
}

static int callback_market_comment_get_from_id(callback_market_comment_t *object){
	return object->from_id_;
}

static void callback_market_comment_set_date(callback_market_comment_t *object, int value){
	object->date_ = value;
}

static int callback_market_comment_get_date(callback_market_comment_t *object){
	return object->date_;
}

static void callback_market_comment_set_text(callback_market_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * callback_market_comment_get_text(callback_market_comment_t *object){
	return object->text_;
}

static void callback_market_comment_set_market_owner_id(callback_market_comment_t *object, int value){
	object->market_owner_id_ = value;
}

static int callback_market_comment_get_market_owner_id(callback_market_comment_t *object){
	return object->market_owner_id_;
}

static void callback_market_comment_set_photo_id(callback_market_comment_t *object, int value){
	object->photo_id_ = value;
}

static int callback_market_comment_get_photo_id(callback_market_comment_t *object){
	return object->photo_id_;
}

static void callback_market_comment_delete_set_owner_id(callback_market_comment_delete_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 callback_market_comment_delete_get_owner_id(callback_market_comment_delete_t *object){
	return object->owner_id_;
}

static void callback_market_comment_delete_set_id(callback_market_comment_delete_t *object, int value){
	object->id_ = value;
}

static int callback_market_comment_delete_get_id(callback_market_comment_delete_t *object){
	return object->id_;
}

static void callback_market_comment_delete_set_user_id(callback_market_comment_delete_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_market_comment_delete_get_user_id(callback_market_comment_delete_t *object){
	return object->user_id_;
}

static void callback_market_comment_delete_set_item_id(callback_market_comment_delete_t *object, int value){
	object->item_id_ = value;
}

static int callback_market_comment_delete_get_item_id(callback_market_comment_delete_t *object){
	return object->item_id_;
}

static void callback_message_allow_object_set_user_id(callback_message_allow_object_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_message_allow_object_get_user_id(callback_message_allow_object_t *object){
	return object->user_id_;
}

static void callback_message_allow_object_set_key(callback_message_allow_object_t *object, const char * value){
	object->key_ = strdup(value);
}

static const char * callback_message_allow_object_get_key(callback_message_allow_object_t *object){
	return object->key_;
}

static void callback_message_deny_set_user_id(callback_message_deny_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_message_deny_get_user_id(callback_message_deny_t *object){
	return object->user_id_;
}

static void callback_message_object_set_client_info(callback_message_object_t *object, client_info_for_bots_t value){
	object->client_info_ = value;
}

static client_info_for_bots_t callback_message_object_get_client_info(callback_message_object_t *object){
	return object->client_info_;
}

static void callback_message_object_set_message(callback_message_object_t *object, messages_message_t value){
	object->message_ = value;
}

static messages_message_t callback_message_object_get_message(callback_message_object_t *object){
	return object->message_;
}

static void callback_photo_comment_set_id(callback_photo_comment_t *object, int value){
	object->id_ = value;
}

static int callback_photo_comment_get_id(callback_photo_comment_t *object){
	return object->id_;
}

static void callback_photo_comment_set_from_id(callback_photo_comment_t *object, int value){
	object->from_id_ = value;
}

static int callback_photo_comment_get_from_id(callback_photo_comment_t *object){
	return object->from_id_;
}

static void callback_photo_comment_set_date(callback_photo_comment_t *object, int value){
	object->date_ = value;
}

static int callback_photo_comment_get_date(callback_photo_comment_t *object){
	return object->date_;
}

static void callback_photo_comment_set_text(callback_photo_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * callback_photo_comment_get_text(callback_photo_comment_t *object){
	return object->text_;
}

static void callback_photo_comment_set_photo_owner_id(callback_photo_comment_t *object, int value){
	object->photo_owner_id_ = value;
}

static int callback_photo_comment_get_photo_owner_id(callback_photo_comment_t *object){
	return object->photo_owner_id_;
}

static void callback_photo_comment_delete_set_id(callback_photo_comment_delete_t *object, int value){
	object->id_ = value;
}

static int callback_photo_comment_delete_get_id(callback_photo_comment_delete_t *object){
	return object->id_;
}

static void callback_photo_comment_delete_set_owner_id(callback_photo_comment_delete_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 callback_photo_comment_delete_get_owner_id(callback_photo_comment_delete_t *object){
	return object->owner_id_;
}

static void callback_photo_comment_delete_set_user_id(callback_photo_comment_delete_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_photo_comment_delete_get_user_id(callback_photo_comment_delete_t *object){
	return object->user_id_;
}

static void callback_photo_comment_delete_set_photo_id(callback_photo_comment_delete_t *object, int value){
	object->photo_id_ = value;
}

static int callback_photo_comment_delete_get_photo_id(callback_photo_comment_delete_t *object){
	return object->photo_id_;
}

static void callback_poll_vote_new_set_owner_id(callback_poll_vote_new_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 callback_poll_vote_new_get_owner_id(callback_poll_vote_new_t *object){
	return object->owner_id_;
}

static void callback_poll_vote_new_set_poll_id(callback_poll_vote_new_t *object, int value){
	object->poll_id_ = value;
}

static int callback_poll_vote_new_get_poll_id(callback_poll_vote_new_t *object){
	return object->poll_id_;
}

static void callback_poll_vote_new_set_option_id(callback_poll_vote_new_t *object, int value){
	object->option_id_ = value;
}

static int callback_poll_vote_new_get_option_id(callback_poll_vote_new_t *object){
	return object->option_id_;
}

static void callback_poll_vote_new_set_user_id(callback_poll_vote_new_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_poll_vote_new_get_user_id(callback_poll_vote_new_t *object){
	return object->user_id_;
}

static void callback_qr_scan_set_user_id(callback_qr_scan_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_qr_scan_get_user_id(callback_qr_scan_t *object){
	return object->user_id_;
}

static void callback_qr_scan_set_data(callback_qr_scan_t *object, const char * value){
	object->data_ = strdup(value);
}

static const char * callback_qr_scan_get_data(callback_qr_scan_t *object){
	return object->data_;
}

static void callback_qr_scan_set_type(callback_qr_scan_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * callback_qr_scan_get_type(callback_qr_scan_t *object){
	return object->type_;
}

static void callback_qr_scan_set_subtype(callback_qr_scan_t *object, const char * value){
	object->subtype_ = strdup(value);
}

static const char * callback_qr_scan_get_subtype(callback_qr_scan_t *object){
	return object->subtype_;
}

static void callback_qr_scan_set_reread(callback_qr_scan_t *object, bool value){
	object->reread_ = value;
}

static bool callback_qr_scan_get_reread(callback_qr_scan_t *object){
	return object->reread_;
}

static void callback_user_block_set_admin_id(callback_user_block_t *object, int value){
	object->admin_id_ = value;
}

static int callback_user_block_get_admin_id(callback_user_block_t *object){
	return object->admin_id_;
}

static void callback_user_block_set_user_id(callback_user_block_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_user_block_get_user_id(callback_user_block_t *object){
	return object->user_id_;
}

static void callback_user_block_set_unblock_date(callback_user_block_t *object, int value){
	object->unblock_date_ = value;
}

static int callback_user_block_get_unblock_date(callback_user_block_t *object){
	return object->unblock_date_;
}

static void callback_user_block_set_reason(callback_user_block_t *object, int value){
	object->reason_ = value;
}

static int callback_user_block_get_reason(callback_user_block_t *object){
	return object->reason_;
}

static void callback_user_block_set_comment(callback_user_block_t *object, const char * value){
	object->comment_ = strdup(value);
}

static const char * callback_user_block_get_comment(callback_user_block_t *object){
	return object->comment_;
}

static void callback_user_unblock_set_admin_id(callback_user_unblock_t *object, int value){
	object->admin_id_ = value;
}

static int callback_user_unblock_get_admin_id(callback_user_unblock_t *object){
	return object->admin_id_;
}

static void callback_user_unblock_set_user_id(callback_user_unblock_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_user_unblock_get_user_id(callback_user_unblock_t *object){
	return object->user_id_;
}

static void callback_user_unblock_set_by_end_date(callback_user_unblock_t *object, int value){
	object->by_end_date_ = value;
}

static int callback_user_unblock_get_by_end_date(callback_user_unblock_t *object){
	return object->by_end_date_;
}

static void callback_video_comment_set_id(callback_video_comment_t *object, int value){
	object->id_ = value;
}

static int callback_video_comment_get_id(callback_video_comment_t *object){
	return object->id_;
}

static void callback_video_comment_set_from_id(callback_video_comment_t *object, int value){
	object->from_id_ = value;
}

static int callback_video_comment_get_from_id(callback_video_comment_t *object){
	return object->from_id_;
}

static void callback_video_comment_set_date(callback_video_comment_t *object, int value){
	object->date_ = value;
}

static int callback_video_comment_get_date(callback_video_comment_t *object){
	return object->date_;
}

static void callback_video_comment_set_text(callback_video_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * callback_video_comment_get_text(callback_video_comment_t *object){
	return object->text_;
}

static void callback_video_comment_set_video_owner_id(callback_video_comment_t *object, int value){
	object->video_owner_id_ = value;
}

static int callback_video_comment_get_video_owner_id(callback_video_comment_t *object){
	return object->video_owner_id_;
}

static void callback_video_comment_delete_set_id(callback_video_comment_delete_t *object, int value){
	object->id_ = value;
}

static int callback_video_comment_delete_get_id(callback_video_comment_delete_t *object){
	return object->id_;
}

static void callback_video_comment_delete_set_owner_id(callback_video_comment_delete_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 callback_video_comment_delete_get_owner_id(callback_video_comment_delete_t *object){
	return object->owner_id_;
}

static void callback_video_comment_delete_set_user_id(callback_video_comment_delete_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_video_comment_delete_get_user_id(callback_video_comment_delete_t *object){
	return object->user_id_;
}

static void callback_video_comment_delete_set_video_id(callback_video_comment_delete_t *object, int value){
	object->video_id_ = value;
}

static int callback_video_comment_delete_get_video_id(callback_video_comment_delete_t *object){
	return object->video_id_;
}

static void callback_wall_comment_delete_set_owner_id(callback_wall_comment_delete_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 callback_wall_comment_delete_get_owner_id(callback_wall_comment_delete_t *object){
	return object->owner_id_;
}

static void callback_wall_comment_delete_set_id(callback_wall_comment_delete_t *object, int value){
	object->id_ = value;
}

static int callback_wall_comment_delete_get_id(callback_wall_comment_delete_t *object){
	return object->id_;
}

static void callback_wall_comment_delete_set_user_id(callback_wall_comment_delete_t *object, int64 value){
	object->user_id_ = value;
}

static int64 callback_wall_comment_delete_get_user_id(callback_wall_comment_delete_t *object){
	return object->user_id_;
}

static void callback_wall_comment_delete_set_post_id(callback_wall_comment_delete_t *object, int value){
	object->post_id_ = value;
}

static int callback_wall_comment_delete_get_post_id(callback_wall_comment_delete_t *object){
	return object->post_id_;
}

static void comment_thread_set_count(comment_thread_t *object, int value){
	object->count_ = value;
}

static int comment_thread_get_count(comment_thread_t *object){
	return object->count_;
}

static void comment_thread_set_items(comment_thread_t *object, wall_wall_comment * value, int len){
int i;
	object->items_ = malloc(len * sizeof(wall_wall_comment) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static wall_wall_comment * comment_thread_get_items(comment_thread_t *object){
	return object->items_;
}

static void comment_thread_set_can_post(comment_thread_t *object, bool value){
	object->can_post_ = value;
}

static bool comment_thread_get_can_post(comment_thread_t *object){
	return object->can_post_;
}

static void comment_thread_set_show_reply_button(comment_thread_t *object, bool value){
	object->show_reply_button_ = value;
}

static bool comment_thread_get_show_reply_button(comment_thread_t *object){
	return object->show_reply_button_;
}

static void comment_thread_set_groups_can_post(comment_thread_t *object, bool value){
	object->groups_can_post_ = value;
}

static bool comment_thread_get_groups_can_post(comment_thread_t *object){
	return object->groups_can_post_;
}

static void secure_giveEventSticker_item_set_user_id(secure_giveEventSticker_item_t *object, int64 value){
	object->user_id_ = value;
}

static int64 secure_giveEventSticker_item_get_user_id(secure_giveEventSticker_item_t *object){
	return object->user_id_;
}

static void secure_giveEventSticker_item_set_status(secure_giveEventSticker_item_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * secure_giveEventSticker_item_get_status(secure_giveEventSticker_item_t *object){
	return object->status_;
}

static void secure_level_set_level(secure_level_t *object, int value){
	object->level_ = value;
}

static int secure_level_get_level(secure_level_t *object){
	return object->level_;
}

static void secure_level_set_uid(secure_level_t *object, int value){
	object->uid_ = value;
}

static int secure_level_get_uid(secure_level_t *object){
	return object->uid_;
}

static void secure_setCounter_item_set_id(secure_setCounter_item_t *object, int64 value){
	object->id_ = value;
}

static int64 secure_setCounter_item_get_id(secure_setCounter_item_t *object){
	return object->id_;
}

static void secure_setCounter_item_set_result(secure_setCounter_item_t *object, base_bool_int_t value){
	object->result_ = value;
}

static base_bool_int_t secure_setCounter_item_get_result(secure_setCounter_item_t *object){
	return object->result_;
}

static void secure_sms_notification_set_app_id(secure_sms_notification_t *object, const char * value){
	object->app_id_ = strdup(value);
}

static const char * secure_sms_notification_get_app_id(secure_sms_notification_t *object){
	return object->app_id_;
}

static void secure_sms_notification_set_date(secure_sms_notification_t *object, const char * value){
	object->date_ = strdup(value);
}

static const char * secure_sms_notification_get_date(secure_sms_notification_t *object){
	return object->date_;
}

static void secure_sms_notification_set_id(secure_sms_notification_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * secure_sms_notification_get_id(secure_sms_notification_t *object){
	return object->id_;
}

static void secure_sms_notification_set_message(secure_sms_notification_t *object, const char * value){
	object->message_ = strdup(value);
}

static const char * secure_sms_notification_get_message(secure_sms_notification_t *object){
	return object->message_;
}

static void secure_sms_notification_set_user_id(secure_sms_notification_t *object, const char * value){
	object->user_id_ = strdup(value);
}

static const char * secure_sms_notification_get_user_id(secure_sms_notification_t *object){
	return object->user_id_;
}

static void secure_token_checked_set_date(secure_token_checked_t *object, int value){
	object->date_ = value;
}

static int secure_token_checked_get_date(secure_token_checked_t *object){
	return object->date_;
}

static void secure_token_checked_set_expire(secure_token_checked_t *object, int value){
	object->expire_ = value;
}

static int secure_token_checked_get_expire(secure_token_checked_t *object){
	return object->expire_;
}

static void secure_token_checked_set_success(secure_token_checked_t *object, int value){
	object->success_ = value;
}

static int secure_token_checked_get_success(secure_token_checked_t *object){
	return object->success_;
}

static void secure_token_checked_set_user_id(secure_token_checked_t *object, int64 value){
	object->user_id_ = value;
}

static int64 secure_token_checked_get_user_id(secure_token_checked_t *object){
	return object->user_id_;
}

static void secure_transaction_set_date(secure_transaction_t *object, int value){
	object->date_ = value;
}

static int secure_transaction_get_date(secure_transaction_t *object){
	return object->date_;
}

static void secure_transaction_set_id(secure_transaction_t *object, int value){
	object->id_ = value;
}

static int secure_transaction_get_id(secure_transaction_t *object){
	return object->id_;
}

static void secure_transaction_set_uid_from(secure_transaction_t *object, int value){
	object->uid_from_ = value;
}

static int secure_transaction_get_uid_from(secure_transaction_t *object){
	return object->uid_from_;
}

static void secure_transaction_set_uid_to(secure_transaction_t *object, int value){
	object->uid_to_ = value;
}

static int secure_transaction_get_uid_to(secure_transaction_t *object){
	return object->uid_to_;
}

static void secure_transaction_set_votes(secure_transaction_t *object, int value){
	object->votes_ = value;
}

static int secure_transaction_get_votes(secure_transaction_t *object){
	return object->votes_;
}

static void calls_call_set_duration(calls_call_t *object, int value){
	object->duration_ = value;
}

static int calls_call_get_duration(calls_call_t *object){
	return object->duration_;
}

static void calls_call_set_initiator_id(calls_call_t *object, int value){
	object->initiator_id_ = value;
}

static int calls_call_get_initiator_id(calls_call_t *object){
	return object->initiator_id_;
}

static void calls_call_set_receiver_id(calls_call_t *object, int value){
	object->receiver_id_ = value;
}

static int calls_call_get_receiver_id(calls_call_t *object){
	return object->receiver_id_;
}

static void calls_call_set_state(calls_call_t *object, calls_end_state_t value){
	object->state_ = value;
}

static calls_end_state_t calls_call_get_state(calls_call_t *object){
	return object->state_;
}

static void calls_call_set_time(calls_call_t *object, int value){
	object->time_ = value;
}

static int calls_call_get_time(calls_call_t *object){
	return object->time_;
}

static void calls_call_set_video(calls_call_t *object, bool value){
	object->video_ = value;
}

static bool calls_call_get_video(calls_call_t *object){
	return object->video_;
}

static void calls_call_set_participants(calls_call_t *object, calls_participants_t value){
	object->participants_ = value;
}

static calls_participants_t calls_call_get_participants(calls_call_t *object){
	return object->participants_;
}

static void calls_participants_set_list(calls_participants_t *object, int64 * value, int len){
int i;
	object->list_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->list[i] = value[i];
	}
	//NULL-terminate array
	object->list[i] = NULL;
}

static int64 * calls_participants_get_list(calls_participants_t *object){
	return object->list_;
}

static void calls_participants_set_count(calls_participants_t *object, int value){
	object->count_ = value;
}

static int calls_participants_get_count(calls_participants_t *object){
	return object->count_;
}

static void notifications_feedback_set_attachments(notifications_feedback_t *object, wall_wallpost_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(wall_wallpost_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static wall_wallpost_attachment * notifications_feedback_get_attachments(notifications_feedback_t *object){
	return object->attachments_;
}

static void notifications_feedback_set_from_id(notifications_feedback_t *object, int value){
	object->from_id_ = value;
}

static int notifications_feedback_get_from_id(notifications_feedback_t *object){
	return object->from_id_;
}

static void notifications_feedback_set_geo(notifications_feedback_t *object, base_geo_t value){
	object->geo_ = value;
}

static base_geo_t notifications_feedback_get_geo(notifications_feedback_t *object){
	return object->geo_;
}

static void notifications_feedback_set_id(notifications_feedback_t *object, int value){
	object->id_ = value;
}

static int notifications_feedback_get_id(notifications_feedback_t *object){
	return object->id_;
}

static void notifications_feedback_set_likes(notifications_feedback_t *object, base_likes_info_t value){
	object->likes_ = value;
}

static base_likes_info_t notifications_feedback_get_likes(notifications_feedback_t *object){
	return object->likes_;
}

static void notifications_feedback_set_text(notifications_feedback_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * notifications_feedback_get_text(notifications_feedback_t *object){
	return object->text_;
}

static void notifications_feedback_set_to_id(notifications_feedback_t *object, int value){
	object->to_id_ = value;
}

static int notifications_feedback_get_to_id(notifications_feedback_t *object){
	return object->to_id_;
}

static void notifications_notification_set_date(notifications_notification_t *object, int value){
	object->date_ = value;
}

static int notifications_notification_get_date(notifications_notification_t *object){
	return object->date_;
}

static void notifications_notification_set_feedback(notifications_notification_t *object, notifications_feedback_t value){
	object->feedback_ = value;
}

static notifications_feedback_t notifications_notification_get_feedback(notifications_notification_t *object){
	return object->feedback_;
}

static void notifications_notification_set_parent(notifications_notification_t *object, notifications_notification_t value){
	object->parent_ = value;
}

static notifications_notification_t notifications_notification_get_parent(notifications_notification_t *object){
	return object->parent_;
}

static void notifications_notification_set_reply(notifications_notification_t *object, notifications_reply_t value){
	object->reply_ = value;
}

static notifications_reply_t notifications_notification_get_reply(notifications_notification_t *object){
	return object->reply_;
}

static void notifications_notification_set_type(notifications_notification_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * notifications_notification_get_type(notifications_notification_t *object){
	return object->type_;
}

static void notifications_notifications_comment_set_date(notifications_notifications_comment_t *object, int value){
	object->date_ = value;
}

static int notifications_notifications_comment_get_date(notifications_notifications_comment_t *object){
	return object->date_;
}

static void notifications_notifications_comment_set_id(notifications_notifications_comment_t *object, int value){
	object->id_ = value;
}

static int notifications_notifications_comment_get_id(notifications_notifications_comment_t *object){
	return object->id_;
}

static void notifications_notifications_comment_set_owner_id(notifications_notifications_comment_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 notifications_notifications_comment_get_owner_id(notifications_notifications_comment_t *object){
	return object->owner_id_;
}

static void notifications_notifications_comment_set_photo(notifications_notifications_comment_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t notifications_notifications_comment_get_photo(notifications_notifications_comment_t *object){
	return object->photo_;
}

static void notifications_notifications_comment_set_post(notifications_notifications_comment_t *object, wall_wallpost_t value){
	object->post_ = value;
}

static wall_wallpost_t notifications_notifications_comment_get_post(notifications_notifications_comment_t *object){
	return object->post_;
}

static void notifications_notifications_comment_set_text(notifications_notifications_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * notifications_notifications_comment_get_text(notifications_notifications_comment_t *object){
	return object->text_;
}

static void notifications_notifications_comment_set_topic(notifications_notifications_comment_t *object, board_topic_t value){
	object->topic_ = value;
}

static board_topic_t notifications_notifications_comment_get_topic(notifications_notifications_comment_t *object){
	return object->topic_;
}

static void notifications_notifications_comment_set_video(notifications_notifications_comment_t *object, video_video_t value){
	object->video_ = value;
}

static video_video_t notifications_notifications_comment_get_video(notifications_notifications_comment_t *object){
	return object->video_;
}

static void notifications_reply_set_date(notifications_reply_t *object, int value){
	object->date_ = value;
}

static int notifications_reply_get_date(notifications_reply_t *object){
	return object->date_;
}

static void notifications_reply_set_id(notifications_reply_t *object, int value){
	object->id_ = value;
}

static int notifications_reply_get_id(notifications_reply_t *object){
	return object->id_;
}

static void notifications_reply_set_text(notifications_reply_t *object, int value){
	object->text_ = value;
}

static int notifications_reply_get_text(notifications_reply_t *object){
	return object->text_;
}

static void notifications_send_message_error_set_code(notifications_send_message_error_t *object, int value){
	object->code_ = value;
}

static int notifications_send_message_error_get_code(notifications_send_message_error_t *object){
	return object->code_;
}

static void notifications_send_message_error_set_description(notifications_send_message_error_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * notifications_send_message_error_get_description(notifications_send_message_error_t *object){
	return object->description_;
}

static void notifications_send_message_item_set_user_id(notifications_send_message_item_t *object, int64 value){
	object->user_id_ = value;
}

static int64 notifications_send_message_item_get_user_id(notifications_send_message_item_t *object){
	return object->user_id_;
}

static void notifications_send_message_item_set_status(notifications_send_message_item_t *object, bool value){
	object->status_ = value;
}

static bool notifications_send_message_item_get_status(notifications_send_message_item_t *object){
	return object->status_;
}

static void notifications_send_message_item_set_error(notifications_send_message_item_t *object, notifications_send_message_error_t value){
	object->error_ = value;
}

static notifications_send_message_error_t notifications_send_message_item_get_error(notifications_send_message_item_t *object){
	return object->error_;
}

static void users_career_set_city_id(users_career_t *object, int value){
	object->city_id_ = value;
}

static int users_career_get_city_id(users_career_t *object){
	return object->city_id_;
}

static void users_career_set_city_name(users_career_t *object, const char * value){
	object->city_name_ = strdup(value);
}

static const char * users_career_get_city_name(users_career_t *object){
	return object->city_name_;
}

static void users_career_set_company(users_career_t *object, const char * value){
	object->company_ = strdup(value);
}

static const char * users_career_get_company(users_career_t *object){
	return object->company_;
}

static void users_career_set_country_id(users_career_t *object, int value){
	object->country_id_ = value;
}

static int users_career_get_country_id(users_career_t *object){
	return object->country_id_;
}

static void users_career_set_from(users_career_t *object, int value){
	object->from_ = value;
}

static int users_career_get_from(users_career_t *object){
	return object->from_;
}

static void users_career_set_group_id(users_career_t *object, int64 value){
	object->group_id_ = value;
}

static int64 users_career_get_group_id(users_career_t *object){
	return object->group_id_;
}

static void users_career_set_id(users_career_t *object, int value){
	object->id_ = value;
}

static int users_career_get_id(users_career_t *object){
	return object->id_;
}

static void users_career_set_position(users_career_t *object, const char * value){
	object->position_ = strdup(value);
}

static const char * users_career_get_position(users_career_t *object){
	return object->position_;
}

static void users_career_set_until(users_career_t *object, int value){
	object->until_ = value;
}

static int users_career_get_until(users_career_t *object){
	return object->until_;
}

static void users_exports_set_facebook(users_exports_t *object, int value){
	object->facebook_ = value;
}

static int users_exports_get_facebook(users_exports_t *object){
	return object->facebook_;
}

static void users_exports_set_livejournal(users_exports_t *object, int value){
	object->livejournal_ = value;
}

static int users_exports_get_livejournal(users_exports_t *object){
	return object->livejournal_;
}

static void users_exports_set_twitter(users_exports_t *object, int value){
	object->twitter_ = value;
}

static int users_exports_get_twitter(users_exports_t *object){
	return object->twitter_;
}

static void users_last_seen_set_platform(users_last_seen_t *object, int value){
	object->platform_ = value;
}

static int users_last_seen_get_platform(users_last_seen_t *object){
	return object->platform_;
}

static void users_last_seen_set_time(users_last_seen_t *object, int value){
	object->time_ = value;
}

static int users_last_seen_get_time(users_last_seen_t *object){
	return object->time_;
}

static void users_military_set_country_id(users_military_t *object, int value){
	object->country_id_ = value;
}

static int users_military_get_country_id(users_military_t *object){
	return object->country_id_;
}

static void users_military_set_from(users_military_t *object, int value){
	object->from_ = value;
}

static int users_military_get_from(users_military_t *object){
	return object->from_;
}

static void users_military_set_id(users_military_t *object, int value){
	object->id_ = value;
}

static int users_military_get_id(users_military_t *object){
	return object->id_;
}

static void users_military_set_unit(users_military_t *object, const char * value){
	object->unit_ = strdup(value);
}

static const char * users_military_get_unit(users_military_t *object){
	return object->unit_;
}

static void users_military_set_unit_id(users_military_t *object, int value){
	object->unit_id_ = value;
}

static int users_military_get_unit_id(users_military_t *object){
	return object->unit_id_;
}

static void users_military_set_until(users_military_t *object, int value){
	object->until_ = value;
}

static int users_military_get_until(users_military_t *object){
	return object->until_;
}

static void users_occupation_set_id(users_occupation_t *object, int value){
	object->id_ = value;
}

static int users_occupation_get_id(users_occupation_t *object){
	return object->id_;
}

static void users_occupation_set_name(users_occupation_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * users_occupation_get_name(users_occupation_t *object){
	return object->name_;
}

static void users_occupation_set_type(users_occupation_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * users_occupation_get_type(users_occupation_t *object){
	return object->type_;
}

static void users_online_info_set_visible(users_online_info_t *object, bool value){
	object->visible_ = value;
}

static bool users_online_info_get_visible(users_online_info_t *object){
	return object->visible_;
}

static void users_online_info_set_last_seen(users_online_info_t *object, int value){
	object->last_seen_ = value;
}

static int users_online_info_get_last_seen(users_online_info_t *object){
	return object->last_seen_;
}

static void users_online_info_set_is_online(users_online_info_t *object, bool value){
	object->is_online_ = value;
}

static bool users_online_info_get_is_online(users_online_info_t *object){
	return object->is_online_;
}

static void users_online_info_set_app_id(users_online_info_t *object, int value){
	object->app_id_ = value;
}

static int users_online_info_get_app_id(users_online_info_t *object){
	return object->app_id_;
}

static void users_online_info_set_is_mobile(users_online_info_t *object, bool value){
	object->is_mobile_ = value;
}

static bool users_online_info_get_is_mobile(users_online_info_t *object){
	return object->is_mobile_;
}

static void users_online_info_set_status(users_online_info_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * users_online_info_get_status(users_online_info_t *object){
	return object->status_;
}

static void users_personal_set_alcohol(users_personal_t *object, int value){
	object->alcohol_ = value;
}

static int users_personal_get_alcohol(users_personal_t *object){
	return object->alcohol_;
}

static void users_personal_set_inspired_by(users_personal_t *object, const char * value){
	object->inspired_by_ = strdup(value);
}

static const char * users_personal_get_inspired_by(users_personal_t *object){
	return object->inspired_by_;
}

static void users_personal_set_langs(users_personal_t *object, char * * value, int len){
int i;
	object->langs_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->langs[i] = value[i];
	}
	//NULL-terminate array
	object->langs[i] = NULL;
}

static char * * users_personal_get_langs(users_personal_t *object){
	return object->langs_;
}

static void users_personal_set_life_main(users_personal_t *object, int value){
	object->life_main_ = value;
}

static int users_personal_get_life_main(users_personal_t *object){
	return object->life_main_;
}

static void users_personal_set_people_main(users_personal_t *object, int value){
	object->people_main_ = value;
}

static int users_personal_get_people_main(users_personal_t *object){
	return object->people_main_;
}

static void users_personal_set_political(users_personal_t *object, int value){
	object->political_ = value;
}

static int users_personal_get_political(users_personal_t *object){
	return object->political_;
}

static void users_personal_set_religion(users_personal_t *object, const char * value){
	object->religion_ = strdup(value);
}

static const char * users_personal_get_religion(users_personal_t *object){
	return object->religion_;
}

static void users_personal_set_religion_id(users_personal_t *object, int value){
	object->religion_id_ = value;
}

static int users_personal_get_religion_id(users_personal_t *object){
	return object->religion_id_;
}

static void users_personal_set_smoking(users_personal_t *object, int value){
	object->smoking_ = value;
}

static int users_personal_get_smoking(users_personal_t *object){
	return object->smoking_;
}

static void users_relative_set_birth_date(users_relative_t *object, const char * value){
	object->birth_date_ = strdup(value);
}

static const char * users_relative_get_birth_date(users_relative_t *object){
	return object->birth_date_;
}

static void users_relative_set_id(users_relative_t *object, int64 value){
	object->id_ = value;
}

static int64 users_relative_get_id(users_relative_t *object){
	return object->id_;
}

static void users_relative_set_name(users_relative_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * users_relative_get_name(users_relative_t *object){
	return object->name_;
}

static void users_relative_set_type(users_relative_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * users_relative_get_type(users_relative_t *object){
	return object->type_;
}

static void users_school_set_city(users_school_t *object, int value){
	object->city_ = value;
}

static int users_school_get_city(users_school_t *object){
	return object->city_;
}

static void users_school_set_class(users_school_t *object, const char * value){
	object->class_ = strdup(value);
}

static const char * users_school_get_class(users_school_t *object){
	return object->class_;
}

static void users_school_set_country(users_school_t *object, int value){
	object->country_ = value;
}

static int users_school_get_country(users_school_t *object){
	return object->country_;
}

static void users_school_set_id(users_school_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * users_school_get_id(users_school_t *object){
	return object->id_;
}

static void users_school_set_name(users_school_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * users_school_get_name(users_school_t *object){
	return object->name_;
}

static void users_school_set_type(users_school_t *object, int value){
	object->type_ = value;
}

static int users_school_get_type(users_school_t *object){
	return object->type_;
}

static void users_school_set_type_str(users_school_t *object, const char * value){
	object->type_str_ = strdup(value);
}

static const char * users_school_get_type_str(users_school_t *object){
	return object->type_str_;
}

static void users_school_set_year_from(users_school_t *object, int value){
	object->year_from_ = value;
}

static int users_school_get_year_from(users_school_t *object){
	return object->year_from_;
}

static void users_school_set_year_graduated(users_school_t *object, int value){
	object->year_graduated_ = value;
}

static int users_school_get_year_graduated(users_school_t *object){
	return object->year_graduated_;
}

static void users_school_set_year_to(users_school_t *object, int value){
	object->year_to_ = value;
}

static int users_school_get_year_to(users_school_t *object){
	return object->year_to_;
}

static void users_school_set_speciality(users_school_t *object, const char * value){
	object->speciality_ = strdup(value);
}

static const char * users_school_get_speciality(users_school_t *object){
	return object->speciality_;
}

static void users_university_set_chair(users_university_t *object, int value){
	object->chair_ = value;
}

static int users_university_get_chair(users_university_t *object){
	return object->chair_;
}

static void users_university_set_chair_name(users_university_t *object, const char * value){
	object->chair_name_ = strdup(value);
}

static const char * users_university_get_chair_name(users_university_t *object){
	return object->chair_name_;
}

static void users_university_set_city(users_university_t *object, int value){
	object->city_ = value;
}

static int users_university_get_city(users_university_t *object){
	return object->city_;
}

static void users_university_set_country(users_university_t *object, int value){
	object->country_ = value;
}

static int users_university_get_country(users_university_t *object){
	return object->country_;
}

static void users_university_set_education_form(users_university_t *object, const char * value){
	object->education_form_ = strdup(value);
}

static const char * users_university_get_education_form(users_university_t *object){
	return object->education_form_;
}

static void users_university_set_education_status(users_university_t *object, const char * value){
	object->education_status_ = strdup(value);
}

static const char * users_university_get_education_status(users_university_t *object){
	return object->education_status_;
}

static void users_university_set_faculty(users_university_t *object, int value){
	object->faculty_ = value;
}

static int users_university_get_faculty(users_university_t *object){
	return object->faculty_;
}

static void users_university_set_faculty_name(users_university_t *object, const char * value){
	object->faculty_name_ = strdup(value);
}

static const char * users_university_get_faculty_name(users_university_t *object){
	return object->faculty_name_;
}

static void users_university_set_graduation(users_university_t *object, int value){
	object->graduation_ = value;
}

static int users_university_get_graduation(users_university_t *object){
	return object->graduation_;
}

static void users_university_set_id(users_university_t *object, int value){
	object->id_ = value;
}

static int users_university_get_id(users_university_t *object){
	return object->id_;
}

static void users_university_set_name(users_university_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * users_university_get_name(users_university_t *object){
	return object->name_;
}

static void users_university_set_university_group_id(users_university_t *object, int value){
	object->university_group_id_ = value;
}

static int users_university_get_university_group_id(users_university_t *object){
	return object->university_group_id_;
}

static void users_user_connections_set_skype(users_user_connections_t *object, const char * value){
	object->skype_ = strdup(value);
}

static const char * users_user_connections_get_skype(users_user_connections_t *object){
	return object->skype_;
}

static void users_user_connections_set_facebook(users_user_connections_t *object, const char * value){
	object->facebook_ = strdup(value);
}

static const char * users_user_connections_get_facebook(users_user_connections_t *object){
	return object->facebook_;
}

static void users_user_connections_set_facebook_name(users_user_connections_t *object, const char * value){
	object->facebook_name_ = strdup(value);
}

static const char * users_user_connections_get_facebook_name(users_user_connections_t *object){
	return object->facebook_name_;
}

static void users_user_connections_set_twitter(users_user_connections_t *object, const char * value){
	object->twitter_ = strdup(value);
}

static const char * users_user_connections_get_twitter(users_user_connections_t *object){
	return object->twitter_;
}

static void users_user_connections_set_livejournal(users_user_connections_t *object, const char * value){
	object->livejournal_ = strdup(value);
}

static const char * users_user_connections_get_livejournal(users_user_connections_t *object){
	return object->livejournal_;
}

static void users_user_connections_set_instagram(users_user_connections_t *object, const char * value){
	object->instagram_ = strdup(value);
}

static const char * users_user_connections_get_instagram(users_user_connections_t *object){
	return object->instagram_;
}

static void users_user_counters_set_albums(users_user_counters_t *object, int value){
	object->albums_ = value;
}

static int users_user_counters_get_albums(users_user_counters_t *object){
	return object->albums_;
}

static void users_user_counters_set_badges(users_user_counters_t *object, int value){
	object->badges_ = value;
}

static int users_user_counters_get_badges(users_user_counters_t *object){
	return object->badges_;
}

static void users_user_counters_set_audios(users_user_counters_t *object, int value){
	object->audios_ = value;
}

static int users_user_counters_get_audios(users_user_counters_t *object){
	return object->audios_;
}

static void users_user_counters_set_followers(users_user_counters_t *object, int value){
	object->followers_ = value;
}

static int users_user_counters_get_followers(users_user_counters_t *object){
	return object->followers_;
}

static void users_user_counters_set_friends(users_user_counters_t *object, int value){
	object->friends_ = value;
}

static int users_user_counters_get_friends(users_user_counters_t *object){
	return object->friends_;
}

static void users_user_counters_set_gifts(users_user_counters_t *object, int value){
	object->gifts_ = value;
}

static int users_user_counters_get_gifts(users_user_counters_t *object){
	return object->gifts_;
}

static void users_user_counters_set_groups(users_user_counters_t *object, int value){
	object->groups_ = value;
}

static int users_user_counters_get_groups(users_user_counters_t *object){
	return object->groups_;
}

static void users_user_counters_set_notes(users_user_counters_t *object, int value){
	object->notes_ = value;
}

static int users_user_counters_get_notes(users_user_counters_t *object){
	return object->notes_;
}

static void users_user_counters_set_online_friends(users_user_counters_t *object, int value){
	object->online_friends_ = value;
}

static int users_user_counters_get_online_friends(users_user_counters_t *object){
	return object->online_friends_;
}

static void users_user_counters_set_pages(users_user_counters_t *object, int value){
	object->pages_ = value;
}

static int users_user_counters_get_pages(users_user_counters_t *object){
	return object->pages_;
}

static void users_user_counters_set_photos(users_user_counters_t *object, int value){
	object->photos_ = value;
}

static int users_user_counters_get_photos(users_user_counters_t *object){
	return object->photos_;
}

static void users_user_counters_set_subscriptions(users_user_counters_t *object, int value){
	object->subscriptions_ = value;
}

static int users_user_counters_get_subscriptions(users_user_counters_t *object){
	return object->subscriptions_;
}

static void users_user_counters_set_user_photos(users_user_counters_t *object, int value){
	object->user_photos_ = value;
}

static int users_user_counters_get_user_photos(users_user_counters_t *object){
	return object->user_photos_;
}

static void users_user_counters_set_user_videos(users_user_counters_t *object, int value){
	object->user_videos_ = value;
}

static int users_user_counters_get_user_videos(users_user_counters_t *object){
	return object->user_videos_;
}

static void users_user_counters_set_videos(users_user_counters_t *object, int value){
	object->videos_ = value;
}

static int users_user_counters_get_videos(users_user_counters_t *object){
	return object->videos_;
}

static void users_user_counters_set_new_photo_tags(users_user_counters_t *object, int value){
	object->new_photo_tags_ = value;
}

static int users_user_counters_get_new_photo_tags(users_user_counters_t *object){
	return object->new_photo_tags_;
}

static void users_user_counters_set_new_recognition_tags(users_user_counters_t *object, int value){
	object->new_recognition_tags_ = value;
}

static int users_user_counters_get_new_recognition_tags(users_user_counters_t *object){
	return object->new_recognition_tags_;
}

static void users_user_counters_set_mutual_friends(users_user_counters_t *object, int value){
	object->mutual_friends_ = value;
}

static int users_user_counters_get_mutual_friends(users_user_counters_t *object){
	return object->mutual_friends_;
}

static void users_user_counters_set_posts(users_user_counters_t *object, int value){
	object->posts_ = value;
}

static int users_user_counters_get_posts(users_user_counters_t *object){
	return object->posts_;
}

static void users_user_counters_set_articles(users_user_counters_t *object, int value){
	object->articles_ = value;
}

static int users_user_counters_get_articles(users_user_counters_t *object){
	return object->articles_;
}

static void users_user_counters_set_wishes(users_user_counters_t *object, int value){
	object->wishes_ = value;
}

static int users_user_counters_get_wishes(users_user_counters_t *object){
	return object->wishes_;
}

static void users_user_counters_set_podcasts(users_user_counters_t *object, int value){
	object->podcasts_ = value;
}

static int users_user_counters_get_podcasts(users_user_counters_t *object){
	return object->podcasts_;
}

static void users_user_counters_set_clips(users_user_counters_t *object, int value){
	object->clips_ = value;
}

static int users_user_counters_get_clips(users_user_counters_t *object){
	return object->clips_;
}

static void users_user_counters_set_clips_followers(users_user_counters_t *object, int value){
	object->clips_followers_ = value;
}

static int users_user_counters_get_clips_followers(users_user_counters_t *object){
	return object->clips_followers_;
}

static void users_user_settings_xtr_set_connections(users_user_settings_xtr_t *object, users_user_connections_t value){
	object->connections_ = value;
}

static users_user_connections_t users_user_settings_xtr_get_connections(users_user_settings_xtr_t *object){
	return object->connections_;
}

static void users_user_settings_xtr_set_bdate(users_user_settings_xtr_t *object, const char * value){
	object->bdate_ = strdup(value);
}

static const char * users_user_settings_xtr_get_bdate(users_user_settings_xtr_t *object){
	return object->bdate_;
}

static void users_user_settings_xtr_set_bdate_visibility(users_user_settings_xtr_t *object, int value){
	object->bdate_visibility_ = value;
}

static int users_user_settings_xtr_get_bdate_visibility(users_user_settings_xtr_t *object){
	return object->bdate_visibility_;
}

static void users_user_settings_xtr_set_city(users_user_settings_xtr_t *object, base_city_t value){
	object->city_ = value;
}

static base_city_t users_user_settings_xtr_get_city(users_user_settings_xtr_t *object){
	return object->city_;
}

static void users_user_settings_xtr_set_country(users_user_settings_xtr_t *object, base_country_t value){
	object->country_ = value;
}

static base_country_t users_user_settings_xtr_get_country(users_user_settings_xtr_t *object){
	return object->country_;
}

static void users_user_settings_xtr_set_first_name(users_user_settings_xtr_t *object, const char * value){
	object->first_name_ = strdup(value);
}

static const char * users_user_settings_xtr_get_first_name(users_user_settings_xtr_t *object){
	return object->first_name_;
}

static void users_user_settings_xtr_set_home_town(users_user_settings_xtr_t *object, const char * value){
	object->home_town_ = strdup(value);
}

static const char * users_user_settings_xtr_get_home_town(users_user_settings_xtr_t *object){
	return object->home_town_;
}

static void users_user_settings_xtr_set_last_name(users_user_settings_xtr_t *object, const char * value){
	object->last_name_ = strdup(value);
}

static const char * users_user_settings_xtr_get_last_name(users_user_settings_xtr_t *object){
	return object->last_name_;
}

static void users_user_settings_xtr_set_maiden_name(users_user_settings_xtr_t *object, const char * value){
	object->maiden_name_ = strdup(value);
}

static const char * users_user_settings_xtr_get_maiden_name(users_user_settings_xtr_t *object){
	return object->maiden_name_;
}

static void users_user_settings_xtr_set_name_request(users_user_settings_xtr_t *object, account_name_request_t value){
	object->name_request_ = value;
}

static account_name_request_t users_user_settings_xtr_get_name_request(users_user_settings_xtr_t *object){
	return object->name_request_;
}

static void users_user_settings_xtr_set_personal(users_user_settings_xtr_t *object, users_personal_t value){
	object->personal_ = value;
}

static users_personal_t users_user_settings_xtr_get_personal(users_user_settings_xtr_t *object){
	return object->personal_;
}

static void users_user_settings_xtr_set_phone(users_user_settings_xtr_t *object, const char * value){
	object->phone_ = strdup(value);
}

static const char * users_user_settings_xtr_get_phone(users_user_settings_xtr_t *object){
	return object->phone_;
}

static void users_user_settings_xtr_set_relation(users_user_settings_xtr_t *object, users_user_relation_t value){
	object->relation_ = value;
}

static users_user_relation_t users_user_settings_xtr_get_relation(users_user_settings_xtr_t *object){
	return object->relation_;
}

static void users_user_settings_xtr_set_relation_partner(users_user_settings_xtr_t *object, users_user_min_t value){
	object->relation_partner_ = value;
}

static users_user_min_t users_user_settings_xtr_get_relation_partner(users_user_settings_xtr_t *object){
	return object->relation_partner_;
}

static void users_user_settings_xtr_set_relation_pending(users_user_settings_xtr_t *object, base_bool_int_t value){
	object->relation_pending_ = value;
}

static base_bool_int_t users_user_settings_xtr_get_relation_pending(users_user_settings_xtr_t *object){
	return object->relation_pending_;
}

static void users_user_settings_xtr_set_relation_requests(users_user_settings_xtr_t *object, users_user_min * value, int len){
int i;
	object->relation_requests_ = malloc(len * sizeof(users_user_min) + 8);
	for(i=0;i<len);++i){
		object->relation_requests[i] = value[i];
	}
	//NULL-terminate array
	object->relation_requests[i] = NULL;
}

static users_user_min * users_user_settings_xtr_get_relation_requests(users_user_settings_xtr_t *object){
	return object->relation_requests_;
}

static void users_user_settings_xtr_set_screen_name(users_user_settings_xtr_t *object, const char * value){
	object->screen_name_ = strdup(value);
}

static const char * users_user_settings_xtr_get_screen_name(users_user_settings_xtr_t *object){
	return object->screen_name_;
}

static void users_user_settings_xtr_set_sex(users_user_settings_xtr_t *object, base_sex_t value){
	object->sex_ = value;
}

static base_sex_t users_user_settings_xtr_get_sex(users_user_settings_xtr_t *object){
	return object->sex_;
}

static void users_user_settings_xtr_set_status(users_user_settings_xtr_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * users_user_settings_xtr_get_status(users_user_settings_xtr_t *object){
	return object->status_;
}

static void users_user_settings_xtr_set_status_audio(users_user_settings_xtr_t *object, audio_audio_t value){
	object->status_audio_ = value;
}

static audio_audio_t users_user_settings_xtr_get_status_audio(users_user_settings_xtr_t *object){
	return object->status_audio_;
}

static void users_user_settings_xtr_set_interests(users_user_settings_xtr_t *object, account_user_settings_interests_t value){
	object->interests_ = value;
}

static account_user_settings_interests_t users_user_settings_xtr_get_interests(users_user_settings_xtr_t *object){
	return object->interests_;
}

static void users_user_settings_xtr_set_languages(users_user_settings_xtr_t *object, char * * value, int len){
int i;
	object->languages_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->languages[i] = value[i];
	}
	//NULL-terminate array
	object->languages[i] = NULL;
}

static char * * users_user_settings_xtr_get_languages(users_user_settings_xtr_t *object){
	return object->languages_;
}

static void users_users_array_set_count(users_users_array_t *object, int value){
	object->count_ = value;
}

static int users_users_array_get_count(users_users_array_t *object){
	return object->count_;
}

static void users_users_array_set_items(users_users_array_t *object, int64 * value, int len){
int i;
	object->items_ = malloc(len * sizeof(int64) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static int64 * users_users_array_get_items(users_users_array_t *object){
	return object->items_;
}

static void account_account_counters_set_app_requests(account_account_counters_t *object, int value){
	object->app_requests_ = value;
}

static int account_account_counters_get_app_requests(account_account_counters_t *object){
	return object->app_requests_;
}

static void account_account_counters_set_events(account_account_counters_t *object, int value){
	object->events_ = value;
}

static int account_account_counters_get_events(account_account_counters_t *object){
	return object->events_;
}

static void account_account_counters_set_faves(account_account_counters_t *object, int value){
	object->faves_ = value;
}

static int account_account_counters_get_faves(account_account_counters_t *object){
	return object->faves_;
}

static void account_account_counters_set_friends(account_account_counters_t *object, int value){
	object->friends_ = value;
}

static int account_account_counters_get_friends(account_account_counters_t *object){
	return object->friends_;
}

static void account_account_counters_set_friends_suggestions(account_account_counters_t *object, int value){
	object->friends_suggestions_ = value;
}

static int account_account_counters_get_friends_suggestions(account_account_counters_t *object){
	return object->friends_suggestions_;
}

static void account_account_counters_set_friends_recommendations(account_account_counters_t *object, int value){
	object->friends_recommendations_ = value;
}

static int account_account_counters_get_friends_recommendations(account_account_counters_t *object){
	return object->friends_recommendations_;
}

static void account_account_counters_set_gifts(account_account_counters_t *object, int value){
	object->gifts_ = value;
}

static int account_account_counters_get_gifts(account_account_counters_t *object){
	return object->gifts_;
}

static void account_account_counters_set_groups(account_account_counters_t *object, int value){
	object->groups_ = value;
}

static int account_account_counters_get_groups(account_account_counters_t *object){
	return object->groups_;
}

static void account_account_counters_set_menu_discover_badge(account_account_counters_t *object, int value){
	object->menu_discover_badge_ = value;
}

static int account_account_counters_get_menu_discover_badge(account_account_counters_t *object){
	return object->menu_discover_badge_;
}

static void account_account_counters_set_menu_clips_badge(account_account_counters_t *object, int value){
	object->menu_clips_badge_ = value;
}

static int account_account_counters_get_menu_clips_badge(account_account_counters_t *object){
	return object->menu_clips_badge_;
}

static void account_account_counters_set_messages(account_account_counters_t *object, int value){
	object->messages_ = value;
}

static int account_account_counters_get_messages(account_account_counters_t *object){
	return object->messages_;
}

static void account_account_counters_set_memories(account_account_counters_t *object, int value){
	object->memories_ = value;
}

static int account_account_counters_get_memories(account_account_counters_t *object){
	return object->memories_;
}

static void account_account_counters_set_notes(account_account_counters_t *object, int value){
	object->notes_ = value;
}

static int account_account_counters_get_notes(account_account_counters_t *object){
	return object->notes_;
}

static void account_account_counters_set_notifications(account_account_counters_t *object, int value){
	object->notifications_ = value;
}

static int account_account_counters_get_notifications(account_account_counters_t *object){
	return object->notifications_;
}

static void account_account_counters_set_photos(account_account_counters_t *object, int value){
	object->photos_ = value;
}

static int account_account_counters_get_photos(account_account_counters_t *object){
	return object->photos_;
}

static void account_account_counters_set_sdk(account_account_counters_t *object, int value){
	object->sdk_ = value;
}

static int account_account_counters_get_sdk(account_account_counters_t *object){
	return object->sdk_;
}

static void account_info_set_wishlists_ae_promo_banner_show(account_info_t *object, base_bool_int_t value){
	object->wishlists_ae_promo_banner_show_ = value;
}

static base_bool_int_t account_info_get_wishlists_ae_promo_banner_show(account_info_t *object){
	return object->wishlists_ae_promo_banner_show_;
}

static void account_info_set_2fa_required(account_info_t *object, base_bool_int_t value){
	object->2fa_required_ = value;
}

static base_bool_int_t account_info_get_2fa_required(account_info_t *object){
	return object->2fa_required_;
}

static void account_info_set_country(account_info_t *object, const char * value){
	object->country_ = strdup(value);
}

static const char * account_info_get_country(account_info_t *object){
	return object->country_;
}

static void account_info_set_https_required(account_info_t *object, base_bool_int_t value){
	object->https_required_ = value;
}

static base_bool_int_t account_info_get_https_required(account_info_t *object){
	return object->https_required_;
}

static void account_info_set_intro(account_info_t *object, base_bool_int_t value){
	object->intro_ = value;
}

static base_bool_int_t account_info_get_intro(account_info_t *object){
	return object->intro_;
}

static void account_info_set_show_vk_apps_intro(account_info_t *object, bool value){
	object->show_vk_apps_intro_ = value;
}

static bool account_info_get_show_vk_apps_intro(account_info_t *object){
	return object->show_vk_apps_intro_;
}

static void account_info_set_mini_apps_ads_slot_id(account_info_t *object, int value){
	object->mini_apps_ads_slot_id_ = value;
}

static int account_info_get_mini_apps_ads_slot_id(account_info_t *object){
	return object->mini_apps_ads_slot_id_;
}

static void account_info_set_qr_promotion(account_info_t *object, int value){
	object->qr_promotion_ = value;
}

static int account_info_get_qr_promotion(account_info_t *object){
	return object->qr_promotion_;
}

static void account_info_set_lang(account_info_t *object, int value){
	object->lang_ = value;
}

static int account_info_get_lang(account_info_t *object){
	return object->lang_;
}

static void account_info_set_no_wall_replies(account_info_t *object, base_bool_int_t value){
	object->no_wall_replies_ = value;
}

static base_bool_int_t account_info_get_no_wall_replies(account_info_t *object){
	return object->no_wall_replies_;
}

static void account_info_set_own_posts_default(account_info_t *object, base_bool_int_t value){
	object->own_posts_default_ = value;
}

static base_bool_int_t account_info_get_own_posts_default(account_info_t *object){
	return object->own_posts_default_;
}

static void account_name_request_set_first_name(account_name_request_t *object, const char * value){
	object->first_name_ = strdup(value);
}

static const char * account_name_request_get_first_name(account_name_request_t *object){
	return object->first_name_;
}

static void account_name_request_set_id(account_name_request_t *object, int value){
	object->id_ = value;
}

static int account_name_request_get_id(account_name_request_t *object){
	return object->id_;
}

static void account_name_request_set_last_name(account_name_request_t *object, const char * value){
	object->last_name_ = strdup(value);
}

static const char * account_name_request_get_last_name(account_name_request_t *object){
	return object->last_name_;
}

static void account_name_request_set_status(account_name_request_t *object, account_name_request_status_t value){
	object->status_ = value;
}

static account_name_request_status_t account_name_request_get_status(account_name_request_t *object){
	return object->status_;
}

static void account_name_request_set_lang(account_name_request_t *object, const char * value){
	object->lang_ = strdup(value);
}

static const char * account_name_request_get_lang(account_name_request_t *object){
	return object->lang_;
}

static void account_name_request_set_link_href(account_name_request_t *object, const char * value){
	object->link_href_ = strdup(value);
}

static const char * account_name_request_get_link_href(account_name_request_t *object){
	return object->link_href_;
}

static void account_name_request_set_link_label(account_name_request_t *object, const char * value){
	object->link_label_ = strdup(value);
}

static const char * account_name_request_get_link_label(account_name_request_t *object){
	return object->link_label_;
}

static void account_offer_set_description(account_offer_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * account_offer_get_description(account_offer_t *object){
	return object->description_;
}

static void account_offer_set_id(account_offer_t *object, int value){
	object->id_ = value;
}

static int account_offer_get_id(account_offer_t *object){
	return object->id_;
}

static void account_offer_set_img(account_offer_t *object, const char * value){
	object->img_ = strdup(value);
}

static const char * account_offer_get_img(account_offer_t *object){
	return object->img_;
}

static void account_offer_set_instruction(account_offer_t *object, const char * value){
	object->instruction_ = strdup(value);
}

static const char * account_offer_get_instruction(account_offer_t *object){
	return object->instruction_;
}

static void account_offer_set_instruction_html(account_offer_t *object, const char * value){
	object->instruction_html_ = strdup(value);
}

static const char * account_offer_get_instruction_html(account_offer_t *object){
	return object->instruction_html_;
}

static void account_offer_set_price(account_offer_t *object, int value){
	object->price_ = value;
}

static int account_offer_get_price(account_offer_t *object){
	return object->price_;
}

static void account_offer_set_short_description(account_offer_t *object, const char * value){
	object->short_description_ = strdup(value);
}

static const char * account_offer_get_short_description(account_offer_t *object){
	return object->short_description_;
}

static void account_offer_set_tag(account_offer_t *object, const char * value){
	object->tag_ = strdup(value);
}

static const char * account_offer_get_tag(account_offer_t *object){
	return object->tag_;
}

static void account_offer_set_title(account_offer_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * account_offer_get_title(account_offer_t *object){
	return object->title_;
}

static void account_offer_set_link_id(account_offer_t *object, int value){
	object->link_id_ = value;
}

static int account_offer_get_link_id(account_offer_t *object){
	return object->link_id_;
}

static void account_offer_set_link_type(account_offer_t *object, const char * value){
	object->link_type_ = strdup(value);
}

static const char * account_offer_get_link_type(account_offer_t *object){
	return object->link_type_;
}

static void account_push_conversations_set_count(account_push_conversations_t *object, int value){
	object->count_ = value;
}

static int account_push_conversations_get_count(account_push_conversations_t *object){
	return object->count_;
}

static void account_push_conversations_set_items(account_push_conversations_t *object, account_push_conversations_item * value, int len){
int i;
	object->items_ = malloc(len * sizeof(account_push_conversations_item) + 8);
	for(i=0;i<len);++i){
		object->items[i] = value[i];
	}
	//NULL-terminate array
	object->items[i] = NULL;
}

static account_push_conversations_item * account_push_conversations_get_items(account_push_conversations_t *object){
	return object->items_;
}

static void account_push_conversations_item_set_disabled_until(account_push_conversations_item_t *object, int value){
	object->disabled_until_ = value;
}

static int account_push_conversations_item_get_disabled_until(account_push_conversations_item_t *object){
	return object->disabled_until_;
}

static void account_push_conversations_item_set_peer_id(account_push_conversations_item_t *object, int value){
	object->peer_id_ = value;
}

static int account_push_conversations_item_get_peer_id(account_push_conversations_item_t *object){
	return object->peer_id_;
}

static void account_push_conversations_item_set_sound(account_push_conversations_item_t *object, base_bool_int_t value){
	object->sound_ = value;
}

static base_bool_int_t account_push_conversations_item_get_sound(account_push_conversations_item_t *object){
	return object->sound_;
}

static void account_push_conversations_item_set_disabled_mentions(account_push_conversations_item_t *object, base_bool_int_t value){
	object->disabled_mentions_ = value;
}

static base_bool_int_t account_push_conversations_item_get_disabled_mentions(account_push_conversations_item_t *object){
	return object->disabled_mentions_;
}

static void account_push_conversations_item_set_disabled_mass_mentions(account_push_conversations_item_t *object, base_bool_int_t value){
	object->disabled_mass_mentions_ = value;
}

static base_bool_int_t account_push_conversations_item_get_disabled_mass_mentions(account_push_conversations_item_t *object){
	return object->disabled_mass_mentions_;
}

static void account_push_params_set_msg(account_push_params_t *object, account_push_params_mode * value, int len){
int i;
	object->msg_ = malloc(len * sizeof(account_push_params_mode) + 8);
	for(i=0;i<len);++i){
		object->msg[i] = value[i];
	}
	//NULL-terminate array
	object->msg[i] = NULL;
}

static account_push_params_mode * account_push_params_get_msg(account_push_params_t *object){
	return object->msg_;
}

static void account_push_params_set_chat(account_push_params_t *object, account_push_params_mode * value, int len){
int i;
	object->chat_ = malloc(len * sizeof(account_push_params_mode) + 8);
	for(i=0;i<len);++i){
		object->chat[i] = value[i];
	}
	//NULL-terminate array
	object->chat[i] = NULL;
}

static account_push_params_mode * account_push_params_get_chat(account_push_params_t *object){
	return object->chat_;
}

static void account_push_params_set_like(account_push_params_t *object, account_push_params_settings * value, int len){
int i;
	object->like_ = malloc(len * sizeof(account_push_params_settings) + 8);
	for(i=0;i<len);++i){
		object->like[i] = value[i];
	}
	//NULL-terminate array
	object->like[i] = NULL;
}

static account_push_params_settings * account_push_params_get_like(account_push_params_t *object){
	return object->like_;
}

static void account_push_params_set_repost(account_push_params_t *object, account_push_params_settings * value, int len){
int i;
	object->repost_ = malloc(len * sizeof(account_push_params_settings) + 8);
	for(i=0;i<len);++i){
		object->repost[i] = value[i];
	}
	//NULL-terminate array
	object->repost[i] = NULL;
}

static account_push_params_settings * account_push_params_get_repost(account_push_params_t *object){
	return object->repost_;
}

static void account_push_params_set_comment(account_push_params_t *object, account_push_params_settings * value, int len){
int i;
	object->comment_ = malloc(len * sizeof(account_push_params_settings) + 8);
	for(i=0;i<len);++i){
		object->comment[i] = value[i];
	}
	//NULL-terminate array
	object->comment[i] = NULL;
}

static account_push_params_settings * account_push_params_get_comment(account_push_params_t *object){
	return object->comment_;
}

static void account_push_params_set_mention(account_push_params_t *object, account_push_params_settings * value, int len){
int i;
	object->mention_ = malloc(len * sizeof(account_push_params_settings) + 8);
	for(i=0;i<len);++i){
		object->mention[i] = value[i];
	}
	//NULL-terminate array
	object->mention[i] = NULL;
}

static account_push_params_settings * account_push_params_get_mention(account_push_params_t *object){
	return object->mention_;
}

static void account_push_params_set_reply(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->reply_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->reply[i] = value[i];
	}
	//NULL-terminate array
	object->reply[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_reply(account_push_params_t *object){
	return object->reply_;
}

static void account_push_params_set_new_post(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->new_post_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->new_post[i] = value[i];
	}
	//NULL-terminate array
	object->new_post[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_new_post(account_push_params_t *object){
	return object->new_post_;
}

static void account_push_params_set_wall_post(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->wall_post_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->wall_post[i] = value[i];
	}
	//NULL-terminate array
	object->wall_post[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_wall_post(account_push_params_t *object){
	return object->wall_post_;
}

static void account_push_params_set_wall_publish(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->wall_publish_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->wall_publish[i] = value[i];
	}
	//NULL-terminate array
	object->wall_publish[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_wall_publish(account_push_params_t *object){
	return object->wall_publish_;
}

static void account_push_params_set_friend(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->friend_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->friend[i] = value[i];
	}
	//NULL-terminate array
	object->friend[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_friend(account_push_params_t *object){
	return object->friend_;
}

static void account_push_params_set_friend_found(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->friend_found_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->friend_found[i] = value[i];
	}
	//NULL-terminate array
	object->friend_found[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_friend_found(account_push_params_t *object){
	return object->friend_found_;
}

static void account_push_params_set_friend_accepted(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->friend_accepted_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->friend_accepted[i] = value[i];
	}
	//NULL-terminate array
	object->friend_accepted[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_friend_accepted(account_push_params_t *object){
	return object->friend_accepted_;
}

static void account_push_params_set_group_invite(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->group_invite_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->group_invite[i] = value[i];
	}
	//NULL-terminate array
	object->group_invite[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_group_invite(account_push_params_t *object){
	return object->group_invite_;
}

static void account_push_params_set_group_accepted(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->group_accepted_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->group_accepted[i] = value[i];
	}
	//NULL-terminate array
	object->group_accepted[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_group_accepted(account_push_params_t *object){
	return object->group_accepted_;
}

static void account_push_params_set_birthday(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->birthday_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->birthday[i] = value[i];
	}
	//NULL-terminate array
	object->birthday[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_birthday(account_push_params_t *object){
	return object->birthday_;
}

static void account_push_params_set_event_soon(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->event_soon_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->event_soon[i] = value[i];
	}
	//NULL-terminate array
	object->event_soon[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_event_soon(account_push_params_t *object){
	return object->event_soon_;
}

static void account_push_params_set_app_request(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->app_request_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->app_request[i] = value[i];
	}
	//NULL-terminate array
	object->app_request[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_app_request(account_push_params_t *object){
	return object->app_request_;
}

static void account_push_params_set_sdk_open(account_push_params_t *object, account_push_params_onoff * value, int len){
int i;
	object->sdk_open_ = malloc(len * sizeof(account_push_params_onoff) + 8);
	for(i=0;i<len);++i){
		object->sdk_open[i] = value[i];
	}
	//NULL-terminate array
	object->sdk_open[i] = NULL;
}

static account_push_params_onoff * account_push_params_get_sdk_open(account_push_params_t *object){
	return object->sdk_open_;
}

static void account_push_settings_set_disabled(account_push_settings_t *object, base_bool_int_t value){
	object->disabled_ = value;
}

static base_bool_int_t account_push_settings_get_disabled(account_push_settings_t *object){
	return object->disabled_;
}

static void account_push_settings_set_disabled_until(account_push_settings_t *object, int value){
	object->disabled_until_ = value;
}

static int account_push_settings_get_disabled_until(account_push_settings_t *object){
	return object->disabled_until_;
}

static void account_push_settings_set_settings(account_push_settings_t *object, account_push_params_t value){
	object->settings_ = value;
}

static account_push_params_t account_push_settings_get_settings(account_push_settings_t *object){
	return object->settings_;
}

static void account_push_settings_set_conversations(account_push_settings_t *object, account_push_conversations_t value){
	object->conversations_ = value;
}

static account_push_conversations_t account_push_settings_get_conversations(account_push_settings_t *object){
	return object->conversations_;
}

static void account_user_settings_interest_set_title(account_user_settings_interest_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * account_user_settings_interest_get_title(account_user_settings_interest_t *object){
	return object->title_;
}

static void account_user_settings_interest_set_value(account_user_settings_interest_t *object, const char * value){
	object->value_ = strdup(value);
}

static const char * account_user_settings_interest_get_value(account_user_settings_interest_t *object){
	return object->value_;
}

static void account_user_settings_interests_set_activities(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->activities_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_activities(account_user_settings_interests_t *object){
	return object->activities_;
}

static void account_user_settings_interests_set_interests(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->interests_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_interests(account_user_settings_interests_t *object){
	return object->interests_;
}

static void account_user_settings_interests_set_music(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->music_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_music(account_user_settings_interests_t *object){
	return object->music_;
}

static void account_user_settings_interests_set_tv(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->tv_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_tv(account_user_settings_interests_t *object){
	return object->tv_;
}

static void account_user_settings_interests_set_movies(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->movies_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_movies(account_user_settings_interests_t *object){
	return object->movies_;
}

static void account_user_settings_interests_set_books(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->books_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_books(account_user_settings_interests_t *object){
	return object->books_;
}

static void account_user_settings_interests_set_games(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->games_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_games(account_user_settings_interests_t *object){
	return object->games_;
}

static void account_user_settings_interests_set_quotes(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->quotes_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_quotes(account_user_settings_interests_t *object){
	return object->quotes_;
}

static void account_user_settings_interests_set_about(account_user_settings_interests_t *object, account_user_settings_interest_t value){
	object->about_ = value;
}

static account_user_settings_interest_t account_user_settings_interests_get_about(account_user_settings_interests_t *object){
	return object->about_;
}

static void friends_friend_status_set_friend_status(friends_friend_status_t *object, friends_friend_status_status_t value){
	object->friend_status_ = value;
}

static friends_friend_status_status_t friends_friend_status_get_friend_status(friends_friend_status_t *object){
	return object->friend_status_;
}

static void friends_friend_status_set_sign(friends_friend_status_t *object, const char * value){
	object->sign_ = strdup(value);
}

static const char * friends_friend_status_get_sign(friends_friend_status_t *object){
	return object->sign_;
}

static void friends_friend_status_set_user_id(friends_friend_status_t *object, int64 value){
	object->user_id_ = value;
}

static int64 friends_friend_status_get_user_id(friends_friend_status_t *object){
	return object->user_id_;
}

static void friends_friends_list_set_id(friends_friends_list_t *object, int value){
	object->id_ = value;
}

static int friends_friends_list_get_id(friends_friends_list_t *object){
	return object->id_;
}

static void friends_friends_list_set_name(friends_friends_list_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * friends_friends_list_get_name(friends_friends_list_t *object){
	return object->name_;
}

static void friends_mutual_friend_set_common_count(friends_mutual_friend_t *object, int value){
	object->common_count_ = value;
}

static int friends_mutual_friend_get_common_count(friends_mutual_friend_t *object){
	return object->common_count_;
}

static void friends_mutual_friend_set_common_friends(friends_mutual_friend_t *object, int * value, int len){
int i;
	object->common_friends_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->common_friends[i] = value[i];
	}
	//NULL-terminate array
	object->common_friends[i] = NULL;
}

static int * friends_mutual_friend_get_common_friends(friends_mutual_friend_t *object){
	return object->common_friends_;
}

static void friends_mutual_friend_set_id(friends_mutual_friend_t *object, int value){
	object->id_ = value;
}

static int friends_mutual_friend_get_id(friends_mutual_friend_t *object){
	return object->id_;
}

static void friends_requests_set_from(friends_requests_t *object, const char * value){
	object->from_ = strdup(value);
}

static const char * friends_requests_get_from(friends_requests_t *object){
	return object->from_;
}

static void friends_requests_set_mutual(friends_requests_t *object, friends_requests_mutual_t value){
	object->mutual_ = value;
}

static friends_requests_mutual_t friends_requests_get_mutual(friends_requests_t *object){
	return object->mutual_;
}

static void friends_requests_set_user_id(friends_requests_t *object, int64 value){
	object->user_id_ = value;
}

static int64 friends_requests_get_user_id(friends_requests_t *object){
	return object->user_id_;
}

static void friends_requests_mutual_set_count(friends_requests_mutual_t *object, int value){
	object->count_ = value;
}

static int friends_requests_mutual_get_count(friends_requests_mutual_t *object){
	return object->count_;
}

static void friends_requests_mutual_set_users(friends_requests_mutual_t *object, int * value, int len){
int i;
	object->users_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->users[i] = value[i];
	}
	//NULL-terminate array
	object->users[i] = NULL;
}

static int * friends_requests_mutual_get_users(friends_requests_mutual_t *object){
	return object->users_;
}

static void friends_requests_xtr_message_set_from(friends_requests_xtr_message_t *object, const char * value){
	object->from_ = strdup(value);
}

static const char * friends_requests_xtr_message_get_from(friends_requests_xtr_message_t *object){
	return object->from_;
}

static void friends_requests_xtr_message_set_message(friends_requests_xtr_message_t *object, const char * value){
	object->message_ = strdup(value);
}

static const char * friends_requests_xtr_message_get_message(friends_requests_xtr_message_t *object){
	return object->message_;
}

static void friends_requests_xtr_message_set_mutual(friends_requests_xtr_message_t *object, friends_requests_mutual_t value){
	object->mutual_ = value;
}

static friends_requests_mutual_t friends_requests_xtr_message_get_mutual(friends_requests_xtr_message_t *object){
	return object->mutual_;
}

static void friends_requests_xtr_message_set_user_id(friends_requests_xtr_message_t *object, int64 value){
	object->user_id_ = value;
}

static int64 friends_requests_xtr_message_get_user_id(friends_requests_xtr_message_t *object){
	return object->user_id_;
}

static void board_topic_set_comments(board_topic_t *object, int value){
	object->comments_ = value;
}

static int board_topic_get_comments(board_topic_t *object){
	return object->comments_;
}

static void board_topic_set_created(board_topic_t *object, int value){
	object->created_ = value;
}

static int board_topic_get_created(board_topic_t *object){
	return object->created_;
}

static void board_topic_set_created_by(board_topic_t *object, int value){
	object->created_by_ = value;
}

static int board_topic_get_created_by(board_topic_t *object){
	return object->created_by_;
}

static void board_topic_set_id(board_topic_t *object, int value){
	object->id_ = value;
}

static int board_topic_get_id(board_topic_t *object){
	return object->id_;
}

static void board_topic_set_is_closed(board_topic_t *object, base_bool_int_t value){
	object->is_closed_ = value;
}

static base_bool_int_t board_topic_get_is_closed(board_topic_t *object){
	return object->is_closed_;
}

static void board_topic_set_is_fixed(board_topic_t *object, base_bool_int_t value){
	object->is_fixed_ = value;
}

static base_bool_int_t board_topic_get_is_fixed(board_topic_t *object){
	return object->is_fixed_;
}

static void board_topic_set_title(board_topic_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * board_topic_get_title(board_topic_t *object){
	return object->title_;
}

static void board_topic_set_updated(board_topic_t *object, int value){
	object->updated_ = value;
}

static int board_topic_get_updated(board_topic_t *object){
	return object->updated_;
}

static void board_topic_set_updated_by(board_topic_t *object, int value){
	object->updated_by_ = value;
}

static int board_topic_get_updated_by(board_topic_t *object){
	return object->updated_by_;
}

static void board_topic_set_first_comment(board_topic_t *object, const char * value){
	object->first_comment_ = strdup(value);
}

static const char * board_topic_get_first_comment(board_topic_t *object){
	return object->first_comment_;
}

static void board_topic_set_last_comment(board_topic_t *object, const char * value){
	object->last_comment_ = strdup(value);
}

static const char * board_topic_get_last_comment(board_topic_t *object){
	return object->last_comment_;
}

static void board_topic_comment_set_attachments(board_topic_comment_t *object, wall_comment_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(wall_comment_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static wall_comment_attachment * board_topic_comment_get_attachments(board_topic_comment_t *object){
	return object->attachments_;
}

static void board_topic_comment_set_date(board_topic_comment_t *object, int value){
	object->date_ = value;
}

static int board_topic_comment_get_date(board_topic_comment_t *object){
	return object->date_;
}

static void board_topic_comment_set_from_id(board_topic_comment_t *object, int value){
	object->from_id_ = value;
}

static int board_topic_comment_get_from_id(board_topic_comment_t *object){
	return object->from_id_;
}

static void board_topic_comment_set_id(board_topic_comment_t *object, int value){
	object->id_ = value;
}

static int board_topic_comment_get_id(board_topic_comment_t *object){
	return object->id_;
}

static void board_topic_comment_set_real_offset(board_topic_comment_t *object, int value){
	object->real_offset_ = value;
}

static int board_topic_comment_get_real_offset(board_topic_comment_t *object){
	return object->real_offset_;
}

static void board_topic_comment_set_text(board_topic_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * board_topic_comment_get_text(board_topic_comment_t *object){
	return object->text_;
}

static void board_topic_comment_set_can_edit(board_topic_comment_t *object, base_bool_int_t value){
	object->can_edit_ = value;
}

static base_bool_int_t board_topic_comment_get_can_edit(board_topic_comment_t *object){
	return object->can_edit_;
}

static void board_topic_comment_set_likes(board_topic_comment_t *object, base_likes_info_t value){
	object->likes_ = value;
}

static base_likes_info_t board_topic_comment_get_likes(board_topic_comment_t *object){
	return object->likes_;
}

static void donut_donator_subscription_info_set_owner_id(donut_donator_subscription_info_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 donut_donator_subscription_info_get_owner_id(donut_donator_subscription_info_t *object){
	return object->owner_id_;
}

static void donut_donator_subscription_info_set_next_payment_date(donut_donator_subscription_info_t *object, int value){
	object->next_payment_date_ = value;
}

static int donut_donator_subscription_info_get_next_payment_date(donut_donator_subscription_info_t *object){
	return object->next_payment_date_;
}

static void donut_donator_subscription_info_set_amount(donut_donator_subscription_info_t *object, int value){
	object->amount_ = value;
}

static int donut_donator_subscription_info_get_amount(donut_donator_subscription_info_t *object){
	return object->amount_;
}

static void donut_donator_subscription_info_set_status(donut_donator_subscription_info_t *object, const char * value){
	object->status_ = strdup(value);
}

static const char * donut_donator_subscription_info_get_status(donut_donator_subscription_info_t *object){
	return object->status_;
}

static void stories_clickable_area_set_x(stories_clickable_area_t *object, int value){
	object->x_ = value;
}

static int stories_clickable_area_get_x(stories_clickable_area_t *object){
	return object->x_;
}

static void stories_clickable_area_set_y(stories_clickable_area_t *object, int value){
	object->y_ = value;
}

static int stories_clickable_area_get_y(stories_clickable_area_t *object){
	return object->y_;
}

static void stories_clickable_sticker_set_clickable_area(stories_clickable_sticker_t *object, stories_clickable_area * value, int len){
int i;
	object->clickable_area_ = malloc(len * sizeof(stories_clickable_area) + 8);
	for(i=0;i<len);++i){
		object->clickable_area[i] = value[i];
	}
	//NULL-terminate array
	object->clickable_area[i] = NULL;
}

static stories_clickable_area * stories_clickable_sticker_get_clickable_area(stories_clickable_sticker_t *object){
	return object->clickable_area_;
}

static void stories_clickable_sticker_set_id(stories_clickable_sticker_t *object, int value){
	object->id_ = value;
}

static int stories_clickable_sticker_get_id(stories_clickable_sticker_t *object){
	return object->id_;
}

static void stories_clickable_sticker_set_hashtag(stories_clickable_sticker_t *object, const char * value){
	object->hashtag_ = strdup(value);
}

static const char * stories_clickable_sticker_get_hashtag(stories_clickable_sticker_t *object){
	return object->hashtag_;
}

static void stories_clickable_sticker_set_link_object(stories_clickable_sticker_t *object, base_link_t value){
	object->link_object_ = value;
}

static base_link_t stories_clickable_sticker_get_link_object(stories_clickable_sticker_t *object){
	return object->link_object_;
}

static void stories_clickable_sticker_set_mention(stories_clickable_sticker_t *object, const char * value){
	object->mention_ = strdup(value);
}

static const char * stories_clickable_sticker_get_mention(stories_clickable_sticker_t *object){
	return object->mention_;
}

static void stories_clickable_sticker_set_tooltip_text(stories_clickable_sticker_t *object, const char * value){
	object->tooltip_text_ = strdup(value);
}

static const char * stories_clickable_sticker_get_tooltip_text(stories_clickable_sticker_t *object){
	return object->tooltip_text_;
}

static void stories_clickable_sticker_set_owner_id(stories_clickable_sticker_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 stories_clickable_sticker_get_owner_id(stories_clickable_sticker_t *object){
	return object->owner_id_;
}

static void stories_clickable_sticker_set_story_id(stories_clickable_sticker_t *object, int value){
	object->story_id_ = value;
}

static int stories_clickable_sticker_get_story_id(stories_clickable_sticker_t *object){
	return object->story_id_;
}

static void stories_clickable_sticker_set_question(stories_clickable_sticker_t *object, const char * value){
	object->question_ = strdup(value);
}

static const char * stories_clickable_sticker_get_question(stories_clickable_sticker_t *object){
	return object->question_;
}

static void stories_clickable_sticker_set_question_button(stories_clickable_sticker_t *object, const char * value){
	object->question_button_ = strdup(value);
}

static const char * stories_clickable_sticker_get_question_button(stories_clickable_sticker_t *object){
	return object->question_button_;
}

static void stories_clickable_sticker_set_place_id(stories_clickable_sticker_t *object, int value){
	object->place_id_ = value;
}

static int stories_clickable_sticker_get_place_id(stories_clickable_sticker_t *object){
	return object->place_id_;
}

static void stories_clickable_sticker_set_market_item(stories_clickable_sticker_t *object, market_market_item_t value){
	object->market_item_ = value;
}

static market_market_item_t stories_clickable_sticker_get_market_item(stories_clickable_sticker_t *object){
	return object->market_item_;
}

static void stories_clickable_sticker_set_audio(stories_clickable_sticker_t *object, audio_audio_t value){
	object->audio_ = value;
}

static audio_audio_t stories_clickable_sticker_get_audio(stories_clickable_sticker_t *object){
	return object->audio_;
}

static void stories_clickable_sticker_set_audio_start_time(stories_clickable_sticker_t *object, int value){
	object->audio_start_time_ = value;
}

static int stories_clickable_sticker_get_audio_start_time(stories_clickable_sticker_t *object){
	return object->audio_start_time_;
}

static void stories_clickable_sticker_set_style(stories_clickable_sticker_t *object, const char * value){
	object->style_ = strdup(value);
}

static const char * stories_clickable_sticker_get_style(stories_clickable_sticker_t *object){
	return object->style_;
}

static void stories_clickable_sticker_set_type(stories_clickable_sticker_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * stories_clickable_sticker_get_type(stories_clickable_sticker_t *object){
	return object->type_;
}

static void stories_clickable_sticker_set_subtype(stories_clickable_sticker_t *object, const char * value){
	object->subtype_ = strdup(value);
}

static const char * stories_clickable_sticker_get_subtype(stories_clickable_sticker_t *object){
	return object->subtype_;
}

static void stories_clickable_sticker_set_post_owner_id(stories_clickable_sticker_t *object, int64 value){
	object->post_owner_id_ = value;
}

static int64 stories_clickable_sticker_get_post_owner_id(stories_clickable_sticker_t *object){
	return object->post_owner_id_;
}

static void stories_clickable_sticker_set_post_id(stories_clickable_sticker_t *object, int value){
	object->post_id_ = value;
}

static int stories_clickable_sticker_get_post_id(stories_clickable_sticker_t *object){
	return object->post_id_;
}

static void stories_clickable_sticker_set_poll(stories_clickable_sticker_t *object, polls_poll_t value){
	object->poll_ = value;
}

static polls_poll_t stories_clickable_sticker_get_poll(stories_clickable_sticker_t *object){
	return object->poll_;
}

static void stories_clickable_sticker_set_color(stories_clickable_sticker_t *object, const char * value){
	object->color_ = strdup(value);
}

static const char * stories_clickable_sticker_get_color(stories_clickable_sticker_t *object){
	return object->color_;
}

static void stories_clickable_sticker_set_sticker_id(stories_clickable_sticker_t *object, int value){
	object->sticker_id_ = value;
}

static int stories_clickable_sticker_get_sticker_id(stories_clickable_sticker_t *object){
	return object->sticker_id_;
}

static void stories_clickable_sticker_set_sticker_pack_id(stories_clickable_sticker_t *object, int value){
	object->sticker_pack_id_ = value;
}

static int stories_clickable_sticker_get_sticker_pack_id(stories_clickable_sticker_t *object){
	return object->sticker_pack_id_;
}

static void stories_clickable_sticker_set_app(stories_clickable_sticker_t *object, apps_app_min_t value){
	object->app_ = value;
}

static apps_app_min_t stories_clickable_sticker_get_app(stories_clickable_sticker_t *object){
	return object->app_;
}

static void stories_clickable_sticker_set_app_context(stories_clickable_sticker_t *object, const char * value){
	object->app_context_ = strdup(value);
}

static const char * stories_clickable_sticker_get_app_context(stories_clickable_sticker_t *object){
	return object->app_context_;
}

static void stories_clickable_sticker_set_has_new_interactions(stories_clickable_sticker_t *object, bool value){
	object->has_new_interactions_ = value;
}

static bool stories_clickable_sticker_get_has_new_interactions(stories_clickable_sticker_t *object){
	return object->has_new_interactions_;
}

static void stories_clickable_sticker_set_is_broadcast_notify_allowed(stories_clickable_sticker_t *object, bool value){
	object->is_broadcast_notify_allowed_ = value;
}

static bool stories_clickable_sticker_get_is_broadcast_notify_allowed(stories_clickable_sticker_t *object){
	return object->is_broadcast_notify_allowed_;
}

static void stories_clickable_sticker_set_situational_theme_id(stories_clickable_sticker_t *object, int value){
	object->situational_theme_id_ = value;
}

static int stories_clickable_sticker_get_situational_theme_id(stories_clickable_sticker_t *object){
	return object->situational_theme_id_;
}

static void stories_clickable_sticker_set_situational_app_url(stories_clickable_sticker_t *object, const char * value){
	object->situational_app_url_ = strdup(value);
}

static const char * stories_clickable_sticker_get_situational_app_url(stories_clickable_sticker_t *object){
	return object->situational_app_url_;
}

static void stories_clickable_stickers_set_clickable_stickers(stories_clickable_stickers_t *object, stories_clickable_sticker * value, int len){
int i;
	object->clickable_stickers_ = malloc(len * sizeof(stories_clickable_sticker) + 8);
	for(i=0;i<len);++i){
		object->clickable_stickers[i] = value[i];
	}
	//NULL-terminate array
	object->clickable_stickers[i] = NULL;
}

static stories_clickable_sticker * stories_clickable_stickers_get_clickable_stickers(stories_clickable_stickers_t *object){
	return object->clickable_stickers_;
}

static void stories_clickable_stickers_set_original_height(stories_clickable_stickers_t *object, int value){
	object->original_height_ = value;
}

static int stories_clickable_stickers_get_original_height(stories_clickable_stickers_t *object){
	return object->original_height_;
}

static void stories_clickable_stickers_set_original_width(stories_clickable_stickers_t *object, int value){
	object->original_width_ = value;
}

static int stories_clickable_stickers_get_original_width(stories_clickable_stickers_t *object){
	return object->original_width_;
}

static void stories_feed_item_set_type(stories_feed_item_t *object, const char * value){
	object->type_ = strdup(value);
}

static const char * stories_feed_item_get_type(stories_feed_item_t *object){
	return object->type_;
}

static void stories_feed_item_set_id(stories_feed_item_t *object, const char * value){
	object->id_ = strdup(value);
}

static const char * stories_feed_item_get_id(stories_feed_item_t *object){
	return object->id_;
}

static void stories_feed_item_set_stories(stories_feed_item_t *object, stories_story * value, int len){
int i;
	object->stories_ = malloc(len * sizeof(stories_story) + 8);
	for(i=0;i<len);++i){
		object->stories[i] = value[i];
	}
	//NULL-terminate array
	object->stories[i] = NULL;
}

static stories_story * stories_feed_item_get_stories(stories_feed_item_t *object){
	return object->stories_;
}

static void stories_feed_item_set_grouped(stories_feed_item_t *object, stories_feed_item * value, int len){
int i;
	object->grouped_ = malloc(len * sizeof(stories_feed_item) + 8);
	for(i=0;i<len);++i){
		object->grouped[i] = value[i];
	}
	//NULL-terminate array
	object->grouped[i] = NULL;
}

static stories_feed_item * stories_feed_item_get_grouped(stories_feed_item_t *object){
	return object->grouped_;
}

static void stories_feed_item_set_app(stories_feed_item_t *object, apps_app_min_t value){
	object->app_ = value;
}

static apps_app_min_t stories_feed_item_get_app(stories_feed_item_t *object){
	return object->app_;
}

static void stories_feed_item_set_promo_data(stories_feed_item_t *object, stories_promo_block_t value){
	object->promo_data_ = value;
}

static stories_promo_block_t stories_feed_item_get_promo_data(stories_feed_item_t *object){
	return object->promo_data_;
}

static void stories_feed_item_set_birthday_user_id(stories_feed_item_t *object, int value){
	object->birthday_user_id_ = value;
}

static int stories_feed_item_get_birthday_user_id(stories_feed_item_t *object){
	return object->birthday_user_id_;
}

static void stories_feed_item_set_track_code(stories_feed_item_t *object, const char * value){
	object->track_code_ = strdup(value);
}

static const char * stories_feed_item_get_track_code(stories_feed_item_t *object){
	return object->track_code_;
}

static void stories_feed_item_set_has_unseen(stories_feed_item_t *object, bool value){
	object->has_unseen_ = value;
}

static bool stories_feed_item_get_has_unseen(stories_feed_item_t *object){
	return object->has_unseen_;
}

static void stories_feed_item_set_name(stories_feed_item_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * stories_feed_item_get_name(stories_feed_item_t *object){
	return object->name_;
}

static void stories_promo_block_set_name(stories_promo_block_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * stories_promo_block_get_name(stories_promo_block_t *object){
	return object->name_;
}

static void stories_promo_block_set_photo_50(stories_promo_block_t *object, const char * value){
	object->photo_50_ = strdup(value);
}

static const char * stories_promo_block_get_photo_50(stories_promo_block_t *object){
	return object->photo_50_;
}

static void stories_promo_block_set_photo_100(stories_promo_block_t *object, const char * value){
	object->photo_100_ = strdup(value);
}

static const char * stories_promo_block_get_photo_100(stories_promo_block_t *object){
	return object->photo_100_;
}

static void stories_promo_block_set_not_animated(stories_promo_block_t *object, bool value){
	object->not_animated_ = value;
}

static bool stories_promo_block_get_not_animated(stories_promo_block_t *object){
	return object->not_animated_;
}

static void stories_replies_set_count(stories_replies_t *object, int value){
	object->count_ = value;
}

static int stories_replies_get_count(stories_replies_t *object){
	return object->count_;
}

static void stories_replies_set_new(stories_replies_t *object, int value){
	object->new_ = value;
}

static int stories_replies_get_new(stories_replies_t *object){
	return object->new_;
}

static void stories_stat_line_set_name(stories_stat_line_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * stories_stat_line_get_name(stories_stat_line_t *object){
	return object->name_;
}

static void stories_stat_line_set_counter(stories_stat_line_t *object, int value){
	object->counter_ = value;
}

static int stories_stat_line_get_counter(stories_stat_line_t *object){
	return object->counter_;
}

static void stories_stat_line_set_is_unavailable(stories_stat_line_t *object, bool value){
	object->is_unavailable_ = value;
}

static bool stories_stat_line_get_is_unavailable(stories_stat_line_t *object){
	return object->is_unavailable_;
}

static void stories_story_set_access_key(stories_story_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * stories_story_get_access_key(stories_story_t *object){
	return object->access_key_;
}

static void stories_story_set_can_comment(stories_story_t *object, base_bool_int_t value){
	object->can_comment_ = value;
}

static base_bool_int_t stories_story_get_can_comment(stories_story_t *object){
	return object->can_comment_;
}

static void stories_story_set_can_reply(stories_story_t *object, base_bool_int_t value){
	object->can_reply_ = value;
}

static base_bool_int_t stories_story_get_can_reply(stories_story_t *object){
	return object->can_reply_;
}

static void stories_story_set_can_see(stories_story_t *object, base_bool_int_t value){
	object->can_see_ = value;
}

static base_bool_int_t stories_story_get_can_see(stories_story_t *object){
	return object->can_see_;
}

static void stories_story_set_can_like(stories_story_t *object, bool value){
	object->can_like_ = value;
}

static bool stories_story_get_can_like(stories_story_t *object){
	return object->can_like_;
}

static void stories_story_set_can_share(stories_story_t *object, base_bool_int_t value){
	object->can_share_ = value;
}

static base_bool_int_t stories_story_get_can_share(stories_story_t *object){
	return object->can_share_;
}

static void stories_story_set_can_hide(stories_story_t *object, base_bool_int_t value){
	object->can_hide_ = value;
}

static base_bool_int_t stories_story_get_can_hide(stories_story_t *object){
	return object->can_hide_;
}

static void stories_story_set_date(stories_story_t *object, int value){
	object->date_ = value;
}

static int stories_story_get_date(stories_story_t *object){
	return object->date_;
}

static void stories_story_set_expires_at(stories_story_t *object, int value){
	object->expires_at_ = value;
}

static int stories_story_get_expires_at(stories_story_t *object){
	return object->expires_at_;
}

static void stories_story_set_id(stories_story_t *object, int value){
	object->id_ = value;
}

static int stories_story_get_id(stories_story_t *object){
	return object->id_;
}

static void stories_story_set_is_deleted(stories_story_t *object, bool value){
	object->is_deleted_ = value;
}

static bool stories_story_get_is_deleted(stories_story_t *object){
	return object->is_deleted_;
}

static void stories_story_set_is_expired(stories_story_t *object, bool value){
	object->is_expired_ = value;
}

static bool stories_story_get_is_expired(stories_story_t *object){
	return object->is_expired_;
}

static void stories_story_set_link(stories_story_t *object, stories_story_link_t value){
	object->link_ = value;
}

static stories_story_link_t stories_story_get_link(stories_story_t *object){
	return object->link_;
}

static void stories_story_set_owner_id(stories_story_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 stories_story_get_owner_id(stories_story_t *object){
	return object->owner_id_;
}

static void stories_story_set_parent_story(stories_story_t *object, stories_story_t value){
	object->parent_story_ = value;
}

static stories_story_t stories_story_get_parent_story(stories_story_t *object){
	return object->parent_story_;
}

static void stories_story_set_parent_story_access_key(stories_story_t *object, const char * value){
	object->parent_story_access_key_ = strdup(value);
}

static const char * stories_story_get_parent_story_access_key(stories_story_t *object){
	return object->parent_story_access_key_;
}

static void stories_story_set_parent_story_id(stories_story_t *object, int value){
	object->parent_story_id_ = value;
}

static int stories_story_get_parent_story_id(stories_story_t *object){
	return object->parent_story_id_;
}

static void stories_story_set_parent_story_owner_id(stories_story_t *object, int value){
	object->parent_story_owner_id_ = value;
}

static int stories_story_get_parent_story_owner_id(stories_story_t *object){
	return object->parent_story_owner_id_;
}

static void stories_story_set_photo(stories_story_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t stories_story_get_photo(stories_story_t *object){
	return object->photo_;
}

static void stories_story_set_replies(stories_story_t *object, stories_replies_t value){
	object->replies_ = value;
}

static stories_replies_t stories_story_get_replies(stories_story_t *object){
	return object->replies_;
}

static void stories_story_set_seen(stories_story_t *object, base_bool_int_t value){
	object->seen_ = value;
}

static base_bool_int_t stories_story_get_seen(stories_story_t *object){
	return object->seen_;
}

static void stories_story_set_type(stories_story_t *object, stories_story_type_t value){
	object->type_ = value;
}

static stories_story_type_t stories_story_get_type(stories_story_t *object){
	return object->type_;
}

static void stories_story_set_clickable_stickers(stories_story_t *object, stories_clickable_stickers_t value){
	object->clickable_stickers_ = value;
}

static stories_clickable_stickers_t stories_story_get_clickable_stickers(stories_story_t *object){
	return object->clickable_stickers_;
}

static void stories_story_set_video(stories_story_t *object, video_video_full_t value){
	object->video_ = value;
}

static video_video_full_t stories_story_get_video(stories_story_t *object){
	return object->video_;
}

static void stories_story_set_views(stories_story_t *object, int value){
	object->views_ = value;
}

static int stories_story_get_views(stories_story_t *object){
	return object->views_;
}

static void stories_story_set_can_ask(stories_story_t *object, base_bool_int_t value){
	object->can_ask_ = value;
}

static base_bool_int_t stories_story_get_can_ask(stories_story_t *object){
	return object->can_ask_;
}

static void stories_story_set_can_ask_anonymous(stories_story_t *object, base_bool_int_t value){
	object->can_ask_anonymous_ = value;
}

static base_bool_int_t stories_story_get_can_ask_anonymous(stories_story_t *object){
	return object->can_ask_anonymous_;
}

static void stories_story_set_narratives_count(stories_story_t *object, int value){
	object->narratives_count_ = value;
}

static int stories_story_get_narratives_count(stories_story_t *object){
	return object->narratives_count_;
}

static void stories_story_set_first_narrative_title(stories_story_t *object, const char * value){
	object->first_narrative_title_ = strdup(value);
}

static const char * stories_story_get_first_narrative_title(stories_story_t *object){
	return object->first_narrative_title_;
}

static void stories_story_set_birthday_wish_user_id(stories_story_t *object, int value){
	object->birthday_wish_user_id_ = value;
}

static int stories_story_get_birthday_wish_user_id(stories_story_t *object){
	return object->birthday_wish_user_id_;
}

static void stories_story_set_can_use_in_narrative(stories_story_t *object, bool value){
	object->can_use_in_narrative_ = value;
}

static bool stories_story_get_can_use_in_narrative(stories_story_t *object){
	return object->can_use_in_narrative_;
}

static void stories_story_link_set_text(stories_story_link_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * stories_story_link_get_text(stories_story_link_t *object){
	return object->text_;
}

static void stories_story_link_set_url(stories_story_link_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * stories_story_link_get_url(stories_story_link_t *object){
	return object->url_;
}

static void stories_story_link_set_link_url_target(stories_story_link_t *object, const char * value){
	object->link_url_target_ = strdup(value);
}

static const char * stories_story_link_get_link_url_target(stories_story_link_t *object){
	return object->link_url_target_;
}

static void stories_story_stats_set_answer(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->answer_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_answer(stories_story_stats_t *object){
	return object->answer_;
}

static void stories_story_stats_set_bans(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->bans_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_bans(stories_story_stats_t *object){
	return object->bans_;
}

static void stories_story_stats_set_open_link(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->open_link_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_open_link(stories_story_stats_t *object){
	return object->open_link_;
}

static void stories_story_stats_set_replies(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->replies_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_replies(stories_story_stats_t *object){
	return object->replies_;
}

static void stories_story_stats_set_shares(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->shares_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_shares(stories_story_stats_t *object){
	return object->shares_;
}

static void stories_story_stats_set_subscribers(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->subscribers_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_subscribers(stories_story_stats_t *object){
	return object->subscribers_;
}

static void stories_story_stats_set_views(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->views_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_views(stories_story_stats_t *object){
	return object->views_;
}

static void stories_story_stats_set_likes(stories_story_stats_t *object, stories_story_stats_stat_t value){
	object->likes_ = value;
}

static stories_story_stats_stat_t stories_story_stats_get_likes(stories_story_stats_t *object){
	return object->likes_;
}

static void stories_story_stats_stat_set_count(stories_story_stats_stat_t *object, int value){
	object->count_ = value;
}

static int stories_story_stats_stat_get_count(stories_story_stats_stat_t *object){
	return object->count_;
}

static void stories_story_stats_stat_set_state(stories_story_stats_stat_t *object, stories_story_stats_state_t value){
	object->state_ = value;
}

static stories_story_stats_state_t stories_story_stats_stat_get_state(stories_story_stats_stat_t *object){
	return object->state_;
}

static void stories_viewers_item_set_is_liked(stories_viewers_item_t *object, bool value){
	object->is_liked_ = value;
}

static bool stories_viewers_item_get_is_liked(stories_viewers_item_t *object){
	return object->is_liked_;
}

static void stories_viewers_item_set_user_id(stories_viewers_item_t *object, int64 value){
	object->user_id_ = value;
}

static int64 stories_viewers_item_get_user_id(stories_viewers_item_t *object){
	return object->user_id_;
}

static void stories_viewers_item_set_user(stories_viewers_item_t *object, users_user_full_t value){
	object->user_ = value;
}

static users_user_full_t stories_viewers_item_get_user(stories_viewers_item_t *object){
	return object->user_;
}

static void market_currency_set_id(market_currency_t *object, int value){
	object->id_ = value;
}

static int market_currency_get_id(market_currency_t *object){
	return object->id_;
}

static void market_currency_set_name(market_currency_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * market_currency_get_name(market_currency_t *object){
	return object->name_;
}

static void market_currency_set_title(market_currency_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * market_currency_get_title(market_currency_t *object){
	return object->title_;
}

static void market_market_album_set_id(market_market_album_t *object, int value){
	object->id_ = value;
}

static int market_market_album_get_id(market_market_album_t *object){
	return object->id_;
}

static void market_market_album_set_owner_id(market_market_album_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 market_market_album_get_owner_id(market_market_album_t *object){
	return object->owner_id_;
}

static void market_market_album_set_title(market_market_album_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * market_market_album_get_title(market_market_album_t *object){
	return object->title_;
}

static void market_market_album_set_count(market_market_album_t *object, int value){
	object->count_ = value;
}

static int market_market_album_get_count(market_market_album_t *object){
	return object->count_;
}

static void market_market_album_set_is_main(market_market_album_t *object, bool value){
	object->is_main_ = value;
}

static bool market_market_album_get_is_main(market_market_album_t *object){
	return object->is_main_;
}

static void market_market_album_set_is_hidden(market_market_album_t *object, bool value){
	object->is_hidden_ = value;
}

static bool market_market_album_get_is_hidden(market_market_album_t *object){
	return object->is_hidden_;
}

static void market_market_album_set_photo(market_market_album_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t market_market_album_get_photo(market_market_album_t *object){
	return object->photo_;
}

static void market_market_album_set_updated_time(market_market_album_t *object, int value){
	object->updated_time_ = value;
}

static int market_market_album_get_updated_time(market_market_album_t *object){
	return object->updated_time_;
}

static void market_market_category_nested_set_id(market_market_category_nested_t *object, int value){
	object->id_ = value;
}

static int market_market_category_nested_get_id(market_market_category_nested_t *object){
	return object->id_;
}

static void market_market_category_nested_set_name(market_market_category_nested_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * market_market_category_nested_get_name(market_market_category_nested_t *object){
	return object->name_;
}

static void market_market_category_nested_set_parent(market_market_category_nested_t *object, market_market_category_nested_t value){
	object->parent_ = value;
}

static market_market_category_nested_t market_market_category_nested_get_parent(market_market_category_nested_t *object){
	return object->parent_;
}

static void market_market_category_old_set_id(market_market_category_old_t *object, int value){
	object->id_ = value;
}

static int market_market_category_old_get_id(market_market_category_old_t *object){
	return object->id_;
}

static void market_market_category_old_set_name(market_market_category_old_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * market_market_category_old_get_name(market_market_category_old_t *object){
	return object->name_;
}

static void market_market_category_old_set_section(market_market_category_old_t *object, market_section_t value){
	object->section_ = value;
}

static market_section_t market_market_category_old_get_section(market_market_category_old_t *object){
	return object->section_;
}

static void market_market_category_tree_set_id(market_market_category_tree_t *object, int value){
	object->id_ = value;
}

static int market_market_category_tree_get_id(market_market_category_tree_t *object){
	return object->id_;
}

static void market_market_category_tree_set_name(market_market_category_tree_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * market_market_category_tree_get_name(market_market_category_tree_t *object){
	return object->name_;
}

static void market_market_category_tree_set_children(market_market_category_tree_t *object, market_market_category_tree * value, int len){
int i;
	object->children_ = malloc(len * sizeof(market_market_category_tree) + 8);
	for(i=0;i<len);++i){
		object->children[i] = value[i];
	}
	//NULL-terminate array
	object->children[i] = NULL;
}

static market_market_category_tree * market_market_category_tree_get_children(market_market_category_tree_t *object){
	return object->children_;
}

static void market_market_item_set_access_key(market_market_item_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * market_market_item_get_access_key(market_market_item_t *object){
	return object->access_key_;
}

static void market_market_item_set_availability(market_market_item_t *object, market_market_item_availability_t value){
	object->availability_ = value;
}

static market_market_item_availability_t market_market_item_get_availability(market_market_item_t *object){
	return object->availability_;
}

static void market_market_item_set_button_title(market_market_item_t *object, const char * value){
	object->button_title_ = strdup(value);
}

static const char * market_market_item_get_button_title(market_market_item_t *object){
	return object->button_title_;
}

static void market_market_item_set_category(market_market_item_t *object, market_market_category_t value){
	object->category_ = value;
}

static market_market_category_t market_market_item_get_category(market_market_item_t *object){
	return object->category_;
}

static void market_market_item_set_date(market_market_item_t *object, int value){
	object->date_ = value;
}

static int market_market_item_get_date(market_market_item_t *object){
	return object->date_;
}

static void market_market_item_set_description(market_market_item_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * market_market_item_get_description(market_market_item_t *object){
	return object->description_;
}

static void market_market_item_set_external_id(market_market_item_t *object, const char * value){
	object->external_id_ = strdup(value);
}

static const char * market_market_item_get_external_id(market_market_item_t *object){
	return object->external_id_;
}

static void market_market_item_set_id(market_market_item_t *object, int value){
	object->id_ = value;
}

static int market_market_item_get_id(market_market_item_t *object){
	return object->id_;
}

static void market_market_item_set_is_favorite(market_market_item_t *object, bool value){
	object->is_favorite_ = value;
}

static bool market_market_item_get_is_favorite(market_market_item_t *object){
	return object->is_favorite_;
}

static void market_market_item_set_owner_id(market_market_item_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 market_market_item_get_owner_id(market_market_item_t *object){
	return object->owner_id_;
}

static void market_market_item_set_price(market_market_item_t *object, market_price_t value){
	object->price_ = value;
}

static market_price_t market_market_item_get_price(market_market_item_t *object){
	return object->price_;
}

static void market_market_item_set_thumb_photo(market_market_item_t *object, const char * value){
	object->thumb_photo_ = strdup(value);
}

static const char * market_market_item_get_thumb_photo(market_market_item_t *object){
	return object->thumb_photo_;
}

static void market_market_item_set_title(market_market_item_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * market_market_item_get_title(market_market_item_t *object){
	return object->title_;
}

static void market_market_item_set_url(market_market_item_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * market_market_item_get_url(market_market_item_t *object){
	return object->url_;
}

static void market_market_item_set_variants_grouping_id(market_market_item_t *object, int value){
	object->variants_grouping_id_ = value;
}

static int market_market_item_get_variants_grouping_id(market_market_item_t *object){
	return object->variants_grouping_id_;
}

static void market_market_item_set_is_main_variant(market_market_item_t *object, bool value){
	object->is_main_variant_ = value;
}

static bool market_market_item_get_is_main_variant(market_market_item_t *object){
	return object->is_main_variant_;
}

static void market_market_item_set_sku(market_market_item_t *object, const char * value){
	object->sku_ = strdup(value);
}

static const char * market_market_item_get_sku(market_market_item_t *object){
	return object->sku_;
}

static void market_order_set_id(market_order_t *object, int value){
	object->id_ = value;
}

static int market_order_get_id(market_order_t *object){
	return object->id_;
}

static void market_order_set_group_id(market_order_t *object, int64 value){
	object->group_id_ = value;
}

static int64 market_order_get_group_id(market_order_t *object){
	return object->group_id_;
}

static void market_order_set_user_id(market_order_t *object, int64 value){
	object->user_id_ = value;
}

static int64 market_order_get_user_id(market_order_t *object){
	return object->user_id_;
}

static void market_order_set_display_order_id(market_order_t *object, const char * value){
	object->display_order_id_ = strdup(value);
}

static const char * market_order_get_display_order_id(market_order_t *object){
	return object->display_order_id_;
}

static void market_order_set_date(market_order_t *object, int value){
	object->date_ = value;
}

static int market_order_get_date(market_order_t *object){
	return object->date_;
}

static void market_order_set_status(market_order_t *object, int value){
	object->status_ = value;
}

static int market_order_get_status(market_order_t *object){
	return object->status_;
}

static void market_order_set_items_count(market_order_t *object, int value){
	object->items_count_ = value;
}

static int market_order_get_items_count(market_order_t *object){
	return object->items_count_;
}

static void market_order_set_track_number(market_order_t *object, const char * value){
	object->track_number_ = strdup(value);
}

static const char * market_order_get_track_number(market_order_t *object){
	return object->track_number_;
}

static void market_order_set_track_link(market_order_t *object, const char * value){
	object->track_link_ = strdup(value);
}

static const char * market_order_get_track_link(market_order_t *object){
	return object->track_link_;
}

static void market_order_set_comment(market_order_t *object, const char * value){
	object->comment_ = strdup(value);
}

static const char * market_order_get_comment(market_order_t *object){
	return object->comment_;
}

static void market_order_set_address(market_order_t *object, const char * value){
	object->address_ = strdup(value);
}

static const char * market_order_get_address(market_order_t *object){
	return object->address_;
}

static void market_order_set_merchant_comment(market_order_t *object, const char * value){
	object->merchant_comment_ = strdup(value);
}

static const char * market_order_get_merchant_comment(market_order_t *object){
	return object->merchant_comment_;
}

static void market_order_set_weight(market_order_t *object, int value){
	object->weight_ = value;
}

static int market_order_get_weight(market_order_t *object){
	return object->weight_;
}

static void market_order_set_total_price(market_order_t *object, market_price_t value){
	object->total_price_ = value;
}

static market_price_t market_order_get_total_price(market_order_t *object){
	return object->total_price_;
}

static void market_order_set_preview_order_items(market_order_t *object, market_order_item * value, int len){
int i;
	object->preview_order_items_ = malloc(len * sizeof(market_order_item) + 8);
	for(i=0;i<len);++i){
		object->preview_order_items[i] = value[i];
	}
	//NULL-terminate array
	object->preview_order_items[i] = NULL;
}

static market_order_item * market_order_get_preview_order_items(market_order_t *object){
	return object->preview_order_items_;
}

static void market_order_set_cancel_info(market_order_t *object, base_link_t value){
	object->cancel_info_ = value;
}

static base_link_t market_order_get_cancel_info(market_order_t *object){
	return object->cancel_info_;
}

static void market_order_item_set_owner_id(market_order_item_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 market_order_item_get_owner_id(market_order_item_t *object){
	return object->owner_id_;
}

static void market_order_item_set_item_id(market_order_item_t *object, int value){
	object->item_id_ = value;
}

static int market_order_item_get_item_id(market_order_item_t *object){
	return object->item_id_;
}

static void market_order_item_set_price(market_order_item_t *object, market_price_t value){
	object->price_ = value;
}

static market_price_t market_order_item_get_price(market_order_item_t *object){
	return object->price_;
}

static void market_order_item_set_quantity(market_order_item_t *object, int value){
	object->quantity_ = value;
}

static int market_order_item_get_quantity(market_order_item_t *object){
	return object->quantity_;
}

static void market_order_item_set_item(market_order_item_t *object, market_market_item_t value){
	object->item_ = value;
}

static market_market_item_t market_order_item_get_item(market_order_item_t *object){
	return object->item_;
}

static void market_order_item_set_title(market_order_item_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * market_order_item_get_title(market_order_item_t *object){
	return object->title_;
}

static void market_order_item_set_photo(market_order_item_t *object, photos_photo_t value){
	object->photo_ = value;
}

static photos_photo_t market_order_item_get_photo(market_order_item_t *object){
	return object->photo_;
}

static void market_order_item_set_variants(market_order_item_t *object, char * * value, int len){
int i;
	object->variants_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->variants[i] = value[i];
	}
	//NULL-terminate array
	object->variants[i] = NULL;
}

static char * * market_order_item_get_variants(market_order_item_t *object){
	return object->variants_;
}

static void market_price_set_amount(market_price_t *object, const char * value){
	object->amount_ = strdup(value);
}

static const char * market_price_get_amount(market_price_t *object){
	return object->amount_;
}

static void market_price_set_currency(market_price_t *object, market_currency_t value){
	object->currency_ = value;
}

static market_currency_t market_price_get_currency(market_price_t *object){
	return object->currency_;
}

static void market_price_set_discount_rate(market_price_t *object, int value){
	object->discount_rate_ = value;
}

static int market_price_get_discount_rate(market_price_t *object){
	return object->discount_rate_;
}

static void market_price_set_old_amount(market_price_t *object, const char * value){
	object->old_amount_ = strdup(value);
}

static const char * market_price_get_old_amount(market_price_t *object){
	return object->old_amount_;
}

static void market_price_set_text(market_price_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * market_price_get_text(market_price_t *object){
	return object->text_;
}

static void market_price_set_old_amount_text(market_price_t *object, const char * value){
	object->old_amount_text_ = strdup(value);
}

static const char * market_price_get_old_amount_text(market_price_t *object){
	return object->old_amount_text_;
}

static void market_section_set_id(market_section_t *object, int value){
	object->id_ = value;
}

static int market_section_get_id(market_section_t *object){
	return object->id_;
}

static void market_section_set_name(market_section_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * market_section_get_name(market_section_t *object){
	return object->name_;
}

static void widgets_comment_media_set_item_id(widgets_comment_media_t *object, int value){
	object->item_id_ = value;
}

static int widgets_comment_media_get_item_id(widgets_comment_media_t *object){
	return object->item_id_;
}

static void widgets_comment_media_set_owner_id(widgets_comment_media_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 widgets_comment_media_get_owner_id(widgets_comment_media_t *object){
	return object->owner_id_;
}

static void widgets_comment_media_set_thumb_src(widgets_comment_media_t *object, const char * value){
	object->thumb_src_ = strdup(value);
}

static const char * widgets_comment_media_get_thumb_src(widgets_comment_media_t *object){
	return object->thumb_src_;
}

static void widgets_comment_media_set_type(widgets_comment_media_t *object, widgets_comment_media_type_t value){
	object->type_ = value;
}

static widgets_comment_media_type_t widgets_comment_media_get_type(widgets_comment_media_t *object){
	return object->type_;
}

static void widgets_comment_replies_set_can_post(widgets_comment_replies_t *object, base_bool_int_t value){
	object->can_post_ = value;
}

static base_bool_int_t widgets_comment_replies_get_can_post(widgets_comment_replies_t *object){
	return object->can_post_;
}

static void widgets_comment_replies_set_count(widgets_comment_replies_t *object, int value){
	object->count_ = value;
}

static int widgets_comment_replies_get_count(widgets_comment_replies_t *object){
	return object->count_;
}

static void widgets_comment_replies_set_replies(widgets_comment_replies_t *object, widgets_comment_replies_item * value, int len){
int i;
	object->replies_ = malloc(len * sizeof(widgets_comment_replies_item) + 8);
	for(i=0;i<len);++i){
		object->replies[i] = value[i];
	}
	//NULL-terminate array
	object->replies[i] = NULL;
}

static widgets_comment_replies_item * widgets_comment_replies_get_replies(widgets_comment_replies_t *object){
	return object->replies_;
}

static void widgets_comment_replies_item_set_cid(widgets_comment_replies_item_t *object, int value){
	object->cid_ = value;
}

static int widgets_comment_replies_item_get_cid(widgets_comment_replies_item_t *object){
	return object->cid_;
}

static void widgets_comment_replies_item_set_date(widgets_comment_replies_item_t *object, int value){
	object->date_ = value;
}

static int widgets_comment_replies_item_get_date(widgets_comment_replies_item_t *object){
	return object->date_;
}

static void widgets_comment_replies_item_set_likes(widgets_comment_replies_item_t *object, widgets_widget_likes_t value){
	object->likes_ = value;
}

static widgets_widget_likes_t widgets_comment_replies_item_get_likes(widgets_comment_replies_item_t *object){
	return object->likes_;
}

static void widgets_comment_replies_item_set_text(widgets_comment_replies_item_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * widgets_comment_replies_item_get_text(widgets_comment_replies_item_t *object){
	return object->text_;
}

static void widgets_comment_replies_item_set_uid(widgets_comment_replies_item_t *object, int value){
	object->uid_ = value;
}

static int widgets_comment_replies_item_get_uid(widgets_comment_replies_item_t *object){
	return object->uid_;
}

static void widgets_comment_replies_item_set_user(widgets_comment_replies_item_t *object, users_user_full_t value){
	object->user_ = value;
}

static users_user_full_t widgets_comment_replies_item_get_user(widgets_comment_replies_item_t *object){
	return object->user_;
}

static void widgets_widget_comment_set_attachments(widgets_widget_comment_t *object, wall_comment_attachment * value, int len){
int i;
	object->attachments_ = malloc(len * sizeof(wall_comment_attachment) + 8);
	for(i=0;i<len);++i){
		object->attachments[i] = value[i];
	}
	//NULL-terminate array
	object->attachments[i] = NULL;
}

static wall_comment_attachment * widgets_widget_comment_get_attachments(widgets_widget_comment_t *object){
	return object->attachments_;
}

static void widgets_widget_comment_set_can_delete(widgets_widget_comment_t *object, base_bool_int_t value){
	object->can_delete_ = value;
}

static base_bool_int_t widgets_widget_comment_get_can_delete(widgets_widget_comment_t *object){
	return object->can_delete_;
}

static void widgets_widget_comment_set_comments(widgets_widget_comment_t *object, widgets_comment_replies_t value){
	object->comments_ = value;
}

static widgets_comment_replies_t widgets_widget_comment_get_comments(widgets_widget_comment_t *object){
	return object->comments_;
}

static void widgets_widget_comment_set_date(widgets_widget_comment_t *object, int value){
	object->date_ = value;
}

static int widgets_widget_comment_get_date(widgets_widget_comment_t *object){
	return object->date_;
}

static void widgets_widget_comment_set_from_id(widgets_widget_comment_t *object, int value){
	object->from_id_ = value;
}

static int widgets_widget_comment_get_from_id(widgets_widget_comment_t *object){
	return object->from_id_;
}

static void widgets_widget_comment_set_id(widgets_widget_comment_t *object, int value){
	object->id_ = value;
}

static int widgets_widget_comment_get_id(widgets_widget_comment_t *object){
	return object->id_;
}

static void widgets_widget_comment_set_likes(widgets_widget_comment_t *object, base_likes_info_t value){
	object->likes_ = value;
}

static base_likes_info_t widgets_widget_comment_get_likes(widgets_widget_comment_t *object){
	return object->likes_;
}

static void widgets_widget_comment_set_media(widgets_widget_comment_t *object, widgets_comment_media_t value){
	object->media_ = value;
}

static widgets_comment_media_t widgets_widget_comment_get_media(widgets_widget_comment_t *object){
	return object->media_;
}

static void widgets_widget_comment_set_post_source(widgets_widget_comment_t *object, wall_post_source_t value){
	object->post_source_ = value;
}

static wall_post_source_t widgets_widget_comment_get_post_source(widgets_widget_comment_t *object){
	return object->post_source_;
}

static void widgets_widget_comment_set_post_type(widgets_widget_comment_t *object, int value){
	object->post_type_ = value;
}

static int widgets_widget_comment_get_post_type(widgets_widget_comment_t *object){
	return object->post_type_;
}

static void widgets_widget_comment_set_reposts(widgets_widget_comment_t *object, base_reposts_info_t value){
	object->reposts_ = value;
}

static base_reposts_info_t widgets_widget_comment_get_reposts(widgets_widget_comment_t *object){
	return object->reposts_;
}

static void widgets_widget_comment_set_text(widgets_widget_comment_t *object, const char * value){
	object->text_ = strdup(value);
}

static const char * widgets_widget_comment_get_text(widgets_widget_comment_t *object){
	return object->text_;
}

static void widgets_widget_comment_set_to_id(widgets_widget_comment_t *object, int value){
	object->to_id_ = value;
}

static int widgets_widget_comment_get_to_id(widgets_widget_comment_t *object){
	return object->to_id_;
}

static void widgets_widget_comment_set_user(widgets_widget_comment_t *object, users_user_full_t value){
	object->user_ = value;
}

static users_user_full_t widgets_widget_comment_get_user(widgets_widget_comment_t *object){
	return object->user_;
}

static void widgets_widget_likes_set_count(widgets_widget_likes_t *object, int value){
	object->count_ = value;
}

static int widgets_widget_likes_get_count(widgets_widget_likes_t *object){
	return object->count_;
}

static void widgets_widget_page_set_comments(widgets_widget_page_t *object, base_object_count_t value){
	object->comments_ = value;
}

static base_object_count_t widgets_widget_page_get_comments(widgets_widget_page_t *object){
	return object->comments_;
}

static void widgets_widget_page_set_date(widgets_widget_page_t *object, int value){
	object->date_ = value;
}

static int widgets_widget_page_get_date(widgets_widget_page_t *object){
	return object->date_;
}

static void widgets_widget_page_set_description(widgets_widget_page_t *object, const char * value){
	object->description_ = strdup(value);
}

static const char * widgets_widget_page_get_description(widgets_widget_page_t *object){
	return object->description_;
}

static void widgets_widget_page_set_id(widgets_widget_page_t *object, int value){
	object->id_ = value;
}

static int widgets_widget_page_get_id(widgets_widget_page_t *object){
	return object->id_;
}

static void widgets_widget_page_set_likes(widgets_widget_page_t *object, base_object_count_t value){
	object->likes_ = value;
}

static base_object_count_t widgets_widget_page_get_likes(widgets_widget_page_t *object){
	return object->likes_;
}

static void widgets_widget_page_set_page_id(widgets_widget_page_t *object, const char * value){
	object->page_id_ = strdup(value);
}

static const char * widgets_widget_page_get_page_id(widgets_widget_page_t *object){
	return object->page_id_;
}

static void widgets_widget_page_set_photo(widgets_widget_page_t *object, const char * value){
	object->photo_ = strdup(value);
}

static const char * widgets_widget_page_get_photo(widgets_widget_page_t *object){
	return object->photo_;
}

static void widgets_widget_page_set_title(widgets_widget_page_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * widgets_widget_page_get_title(widgets_widget_page_t *object){
	return object->title_;
}

static void widgets_widget_page_set_url(widgets_widget_page_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * widgets_widget_page_get_url(widgets_widget_page_t *object){
	return object->url_;
}

static void docs_doc_set_id(docs_doc_t *object, int value){
	object->id_ = value;
}

static int docs_doc_get_id(docs_doc_t *object){
	return object->id_;
}

static void docs_doc_set_owner_id(docs_doc_t *object, int64 value){
	object->owner_id_ = value;
}

static int64 docs_doc_get_owner_id(docs_doc_t *object){
	return object->owner_id_;
}

static void docs_doc_set_title(docs_doc_t *object, const char * value){
	object->title_ = strdup(value);
}

static const char * docs_doc_get_title(docs_doc_t *object){
	return object->title_;
}

static void docs_doc_set_size(docs_doc_t *object, int value){
	object->size_ = value;
}

static int docs_doc_get_size(docs_doc_t *object){
	return object->size_;
}

static void docs_doc_set_ext(docs_doc_t *object, const char * value){
	object->ext_ = strdup(value);
}

static const char * docs_doc_get_ext(docs_doc_t *object){
	return object->ext_;
}

static void docs_doc_set_url(docs_doc_t *object, const char * value){
	object->url_ = strdup(value);
}

static const char * docs_doc_get_url(docs_doc_t *object){
	return object->url_;
}

static void docs_doc_set_date(docs_doc_t *object, int value){
	object->date_ = value;
}

static int docs_doc_get_date(docs_doc_t *object){
	return object->date_;
}

static void docs_doc_set_type(docs_doc_t *object, int value){
	object->type_ = value;
}

static int docs_doc_get_type(docs_doc_t *object){
	return object->type_;
}

static void docs_doc_set_preview(docs_doc_t *object, docs_doc_preview_t value){
	object->preview_ = value;
}

static docs_doc_preview_t docs_doc_get_preview(docs_doc_t *object){
	return object->preview_;
}

static void docs_doc_set_is_licensed(docs_doc_t *object, base_bool_int_t value){
	object->is_licensed_ = value;
}

static base_bool_int_t docs_doc_get_is_licensed(docs_doc_t *object){
	return object->is_licensed_;
}

static void docs_doc_set_access_key(docs_doc_t *object, const char * value){
	object->access_key_ = strdup(value);
}

static const char * docs_doc_get_access_key(docs_doc_t *object){
	return object->access_key_;
}

static void docs_doc_set_tags(docs_doc_t *object, char * * value, int len){
int i;
	object->tags_ = malloc(len * sizeof(char *) + 8);
	for(i=0;i<len);++i){
		object->tags[i] = value[i];
	}
	//NULL-terminate array
	object->tags[i] = NULL;
}

static char * * docs_doc_get_tags(docs_doc_t *object){
	return object->tags_;
}

static void docs_doc_preview_set_audio_msg(docs_doc_preview_t *object, docs_doc_preview_audio_msg_t value){
	object->audio_msg_ = value;
}

static docs_doc_preview_audio_msg_t docs_doc_preview_get_audio_msg(docs_doc_preview_t *object){
	return object->audio_msg_;
}

static void docs_doc_preview_set_graffiti(docs_doc_preview_t *object, docs_doc_preview_graffiti_t value){
	object->graffiti_ = value;
}

static docs_doc_preview_graffiti_t docs_doc_preview_get_graffiti(docs_doc_preview_t *object){
	return object->graffiti_;
}

static void docs_doc_preview_set_photo(docs_doc_preview_t *object, docs_doc_preview_photo_t value){
	object->photo_ = value;
}

static docs_doc_preview_photo_t docs_doc_preview_get_photo(docs_doc_preview_t *object){
	return object->photo_;
}

static void docs_doc_preview_set_video(docs_doc_preview_t *object, docs_doc_preview_video_t value){
	object->video_ = value;
}

static docs_doc_preview_video_t docs_doc_preview_get_video(docs_doc_preview_t *object){
	return object->video_;
}

static void docs_doc_preview_audio_msg_set_duration(docs_doc_preview_audio_msg_t *object, int value){
	object->duration_ = value;
}

static int docs_doc_preview_audio_msg_get_duration(docs_doc_preview_audio_msg_t *object){
	return object->duration_;
}

static void docs_doc_preview_audio_msg_set_link_mp3(docs_doc_preview_audio_msg_t *object, const char * value){
	object->link_mp3_ = strdup(value);
}

static const char * docs_doc_preview_audio_msg_get_link_mp3(docs_doc_preview_audio_msg_t *object){
	return object->link_mp3_;
}

static void docs_doc_preview_audio_msg_set_link_ogg(docs_doc_preview_audio_msg_t *object, const char * value){
	object->link_ogg_ = strdup(value);
}

static const char * docs_doc_preview_audio_msg_get_link_ogg(docs_doc_preview_audio_msg_t *object){
	return object->link_ogg_;
}

static void docs_doc_preview_audio_msg_set_waveform(docs_doc_preview_audio_msg_t *object, int * value, int len){
int i;
	object->waveform_ = malloc(len * sizeof(int) + 8);
	for(i=0;i<len);++i){
		object->waveform[i] = value[i];
	}
	//NULL-terminate array
	object->waveform[i] = NULL;
}

static int * docs_doc_preview_audio_msg_get_waveform(docs_doc_preview_audio_msg_t *object){
	return object->waveform_;
}

static void docs_doc_preview_graffiti_set_src(docs_doc_preview_graffiti_t *object, const char * value){
	object->src_ = strdup(value);
}

static const char * docs_doc_preview_graffiti_get_src(docs_doc_preview_graffiti_t *object){
	return object->src_;
}

static void docs_doc_preview_graffiti_set_width(docs_doc_preview_graffiti_t *object, int value){
	object->width_ = value;
}

static int docs_doc_preview_graffiti_get_width(docs_doc_preview_graffiti_t *object){
	return object->width_;
}

static void docs_doc_preview_graffiti_set_height(docs_doc_preview_graffiti_t *object, int value){
	object->height_ = value;
}

static int docs_doc_preview_graffiti_get_height(docs_doc_preview_graffiti_t *object){
	return object->height_;
}

static void docs_doc_preview_photo_set_sizes(docs_doc_preview_photo_t *object, docs_doc_preview_photo_sizes * value, int len){
int i;
	object->sizes_ = malloc(len * sizeof(docs_doc_preview_photo_sizes) + 8);
	for(i=0;i<len);++i){
		object->sizes[i] = value[i];
	}
	//NULL-terminate array
	object->sizes[i] = NULL;
}

static docs_doc_preview_photo_sizes * docs_doc_preview_photo_get_sizes(docs_doc_preview_photo_t *object){
	return object->sizes_;
}

static void docs_doc_preview_photo_sizes_set_src(docs_doc_preview_photo_sizes_t *object, const char * value){
	object->src_ = strdup(value);
}

static const char * docs_doc_preview_photo_sizes_get_src(docs_doc_preview_photo_sizes_t *object){
	return object->src_;
}

static void docs_doc_preview_photo_sizes_set_width(docs_doc_preview_photo_sizes_t *object, int value){
	object->width_ = value;
}

static int docs_doc_preview_photo_sizes_get_width(docs_doc_preview_photo_sizes_t *object){
	return object->width_;
}

static void docs_doc_preview_photo_sizes_set_height(docs_doc_preview_photo_sizes_t *object, int value){
	object->height_ = value;
}

static int docs_doc_preview_photo_sizes_get_height(docs_doc_preview_photo_sizes_t *object){
	return object->height_;
}

static void docs_doc_preview_photo_sizes_set_type(docs_doc_preview_photo_sizes_t *object, photos_photo_sizes_type_t value){
	object->type_ = value;
}

static photos_photo_sizes_type_t docs_doc_preview_photo_sizes_get_type(docs_doc_preview_photo_sizes_t *object){
	return object->type_;
}

static void docs_doc_preview_video_set_src(docs_doc_preview_video_t *object, const char * value){
	object->src_ = strdup(value);
}

static const char * docs_doc_preview_video_get_src(docs_doc_preview_video_t *object){
	return object->src_;
}

static void docs_doc_preview_video_set_width(docs_doc_preview_video_t *object, int value){
	object->width_ = value;
}

static int docs_doc_preview_video_get_width(docs_doc_preview_video_t *object){
	return object->width_;
}

static void docs_doc_preview_video_set_height(docs_doc_preview_video_t *object, int value){
	object->height_ = value;
}

static int docs_doc_preview_video_get_height(docs_doc_preview_video_t *object){
	return object->height_;
}

static void docs_doc_preview_video_set_file_size(docs_doc_preview_video_t *object, int value){
	object->file_size_ = value;
}

static int docs_doc_preview_video_get_file_size(docs_doc_preview_video_t *object){
	return object->file_size_;
}

static void docs_doc_types_set_id(docs_doc_types_t *object, int value){
	object->id_ = value;
}

static int docs_doc_types_get_id(docs_doc_types_t *object){
	return object->id_;
}

static void docs_doc_types_set_name(docs_doc_types_t *object, const char * value){
	object->name_ = strdup(value);
}

static const char * docs_doc_types_get_name(docs_doc_types_t *object){
	return object->name_;
}

static void docs_doc_types_set_count(docs_doc_types_t *object, int value){
	object->count_ = value;
}

static int docs_doc_types_get_count(docs_doc_types_t *object){
	return object->count_;
}

#endif //VK_SETTERS_H
