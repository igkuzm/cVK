struct groups_address{
	char * additional_address; //Additional address to the place (6 floor, left door)
	char * address; //String address to the place (Nevsky, 28)
	int city_id; //City id of address
	int country_id; //Country id of address
	int distance; //Distance from the point
	int id; //Address id
	int metro_station_id; //Metro id of address
	char * phone; //Address phone
	int time_offset; //Time offset int minutes from utc time
	char * title; //Title of the place (Zinger, etc)
	int place_id; 
}
struct groups_address_timetable{
}
struct groups_address_timetable_day{
	int break_close_time; //Close time of the break in minutes
	int break_open_time; //Start time of the break in minutes
	int close_time; //Close time in minutes
	int open_time; //Open time in minutes
}
struct groups_address_work_info_status{
}
struct groups_addresses_info{
	int main_address_id; //Main address id for group
}
struct groups_ban_info{
	int admin_id; //Administrator ID
	char * comment; //Comment for a ban
	int date; //Date when user has been added to blacklist in Unixtime
	int end_date; //Date when user will be removed from blacklist in Unixtime
}
struct groups_ban_info_reason{
}
struct groups_banned_item{
}
struct groups_callback_server{
	int id; 
	char * title; 
	int creator_id; 
	char * url; 
	char * secret_key; 
	char * status; 
}
struct groups_callback_settings{
	char * api_version; //API version used for the events
}
struct groups_contacts_item{
	int user_id; //User ID
	char * desc; //Contact description
	char * phone; //Contact phone
	char * email; //Contact email
}
struct groups_counters_group{
	int addresses; //Addresses number
	int albums; //Photo albums number
	int audios; //Audios number
	int audio_playlists; //Audio playlists number
	int docs; //Docs number
	int market; //Market items number
	int photos; //Photos number
	int topics; //Topics number
	int videos; //Videos number
	int market_services; //Market services number
	int podcasts; //Podcasts number
	int articles; //Articles number
	int narratives; //Narratives number
	int clips; //Clips number
	int clips_followers; //Clips followers number
}
struct groups_cover{
}
struct groups_fields{
}
struct groups_filter{
}
struct groups_group{
	int id; //Community ID
	char * name; //Community name
	char * screen_name; //Domain of the community page
	int start_date; //Start date in Unixtime format
	int finish_date; //Finish date in Unixtime format
	char * deactivated; //Information whether community is banned
	char * photo_50; //URL of square photo of the community with 50 pixels in width
	char * photo_100; //URL of square photo of the community with 100 pixels in width
	char * photo_200; //URL of square photo of the community with 200 pixels in width
	char * photo_200_orig; //URL of square photo of the community with 200 pixels in width original
	char * photo_400; //URL of square photo of the community with 400 pixels in width
	char * photo_400_orig; //URL of square photo of the community with 400 pixels in width original
	char * photo_max; //URL of square photo of the community with max pixels in width
	char * photo_max_orig; //URL of square photo of the community with max pixels in width original
	char * est_date; //Established date
	char * public_date_label; //Public date label
}
struct groups_group_access{
}
struct groups_group_admin_level{
}
struct groups_group_age_limits{
}
struct groups_group_attach{
	int id; //group ID
	char * text; //text of attach
	char * status; //activity or category of group
	int size; //size of group
}
struct groups_group_audio{
}
struct groups_group_ban_info{
	char * comment; //Ban comment
	int end_date; //End date of ban in Unixtime
}
struct groups_group_category{
	int id; //Category ID
	char * name; //Category name
}
struct groups_group_category_full{
	int id; //Category ID
	char * name; //Category name
	int page_count; //Pages number
}
struct groups_group_category_type{
	int id; 
	char * name; 
}
struct groups_group_docs{
}
struct groups_group_full{
}
struct groups_group_full_age_limits{
}
struct groups_group_full_member_status{
}
struct groups_group_full_section{
}
struct groups_group_is_closed{
}
struct groups_group_market_currency{
}
struct groups_group_photos{
}
struct groups_group_public_category_list{
	int id; 
	char * name; 
}
struct groups_group_role{
}
struct groups_group_subject{
}
struct groups_group_suggested_privacy{
}
struct groups_group_tag{
	int id; 
	char * name; 
	char * color; 
	int uses; 
}
struct groups_group_topics{
}
struct groups_group_type{
}
struct groups_group_video{
}
struct groups_group_wall{
}
struct groups_group_wiki{
}
struct groups_groups_array{
	int count; //Communities number
}
struct groups_links_item{
	char * name; //Link title
	char * desc; //Link description
	int id; //Link ID
	char * photo_100; //URL of square image of the link with 100 pixels in width
	char * photo_50; //URL of square image of the link with 50 pixels in width
	char * url; //Link URL
}
struct groups_live_covers{
}
struct groups_long_poll_events{
}
struct groups_long_poll_server{
	char * key; //Long Poll key
	char * server; //Long Poll server address
	char * ts; //Number of the last event
}
struct groups_long_poll_settings{
	char * api_version; //API version used for the events
}
struct groups_market_info{
	char * type; //Market type
	int contact_id; //Contact person ID
	char * currency_text; //Currency name
	int main_album_id; //Main market album ID
	char * price_max; //Maximum price
	char * price_min; //Minimum price
}
struct groups_market_state{
}
struct groups_member_role{
	int id; //User ID
}
struct groups_member_role_permission{
}
struct groups_member_role_status{
}
struct groups_member_status{
	int user_id; //User ID
}
struct groups_member_status_full{
	int user_id; //User ID
}
struct groups_online_status{
	int minutes; //Estimated time of answer (for status = answer_mark)
}
struct groups_online_status_type{
}
struct groups_owner_xtr_ban_info{
}
struct groups_owner_xtr_ban_info_type{
}
struct groups_photo_size{
	int height; //Image height
	int width; //Image width
}
struct groups_role_options{
}
struct groups_sections_list_item{
}
struct groups_settings_twitter{
	char * status; 
	char * name; 
}
struct groups_subject_item{
	int id; //Subject ID
	char * name; //Subject title
}
struct groups_token_permission_setting{
	char * name; 
	int setting; 
}
struct groups_user_xtr_role{
}
struct store_product{
	int id; //Id of the product
	char * type; //Product type
	int purchase_date; //Date (Unix time) when the product was purchased
	char * title; //Title of the product
	char * subtitle; //Subtitle of the product
	char * payment_region; 
}
struct store_product_icon{
}
struct store_stickers_keyword{
}
struct store_stickers_keyword_sticker{
	int pack_id; //Pack id
	int sticker_id; //Sticker id
}
struct store_stickers_keyword_stickers{
}
struct oauth_error{
	char * error; //Error type
	char * error_description; //Error description
	char * redirect_uri; //URI for validation
}
struct gifts_gift{
	int date; //Date when gist has been sent in Unixtime
	int from_id; //Gift sender ID
	char * gift_hash; //Hash
	int id; //Gift ID
	char * message; //Comment text
}
struct gifts_gift_privacy{
}
struct gifts_layout{
	int id; //Gift ID
	char * thumb_512; //URL of the preview image with 512 px in width
	char * thumb_256; //URL of the preview image with 256 px in width
	char * thumb_48; //URL of the preview image with 48 px in width
	char * thumb_96; //URL of the preview image with 96 px in width
	int stickers_product_id; //ID of the sticker pack, if the gift is representing one
	char * build_id; //ID of the build of constructor gift
	char * keywords; //Keywords used for search
}
struct utils_domain_resolved{
	int object_id; //Object ID
	int group_id; //Group ID
}
struct utils_domain_resolved_type{
}
struct utils_last_shortened_link{
	char * access_key; //Access key for private stats
	char * key; //Link key (characters after vk.cc/)
	char * short_url; //Short link URL
	int timestamp; //Creation time in Unixtime
	char * url; //Full URL
	int views; //Total views number
}
struct utils_link_checked{
	char * link; //Link URL
}
struct utils_link_checked_status{
}
struct utils_link_stats{
	char * key; //Link key (characters after vk.cc/)
}
struct utils_link_stats_extended{
	char * key; //Link key (characters after vk.cc/)
}
struct utils_short_link{
	char * access_key; //Access key for private stats
	char * key; //Link key (characters after vk.cc/)
	char * short_url; //Short link URL
	char * url; //Full URL
}
struct utils_stats{
	int timestamp; //Start time
	int views; //Total views number
}
struct utils_stats_city{
	int city_id; //City ID
	int views; //Views number
}
struct utils_stats_country{
	int country_id; //Country ID
	int views; //Views number
}
struct utils_stats_extended{
	int timestamp; //Start time
	int views; //Total views number
}
struct utils_stats_sex_age{
	char * age_range; //Age denotation
	int female; // Views by female users
	int male; // Views by male users
}
struct polls_answer{
	int id; //Answer ID
	char * text; //Answer text
	int votes; //Votes number
}
struct polls_background{
	int angle; //Gradient angle with 0 on positive X axis
	char * color; //Hex color code without #
	int height; //Original height of pattern tile
	int id; 
	char * name; 
	char * type; 
	int width; //Original with of pattern tile
}
struct polls_friend{
	int id; 
}
struct polls_poll{
	int answer_id; //Current user's answer ID
	int end_date; 
	char * embed_hash; 
	int created; //Date when poll has been created in Unixtime
	int id; //Poll ID
	int owner_id; //Poll owner's ID
	int author_id; //Poll author's ID
	char * question; //Poll question
	int votes; //Votes number
}
struct polls_poll_anonymous{
}
struct polls_voters{
	int answer_id; //Answer ID
}
struct polls_voters_users{
	int count; //Votes number
}
struct notes_note{
	int read_comments; 
	int comments; //Comments number
	int date; //Date when the note has been created in Unixtime
	int id; //Note ID
	int owner_id; //Note owner's ID
	char * text; //Note text
	char * text_wiki; //Note text in wiki format
	char * title; //Note title
	char * view_url; //URL of the page with note preview
}
struct notes_note_comment{
	int date; //Date when the comment has beed added in Unixtime
	int id; //Comment ID
	char * message; //Comment text
	int nid; //Note ID
	int oid; //Note ID
	int reply_to; //ID of replied comment 
	int uid; //Comment author's ID
}
struct video_live_info{
}
struct video_live_settings{
	int max_duration; //Max possible time for rewind
}
struct video_save_result{
	char * access_key; //Video access key
	char * description; //Video description
	int owner_id; //Video owner ID
	char * title; //Video title
	char * upload_url; //URL for the video uploading
	int video_id; //Video ID
}
struct video_video{
	char * access_key; //Video access key
	int adding_date; //Date when the video has been added in Unixtime
	int comments; //Number of comments
	int date; //Date when video has been uploaded in Unixtime
	char * description; //Video description
	int duration; //Video duration in seconds
	int width; //Video width
	int height; //Video height
	int id; //Video ID
	int owner_id; //Video owner ID
	int user_id; //Id of the user who uploaded the video if it was uploaded to a group by member
	char * title; //Video title
	char * player; //Video embed URL
	char * track_code; 
	char * type; 
	int views; //Number of views
	int local_views; //If video is external, number of views on vk
	int content_restricted; //Restriction code
	char * content_restricted_message; //Restriction text
	int balance; //Live donations balance
	char * live_status; //Live stream status
	int live_start_time; //Date in Unixtime when the live stream is scheduled to start by the author
	int spectators; //Number of spectators of the stream
	char * platform; //External platform
}
struct video_video_album{
	int id; //Album ID
	int owner_id; //Album owner's ID
	char * title; //Album title
}
struct video_video_album_full{
}
struct video_video_files{
	char * external; //URL of the external player
	char * mp4_144; //URL of the mpeg4 file with 144p quality
	char * mp4_240; //URL of the mpeg4 file with 240p quality
	char * mp4_360; //URL of the mpeg4 file with 360p quality
	char * mp4_480; //URL of the mpeg4 file with 480p quality
	char * mp4_720; //URL of the mpeg4 file with 720p quality
	char * mp4_1080; //URL of the mpeg4 file with 1080p quality
	char * mp4_1440; //URL of the mpeg4 file with 2K quality
	char * mp4_2160; //URL of the mpeg4 file with 4K quality
	char * flv_320; //URL of the flv file with 320p quality
}
struct video_video_full{
}
struct video_video_image{
}
struct adsweb_getAdCategories_response_categories_category{
	int id; 
	char * name; 
}
struct adsweb_getAdUnits_response_ad_units_ad_unit{
	int id; 
	int site_id; 
	char * name; 
}
struct adsweb_getFraudHistory_response_entries_entry{
	int site_id; 
	char * day; 
}
struct adsweb_getSites_response_sites_site{
	int id; 
	char * status_user; 
	char * status_moder; 
	char * domains; 
}
struct adsweb_getStatistics_response_items_item{
	int site_id; 
	int ad_unit_id; 
	int overall_count; 
	int months_count; 
	char * month_min; 
	char * month_max; 
	int days_count; 
	char * day_min; 
	char * day_max; 
	int hours_count; 
	char * hour_min; 
	char * hour_max; 
}
struct appWidgets_photo{
	char * id; //Image ID
}
struct appWidgets_photos{
	int count; 
}
struct prettyCards_prettyCard{
	char * button_text; //Button text in current language
	char * card_id; //Card ID (long int returned as string)
	char * link_url; //Link URL
	char * photo; //Photo ID (format "<owner_id>_<media_id>")
	char * price; //Price if set (decimal number returned as string)
	char * price_old; //Old price if set (decimal number returned as string)
	char * title; //Title
}
struct prettyCards_prettyCardOrError{
}
struct owner_state{
	int state; 
	char * description; //wiki text to describe user state
}
struct orders_amount{
	char * currency; //Currency name
}
struct orders_amount_item{
	char * description; //Amount description
	char * votes; //Votes number
}
struct orders_order{
	char * amount; //Amount
	char * app_order_id; //App order ID
	char * cancel_transaction_id; //Cancel transaction ID
	char * date; //Date of creation in Unixtime
	char * id; //Order ID
	char * item; //Order item
	char * receiver_id; //Receiver ID
	char * status; //Order status
	char * transaction_id; //Transaction ID
	char * user_id; //User ID
}
struct orders_subscription{
	char * cancel_reason; //Cancel reason
	int create_time; //Date of creation in Unixtime
	int id; //Subscription ID
	char * item_id; //Subscription order item
	int next_bill_time; //Date of next bill in Unixtime
	int expire_time; //Subscription expiration time in Unixtime
	int period; //Subscription period
	int period_start_time; //Date of last period start in Unixtime
	int price; //Subscription price
	char * title; //Subscription name
	int app_id; //Subscription's application id
	char * application_name; //Subscription's application name
	char * photo_url; //Item photo image url
	char * status; //Subscription status
	int trial_expire_time; //Date of trial expire in Unixtime
	int update_time; //Date of last change in Unixtime
}
struct database_city{
}
struct database_city_by_id{
}
struct database_faculty{
	int id; //Faculty ID
	char * title; //Faculty title
}
struct database_region{
	int id; //Region ID
	char * title; //Region title
}
struct database_school{
	int id; //School ID
	char * title; //School title
}
struct database_station{
	int city_id; //City ID
	char * color; //Hex color code without #
	int id; //Station ID
	char * name; //Station name
}
struct database_university{
	int id; //University ID
	char * title; //University title
}
struct status_status{
	char * text; //Status text
}
struct apps_app{
}
struct apps_app_leaderboard_type{
}
struct apps_app_min{
	int id; //Application ID
	char * title; //Application title
	int author_owner_id; //Application author's ID
	char * icon_139; //URL of the app icon with 139 px in width
	char * icon_150; //URL of the app icon with 150 px in width
	char * icon_278; //URL of the app icon with 278 px in width
	char * icon_576; //URL of the app icon with 576 px in width
	char * background_loader_color; //Hex color code without hash sign
	char * loader_icon; //SVG data
	char * icon_75; //URL of the app icon with 75 px in width
}
struct apps_app_type{
}
struct apps_catalog_list{
	int count; //Total number
}
struct apps_leaderboard{
	int level; //Level
	int points; //Points number
	int score; //Score number
	int user_id; //User ID
}
struct apps_scope{
	char * name; //Scope name
	char * title; //Scope title
}
struct pages_privacy_settings{
}
struct pages_wikipage{
	int creator_id; //Page creator ID
	char * creator_name; //Page creator name
	int editor_id; //Last editor ID
	char * editor_name; //Last editor name
	int group_id; //Community ID
	int id; //Page ID
	char * title; //Page title
	int views; //Views number
}
struct pages_wikipage_full{
	int created; //Date when the page has been created in Unixtime
	int creator_id; //Page creator ID
	int edited; //Date when the page has been edited in Unixtime
	int editor_id; //Last editor ID
	int group_id; //Community ID
	char * html; //Page content, HTML
	int id; //Page ID
	char * source; //Page content, wiki
	char * title; //Page title
	char * view_url; //URL of the page preview
	int views; //Views number
	char * url; //URL
	char * parent; //Parent
	char * parent2; //Parent2
	int owner_id; //Owner ID
}
struct pages_wikipage_history{
	int id; //Version ID
	int length; //Page size in bytes
	int date; //Date when the page has been edited in Unixtime
	int editor_id; //Last editor ID
	char * editor_name; //Last editor name
}
struct stats_activity{
	int comments; //Comments number
	int copies; //Reposts number
	int hidden; //Hidden from news count
	int likes; //Likes number
	int subscribed; //New subscribers count
	int unsubscribed; //Unsubscribed count
}
struct stats_city{
	int count; //Visitors number
	char * name; //City name
	int value; //City ID
}
struct stats_country{
	char * code; //Country code
	int count; //Visitors number
	char * name; //Country name
	int value; //Country ID
}
struct stats_period{
	int period_from; //Unix timestamp
	int period_to; //Unix timestamp
}
struct stats_reach{
	int mobile_reach; //Reach count from mobile devices
	int reach; //Reach count
	int reach_subscribers; //Subscribers reach count
}
struct stats_sex_age{
	int count; //Visitors number
	char * value; //Sex/age value
	int reach; 
	int reach_subscribers; 
	int count_subscribers; 
}
struct stats_views{
	int mobile_views; //Number of views from mobile devices
	int views; //Views number
	int visitors; //Visitors number
}
struct stats_wallpost_stat{
	int post_id; 
	int hide; //Hidings number
	int join_group; //People have joined the group
	int links; //Link clickthrough
	int reach_subscribers; //Subscribers reach
	int reach_subscribers_count; 
	int reach_total; //Total reach
	int reach_total_count; 
	int reach_viral; 
	int reach_ads; 
	int report; //Reports number
	int to_group; //Clickthrough to community
	int unsubscribe; //Unsubscribed members
}
struct fave_bookmark{
	int added_date; //Timestamp, when this item was bookmarked
}
struct fave_bookmark_type{
}
struct fave_page{
	char * description; //Some info about user or group
	int updated_date; //Timestamp, when this page was bookmarked
}
struct fave_page_type{
}
struct fave_tag{
	int id; //Tag id
	char * name; //Tag name
}
struct search_hint{
	char * description; //Object description
}
struct search_hint_section{
}
struct search_hint_type{
}
struct leadForms_answer{
	char * key; 
}
struct leadForms_answer_item{
	char * key; 
	char * value; 
}
struct leadForms_form{
	int form_id; 
	int group_id; 
	char * photo; 
	char * name; 
	char * title; 
	char * description; 
	char * confirmation; 
	char * site_link_url; 
	char * policy_link_url; 
	int leads_count; 
	char * pixel_code; 
	int once_per_user; 
	char * notify_admins; 
	char * notify_emails; 
	char * url; 
}
struct leadForms_lead{
	int lead_id; 
	int user_id; 
	int date; 
	int ad_id; 
}
struct leadForms_question_item{
	char * key; 
	char * type; 
	char * label; 
}
struct leadForms_question_item_option{
	char * key; 
	char * label; 
}
struct photos_image{
	int height; //Height of the photo in px.
	char * url; //Photo URL.
	int width; //Width of the photo in px.
}
struct photos_image_type{
}
struct photos_photo{
	char * access_key; //Access key for the photo
	int album_id; //Album ID
	int date; //Date when uploaded
	int height; //Original photo height
	int id; //Photo ID
	int owner_id; //Photo owner's ID
	char * photo_256; //URL of image with 2560 px width
	char * place; 
	int post_id; //Post ID
	char * text; //Photo caption
	int user_id; //ID of the user who have uploaded the photo
	int width; //Original photo width
}
struct photos_photo_album{
	int created; //Date when the album has been created in Unixtime
	char * description; //Photo album description
	int id; //Photo album ID
	int owner_id; //Album owner's ID
	int size; //Photos number
	char * title; //Photo album title
	int updated; //Date when the album has been updated last time in Unixtime
}
struct photos_photo_album_full{
	int created; //Date when the album has been created in Unixtime
	char * description; //Photo album description
	int id; //Photo album ID
	int owner_id; //Album owner's ID
	int size; //Photos number
	int thumb_id; //Thumb photo ID
	char * thumb_src; //URL of the thumb image
	char * title; //Photo album title
	int updated; //Date when the album has been updated last time in Unixtime
}
struct photos_photo_falseable{
}
struct photos_photo_full_xtr_real_offset{
	char * access_key; //Access key for the photo
	int album_id; //Album ID
	int date; //Date when uploaded
	int height; //Original photo height
	int id; //Photo ID
	int owner_id; //Photo owner's ID
	char * photo_1280; //URL of image with 1280 px width
	char * photo_130; //URL of image with 130 px width
	char * photo_2560; //URL of image with 2560 px width
	char * photo_604; //URL of image with 604 px width
	char * photo_75; //URL of image with 75 px width
	char * photo_807; //URL of image with 807 px width
	int post_id; //Post ID
	int real_offset; //Real position of the photo
	char * text; //Photo caption
	int user_id; //ID of the user who have uploaded the photo
	int width; //Original photo width
}
struct photos_photo_sizes{
	int height; //Height in px
	char * url; //URL of the image
	char * src; //URL of the image
	int width; //Width in px
}
struct photos_photo_sizes_type{
}
struct photos_photo_tag{
	int date; //Date when tag has been added in Unixtime
	int id; //Tag ID
	int placer_id; //ID of the tag creator
	char * tagged_name; //Tag description
	char * description; //Tagged description.
	int user_id; //Tagged user ID
}
struct photos_photo_upload{
	int album_id; //Album ID
	char * upload_url; //URL to upload photo
	char * fallback_upload_url; //Fallback URL if upload_url returned error
	int user_id; //User ID
	int group_id; //Group ID
}
struct photos_photo_xtr_real_offset{
	char * access_key; //Access key for the photo
	int album_id; //Album ID
	int date; //Date when uploaded
	int height; //Original photo height
	int id; //Photo ID
	int owner_id; //Photo owner's ID
	char * photo_1280; //URL of image with 1280 px width
	char * photo_130; //URL of image with 130 px width
	char * photo_2560; //URL of image with 2560 px width
	char * photo_604; //URL of image with 604 px width
	char * photo_75; //URL of image with 75 px width
	char * photo_807; //URL of image with 807 px width
	int post_id; //Post ID
	int real_offset; //Real position of the photo
	char * text; //Photo caption
	int user_id; //ID of the user who have uploaded the photo
	int width; //Original photo width
}
struct photos_photo_xtr_tag_info{
	char * access_key; //Access key for the photo
	int album_id; //Album ID
	int date; //Date when uploaded
	int height; //Original photo height
	int id; //Photo ID
	int owner_id; //Photo owner's ID
	char * photo_1280; //URL of image with 1280 px width
	char * photo_130; //URL of image with 130 px width
	char * photo_2560; //URL of image with 2560 px width
	char * photo_604; //URL of image with 604 px width
	char * photo_75; //URL of image with 75 px width
	char * photo_807; //URL of image with 807 px width
	int placer_id; //ID of the tag creator
	int post_id; //Post ID
	int tag_created; //Date when tag has been added in Unixtime
	int tag_id; //Tag ID
	char * text; //Photo caption
	int user_id; //ID of the user who have uploaded the photo
	int width; //Original photo width
}
struct photos_tags_suggestion_item{
	char * title; 
	char * caption; 
	char * type; 
	char * track_code; 
}
struct photos_tags_suggestion_item_button{
	char * title; 
	char * action; 
	char * style; 
}
struct link_target_object{
	char * type; //Object type
	int owner_id; //Owner ID
	int item_id; //Item ID
}
struct events_event_attach{
	char * address; //address of event
	char * button_text; //text of attach
	int id; //event ID
	char * text; //text of attach
	int time; //event start time
}
struct audio_audio{
	char * access_key; //Access key for the audio
	char * artist; //Artist name
	int id; //Audio ID
	int owner_id; //Audio owner's ID
	char * title; //Title
	char * url; //URL of mp3 file
	int duration; //Duration in seconds
	int date; //Date when uploaded
	int album_id; //Album ID
	int genre_id; //Genre ID
	char * performer; //Performer name
}
struct addresses_fields{
}
struct podcast_cover{
}
struct podcast_external_data{
	char * url; //Url of the podcast page
	char * owner_url; //Url of the podcasts owner community
	char * title; //Podcast title
	char * owner_name; //Name of the podcasts owner community
}
struct storage_value{
	char * key; 
	char * value; 
}
struct messages_audio_message{
	char * access_key; //Access key for audio message
	int transcript_error; 
	int duration; //Audio message duration in seconds
	int id; //Audio message ID
	char * link_mp3; //MP3 file URL
	char * link_ogg; //OGG file URL
	int owner_id; //Audio message owner ID
}
struct messages_chat{
	int admin_id; //Chat creator ID
	int id; //Chat ID
	char * photo_100; //URL of the preview image with 100 px in width
	char * photo_200; //URL of the preview image with 200 px in width
	char * photo_50; //URL of the preview image with 50 px in width
	char * title; //Chat title
	char * type; //Chat type
	int members_count; //Count members in a chat
}
struct messages_chat_full{
	int admin_id; //Chat creator ID
	int id; //Chat ID
	char * photo_100; //URL of the preview image with 100 px in width
	char * photo_200; //URL of the preview image with 200 px in width
	char * photo_50; //URL of the preview image with 50 px in width
	char * title; //Chat title
	char * type; //Chat type
}
struct messages_chat_preview{
	int admin_id; 
	int local_id; 
	int members_count; 
	char * title; 
}
struct messages_chat_push_settings{
	int disabled_until; //Time until that notifications are disabled
}
struct messages_chat_restrictions{
}
struct messages_chat_settings{
	int members_count; 
	int friends_count; 
	int owner_id; 
	char * title; //Chat title
	char * theme; 
	char * disappearing_chat_link; 
}
struct messages_chat_settings_acl{
}
struct messages_chat_settings_permissions{
	char * invite; //Who can invite users to chat
	char * change_info; //Who can change chat info
	char * change_pin; //Who can change pinned message
	char * use_mass_mentions; //Who can use mass mentions
	char * see_invite_link; //Who can see invite link
	char * call; //Who can make calls
	char * change_admins; //Who can change admins
}
struct messages_chat_settings_photo{
	char * photo_50; //URL of the preview image with 50px in width
	char * photo_100; //URL of the preview image with 100px in width
	char * photo_200; //URL of the preview image with 200px in width
}
struct messages_chat_settings_state{
}
struct messages_conversation{
	int last_message_id; //ID of the last message in conversation
	int last_conversation_message_id; //Conversation message ID of the last message in conversation
	int in_read; //Last message user have read
	int out_read; //Last outcoming message have been read by the opponent
	int unread_count; //Unread messages number
	char * special_service_type; 
}
struct messages_conversation_can_write{
	int reason; 
}
struct messages_conversation_member{
	int invited_by; 
	int join_date; 
	int request_date; //Message request date
	int member_id; 
}
struct messages_conversation_peer{
	int id; 
	int local_id; 
}
struct messages_conversation_peer_type{
}
struct messages_conversation_sort_id{
	int major_id; //Major id for sorting conversations
	int minor_id; //Minor id for sorting conversations
}
struct messages_conversation_with_message{
}
struct messages_foreign_message{
	int conversation_message_id; //Conversation message ID
	int date; //Date when the message was created
	int from_id; //Message author's ID
	int id; //Message ID
	int peer_id; //Peer ID
	char * text; //Message text
	int update_time; //Date when the message has been updated in Unixtime
	char * payload; //Additional data sent along with message for developer convenience
}
struct messages_forward{
	int owner_id; //Messages owner_id
	int peer_id; //Messages peer_id
}
struct messages_getConversationById{
	int count; //Total number
}
struct messages_getConversationById_extended{
}
struct messages_getConversationMembers{
	int count; //Chat members count
}
struct messages_graffiti{
	char * access_key; //Access key for graffiti
	int id; //Graffiti ID
	int owner_id; //Graffiti owner ID
	char * url; //Graffiti URL
	int width; //Graffiti width
	int height; //Graffiti height
}
struct messages_history_attachment{
	int message_id; //Message ID
	int from_id; //Message author's ID
	int forward_level; //Forward level (optional)
}
struct messages_history_message_attachment{
}
struct messages_history_message_attachment_type{
}
struct messages_keyboard{
	int author_id; //Community or bot, which set this keyboard
}
struct messages_keyboard_button{
	char * color; //Button color
}
struct messages_keyboard_button_action_callback{
	char * label; //Label for button
	char * payload; //Additional data sent along with message for developer convenience
	char * type; 
}
struct messages_keyboard_button_action_location{
	char * payload; //Additional data sent along with message for developer convenience
	char * type; 
}
struct messages_keyboard_button_action_open_app{
	int app_id; //Fragment value in app link like vk.com/app{app_id}_-654321#hash
	char * hash; //Fragment value in app link like vk.com/app123456_-654321#{hash}
	char * label; //Label for button
	int owner_id; //Fragment value in app link like vk.com/app123456_{owner_id}#hash
	char * payload; //Additional data sent along with message for developer convenience
	char * type; 
}
struct messages_keyboard_button_action_open_link{
	char * label; //Label for button
	char * link; //link for button
	char * payload; //Additional data sent along with message for developer convenience
	char * type; 
}
struct messages_keyboard_button_action_open_photo{
	char * type; 
}
struct messages_keyboard_button_action_text{
	char * label; //Label for button
	char * payload; //Additional data sent along with message for developer convenience
	char * type; 
}
struct messages_keyboard_button_action_vkpay{
	char * hash; //Fragment value in app link like vk.com/app123456_-654321#{hash}
	char * payload; //Additional data sent along with message for developer convenience
	char * type; 
}
struct messages_keyboard_button_property_action{
}
struct messages_last_activity{
	int time; //Time when user was online in Unixtime
}
struct messages_longpoll_messages{
	int count; //Total number
}
struct messages_longpoll_params{
	char * server; //Server URL
	char * key; //Key
	int ts; //Timestamp
	int pts; //Persistent timestamp
}
struct messages_message{
	int admin_author_id; //Only for messages from community. Contains user ID of community admin, who sent this message.
	int conversation_message_id; //Unique auto-incremented number for all messages with this peer
	int date; //Date when the message has been sent in Unixtime
	int from_id; //Message author's ID
	int id; //Message ID
	int members_count; //Members number
	char * payload; 
	int peer_id; //Peer ID
	int random_id; //ID used for sending messages. It returned only for outgoing messages
	char * ref; 
	char * ref_source; 
	char * text; //Message text
	int update_time; //Date when the message has been updated in Unixtime
	int pinned_at; //Date when the message has been pinned in Unixtime
}
struct messages_message_action{
	int conversation_message_id; //Message ID
	char * email; //Email address for chat_invite_user or chat_kick_user actions
	int member_id; //User or email peer ID
	char * message; //Message body of related message
	char * text; //New chat title for chat_create and chat_title_update actions
}
struct messages_message_action_photo{
	char * photo_50; //URL of the preview image with 50px in width
	char * photo_100; //URL of the preview image with 100px in width
	char * photo_200; //URL of the preview image with 200px in width
}
struct messages_message_action_status{
}
struct messages_message_attachment{
}
struct messages_message_attachment_type{
}
struct messages_message_request_data{
	char * status; //Status of message request
	int inviter_id; //Message request sender id
	int request_date; //Message request date
}
struct messages_messages_array{
	int count; 
}
struct messages_out_read_by{
	int count; 
}
struct messages_pinned_message{
	int conversation_message_id; //Unique auto-incremented number for all messages with this peer
	int id; //Message ID
	int date; //Date when the message has been sent in Unixtime
	int from_id; //Message author's ID
	int peer_id; //Peer ID
	char * text; //Message text
}
struct messages_push_settings{
	int disabled_until; //Time until what notifications are disabled
}
struct messages_send_user_ids_response_item{
	int peer_id; 
	int message_id; 
	int conversation_message_id; 
}
struct messages_template_action_type_names{
}
struct messages_user_xtr_invited_by{
}
struct newsfeed_comments_filters{
}
struct newsfeed_ignore_item_type{
}
struct newsfeed_item_audio{
}
struct newsfeed_item_audio_audio{
	int count; //Audios number
}
struct newsfeed_item_base{
	int source_id; //Item source ID
	int date; //Date when item has been added in Unixtime
}
struct newsfeed_item_digest{
}
struct newsfeed_item_digest_button{
	char * title; 
	char * style; 
}
struct newsfeed_item_digest_footer{
	char * style; 
	char * text; //text for invite to enable smart feed
}
struct newsfeed_item_digest_full_item{
	char * text; 
	char * source_name; 
	int attachment_index; 
	char * style; 
}
struct newsfeed_item_digest_header{
	char * title; //Title of the header
	char * subtitle; //Subtitle of the header, when title have two strings
	char * style; 
}
struct newsfeed_item_digest_item{
}
struct newsfeed_item_friend{
}
struct newsfeed_item_friend_friends{
	int count; //Number of friends has been added
}
struct newsfeed_item_holiday_recommendations_block_header{
	char * title; //Title of the header
	char * subtitle; //Subtitle of the header
}
struct newsfeed_item_photo{
}
struct newsfeed_item_photo_photos{
	int count; //Photos number
}
struct newsfeed_item_photo_tag{
}
struct newsfeed_item_photo_tag_photo_tags{
	int count; //Tags number
}
struct newsfeed_item_promo_button{
}
struct newsfeed_item_promo_button_action{
	char * url; 
	char * type; 
	char * target; 
}
struct newsfeed_item_promo_button_image{
	int width; 
	int height; 
	char * url; 
}
struct newsfeed_item_topic{
}
struct newsfeed_item_video{
}
struct newsfeed_item_video_video{
	int count; //Tags number
}
struct newsfeed_item_wallpost{
}
struct newsfeed_item_wallpost_feedback{
	char * question; 
	int stars_count; 
	char * gratitude; 
}
struct newsfeed_item_wallpost_feedback_answer{
	char * title; 
	char * id; 
}
struct newsfeed_item_wallpost_feedback_type{
}
struct newsfeed_list{
	int id; //List ID
	char * title; //List title
}
struct newsfeed_list_full{
}
struct newsfeed_newsfeed_item{
}
struct newsfeed_newsfeed_item_type{
}
struct newsfeed_newsfeed_photo{
}
struct base_bool_int{
}
struct base_city{
	int id; //City ID
	char * title; //City title
}
struct base_comments_info{
	int count; //Comments number
}
struct base_country{
	int id; //Country ID
	char * title; //Country title
}
struct base_crop_photo{
}
struct base_crop_photo_crop{
}
struct base_crop_photo_rect{
}
struct base_error{
	int error_code; //Error code
	int error_subcode; //Error subcode
	char * error_msg; //Error message
	char * error_text; //Localized error message
}
struct base_geo{
	int showmap; //Information whether a map is showed
	char * type; //Place type
}
struct base_geo_coordinates{
}
struct base_gradient_point{
	char * color; //Hex color code without #
}
struct base_image{
	char * id; 
	char * url; //Image url
	int width; //Image width
	int height; //Image height
}
struct base_likes{
	int count; //Likes number
}
struct base_likes_info{
	int count; //Likes number
	int user_likes; //Information whether current uer has liked the post
}
struct base_link{
	char * caption; //Link caption
	char * description; //Link description
	char * id; //Link ID
	char * preview_page; //String ID of the page with article preview
	char * preview_url; //URL of the page with article preview
	char * title; //Link title
	char * url; //Link URL
}
struct base_link_application{
}
struct base_link_application_store{
	char * name; //Store name
}
struct base_link_button{
	char * title; //Button title
	char * block_id; //Target block id
	char * section_id; //Target section id
	int curator_id; //curator id
	int album_id; //Video album id
	int owner_id; //Owner id
	char * icon; //Button icon name, e.g. 'phone' or 'gift'
}
struct base_link_button_action{
	char * url; //Action URL
	char * consume_reason; 
}
struct base_link_button_action_type{
}
struct base_link_button_style{
}
struct base_link_product{
	char * merchant; 
	int orders_count; 
}
struct base_link_product_category{
}
struct base_link_product_status{
}
struct base_link_rating{
	int reviews_count; //Count of reviews
}
struct base_message_error{
	int code; //Error code
	char * description; //Error message
}
struct base_object{
	int id; //Object ID
	char * title; //Object title
}
struct base_object_count{
	int count; //Items count
}
struct base_object_with_name{
	int id; //Object ID
	char * name; //Object name
}
struct base_place{
	char * address; //Place address
	int checkins; //Checkins number
	char * city; //City name
	char * country; //Country name
	int created; //Date of the place creation in Unixtime
	char * icon; //URL of the place's icon
	int id; //Place ID
	char * title; //Place title
	char * type; //Place type
}
struct base_property_exists{
}
struct base_reposts_info{
	int count; //Total reposts counter. Sum of wall and mail reposts counters
	int wall_count; //Wall reposts counter
	int mail_count; //Mail reposts counter
	int user_reposted; //Information whether current user has reposted the post
}
struct base_request_param{
	char * key; //Parameter name
	char * value; //Parameter value
}
struct base_sex{
}
struct base_sticker{
}
struct base_sticker_animation{
	char * type; //Type of animation script
	char * url; //URL of animation script
}
struct base_sticker_new{
	int sticker_id; //Sticker ID
	int product_id; //Pack ID
	char * animation_url; //URL of sticker animation script
}
struct base_sticker_old{
	int id; //Sticker ID
	int product_id; //Pack ID
	int width; //Width in px
	int height; //Height in px
	char * photo_128; //URL of the preview image with 128 px in height
	char * photo_256; //URL of the preview image with 256 px in height
	char * photo_352; //URL of the preview image with 352 px in height
	char * photo_512; //URL of the preview image with 512 px in height
	char * photo_64; //URL of the preview image with 64 px in height
}
struct base_stickers_list{
}
struct base_upload_server{
	char * upload_url; //Upload URL
}
struct base_user_group_fields{
}
struct base_user_id{
	int user_id; //User ID
}
struct stickers_image_set{
	char * base_url; //Base URL for images in set
	int version; //Version number to be appended to the image URL
}
struct wall_app_post{
	int id; //Application ID
	char * name; //Application name
	char * photo_130; //URL of the preview image with 130 px in width
	char * photo_604; //URL of the preview image with 604 px in width
}
struct wall_attached_note{
	int comments; //Comments number
	int date; //Date when the note has been created in Unixtime
	int id; //Note ID
	int owner_id; //Note owner's ID
	int read_comments; //Read comments number
	char * title; //Note title
	char * text; //Note text
	int can_comment; 
	char * text_wiki; //Note wiki text
	char * view_url; //URL of the page with note preview
}
struct wall_carousel_base{
	int carousel_offset; //Index of current carousel element
}
struct wall_comment_attachment{
}
struct wall_comment_attachment_type{
}
struct wall_geo{
	char * coordinates; //Coordinates as string. <latitude> <longtitude>
	int showmap; //Information whether a map is showed
	char * type; //Place type
}
struct wall_get_filter{
}
struct wall_graffiti{
	int id; //Graffiti ID
	int owner_id; //Graffiti owner's ID
	char * photo_200; //URL of the preview image with 200 px in width
	char * photo_586; //URL of the preview image with 586 px in width
	int height; //Graffiti height
	char * url; //Graffiti URL
	int width; //Graffiti width
	char * access_key; //Access key for graffiti
}
struct wall_post_copyright{
	int id; 
	char * link; 
	char * name; 
	char * type; 
}
struct wall_post_source{
	char * data; //Additional data
	char * platform; //Platform name
	char * url; //URL to an external site used to publish the post
}
struct wall_post_source_type{
}
struct wall_post_type{
}
struct wall_posted_photo{
	int id; //Photo ID
	int owner_id; //Photo owner's ID
	char * photo_130; //URL of the preview image with 130 px in width
	char * photo_604; //URL of the preview image with 604 px in width
}
struct wall_views{
	int count; //Count
}
struct wall_wall_comment{
	int id; //Comment ID
	int from_id; //Author ID
	int post_id; 
	int owner_id; 
	int photo_id; 
	int video_id; 
	int date; //Date when the comment has been added in Unixtime
	char * text; //Comment text
	int real_offset; //Real position of the comment
	int reply_to_user; //Replied user ID
	int reply_to_comment; //Replied comment ID
	int pid; //Photo ID
}
struct wall_wall_comment_donut{
}
struct wall_wall_comment_donut_placeholder{
	char * text; 
}
struct wall_wallpost{
	char * access_key; //Access key to private object
	int date; //Date of publishing in Unixtime
	int edited; //Date of editing in Unixtime
	int from_id; //Post author ID
	int id; //Post ID
	int owner_id; //Wall owner's ID
	int post_id; //If post type 'reply', contains original post ID
	int signer_id; //Post signer ID
	char * text; //Post text
}
struct wall_wallpost_attachment{
	char * access_key; //Access key for the audio
}
struct wall_wallpost_attachment_type{
}
struct wall_wallpost_comments_donut{
}
struct wall_wallpost_comments_donut_placeholder{
	char * text; 
}
struct wall_wallpost_donut{
	int paid_duration; //Value of this field need to pass in wall.post/edit in donut_paid_duration
	char * edit_mode; //Says what user can edit in post about donut properties
}
struct wall_wallpost_donut_placeholder{
	char * text; 
}
struct wall_wallpost_full{
}
struct wall_wallpost_to_id{
	int copy_owner_id; //ID of the source post owner
	int copy_post_id; //ID of the source post
	int date; //Date of publishing in Unixtime
	int from_id; //Post author ID
	int id; //Post ID
	int post_id; //wall post ID (if comment)
	int signer_id; //Post signer ID
	char * text; //Post text
	int to_id; //Wall owner's ID
}
struct client_info_for_bots{
	int lang_id; //client or user language id
}
struct callback_base{
	char * type; 
	int group_id; 
	char * event_id; //Unique event id. If it passed twice or more - you should ignore it.
	char * secret; 
}
struct callback_board_post_delete{
	int topic_owner_id; 
	int topic_id; 
	int id; 
}
struct callback_confirmation{
}
struct callback_donut_money_withdraw{
}
struct callback_donut_money_withdraw_error{
	char * reason; 
}
struct callback_donut_subscription_cancelled{
	int user_id; 
}
struct callback_donut_subscription_create{
	int user_id; 
	int amount; 
}
struct callback_donut_subscription_expired{
	int user_id; 
}
struct callback_donut_subscription_price_changed{
	int user_id; 
	int amount_old; 
	int amount_new; 
}
struct callback_donut_subscription_prolonged{
	int user_id; 
	int amount; 
}
struct callback_group_change_photo{
	int user_id; 
}
struct callback_group_change_settings{
	int user_id; 
}
struct callback_group_join{
	int user_id; 
}
struct callback_group_join_type{
}
struct callback_group_leave{
	int user_id; 
}
struct callback_group_market{
}
struct callback_group_officer_role{
}
struct callback_group_officers_edit{
	int admin_id; 
	int us