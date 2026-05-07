#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x40a621c5, "snprintf" },
	{ 0x6a2c70b4, "request_firmware" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x9b1de7cb, "_dev_err" },
	{ 0x208da9f5, "usb_autopm_put_interface" },
	{ 0x4c4d383d, "hci_unregister_dev" },
	{ 0x0e1afaf1, "gpiod_put" },
	{ 0x4c4d383d, "hci_free_dev" },
	{ 0x06aafb66, "device_wakeup_disable" },
	{ 0xfb3bad2b, "skb_clone" },
	{ 0x747bd2f7, "consume_skb" },
	{ 0x159ce1c6, "hci_recv_frame" },
	{ 0xaef1f20d, "system_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x95221fe6, "__alloc_skb" },
	{ 0x18d43ede, "skb_put" },
	{ 0x78346761, "alloc_mtk_intr_urb" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0xdb95b487, "skb_queue_purge_reason" },
	{ 0xc93a5a37, "btmtk_usb_subsys_reset" },
	{ 0x8dc67ef7, "usb_scuttle_anchored_urbs" },
	{ 0x25791fdc, "usb_get_from_anchor" },
	{ 0x8e3336dd, "disable_irq" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x236cf4b7, "skb_queue_tail" },
	{ 0x159ce1c6, "hci_recv_diag" },
	{ 0xc98698bb, "usb_set_interface" },
	{ 0x1f404faf, "hci_drv_cmd_status" },
	{ 0x830bc4f2, "btmtk_usb_setup" },
	{ 0x20f3799b, "usb_ifnum_to_if" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0xea7b2a90, "usb_driver_claim_interface" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0x79fd4f39, "devm_kmalloc" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x65262862, "hci_alloc_dev_priv" },
	{ 0x70f6c319, "gpiod_get_optional" },
	{ 0x9a65bb53, "btmtk_reset_sync" },
	{ 0x8296d21b, "btmtk_set_bdaddr" },
	{ 0xadcdd43e, "btmtk_usb_recv_acl" },
	{ 0x830bc4f2, "btmtk_usb_suspend" },
	{ 0x830bc4f2, "btmtk_usb_resume" },
	{ 0x0e17d635, "hci_register_dev" },
	{ 0xce2de609, "debugfs_create_file_full" },
	{ 0x2dfd0b84, "usb_match_id" },
	{ 0x3252f2c7, "btintel_recv_event" },
	{ 0xf3c29232, "btintel_configure_setup" },
	{ 0x32b32628, "btbcm_setup_apple" },
	{ 0x32b32628, "btbcm_setup_patchram" },
	{ 0xa65a6eaa, "btbcm_set_bdaddr" },
	{ 0x9c25c67b, "dmi_check_system" },
	{ 0x49ea22ee, "hci_devcd_register" },
	{ 0xc879cb50, "btrtl_set_driver_name" },
	{ 0x830bc4f2, "btrtl_shutdown_realtek" },
	{ 0x0040afbe, "param_ops_bool" },
	{ 0x23ef80fb, "default_llseek" },
	{ 0x3768e85d, "simple_open" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xadb55ac9, "usb_register_driver" },
	{ 0x3fdc3369, "usb_alloc_urb" },
	{ 0x95c7e581, "usb_anchor_urb" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0x8c18c8e2, "usb_submit_urb" },
	{ 0x553959eb, "bt_err" },
	{ 0x23f25c0a, "__dynamic_pr_debug" },
	{ 0x0c8e9a2d, "usb_unanchor_urb" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xfaabfe5e, "kmalloc_caches" },
	{ 0xc064623f, "__kmalloc_cache_noprof" },
	{ 0x0c8e9a2d, "usb_free_urb" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xee3afd5d, "sk_skb_reason_drop" },
	{ 0xd0b2110c, "hci_cmd_sync_cancel" },
	{ 0xde338d9a, "_raw_spin_lock_irq" },
	{ 0xde338d9a, "_raw_spin_unlock_irq" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x8dc67ef7, "usb_kill_anchored_urbs" },
	{ 0xfe9be5a6, "irq_set_irq_wake" },
	{ 0x8e3336dd, "enable_irq" },
	{ 0xed869576, "__hci_cmd_sync" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xf76bbc40, "usb_autopm_get_interface" },
	{ 0x4678b30f, "usb_queue_reset_device" },
	{ 0x553959eb, "bt_info" },
	{ 0xd2e1e487, "gpiod_set_value_cansleep" },
	{ 0x67628f51, "msleep" },
	{ 0x830bc4f2, "btrtl_setup_realtek" },
	{ 0x269a4014, "__hci_cmd_sync_ev" },
	{ 0x15e1fb79, "__hci_cmd_send" },
	{ 0x18d43ede, "skb_pull" },
	{ 0x7458fc7a, "hci_devcd_init" },
	{ 0xbfcb9b61, "usb_disable_autosuspend" },
	{ 0x00cdaec8, "hci_devcd_append" },
	{ 0x0c7ef646, "hci_devcd_complete" },
	{ 0xa8541370, "hci_devcd_append_pattern" },
	{ 0xbfcb9b61, "usb_enable_autosuspend" },
	{ 0x934bd4a1, "dev_kfree_skb_irq_reason" },
	{ 0x01f01dad, "usb_driver_release_interface" },
	{ 0x830bc4f2, "btmtk_usb_shutdown" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x3c8894c7, "hci_drv_cmd_complete" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x74f8d140, "skb_dequeue" },
	{ 0xa8f96c6e, "usb_deregister" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0x8db9b6ac, "__usecs_to_jiffies" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xdfafb5b5, "kstrtobool_from_user" },
	{ 0x437e81c7, "simple_read_from_buffer" },
	{ 0x79069b8a, "skb_pull_data" },
	{ 0x553959eb, "bt_warn" },
	{ 0xed440e98, "pm_runtime_allow" },
	{ 0xc5141901, "__pm_runtime_suspend" },
	{ 0xed440e98, "pm_runtime_forbid" },
	{ 0xa7c6c8f7, "device_set_wakeup_capable" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x6c00f410, "usb_control_msg" },
	{ 0xf7064e45, "usb_bulk_msg" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x40a621c5,
	0x6a2c70b4,
	0x1abc7887,
	0x9b1de7cb,
	0x208da9f5,
	0x4c4d383d,
	0x0e1afaf1,
	0x4c4d383d,
	0x06aafb66,
	0xfb3bad2b,
	0x747bd2f7,
	0x159ce1c6,
	0xaef1f20d,
	0x49733ad6,
	0x95221fe6,
	0x18d43ede,
	0x78346761,
	0x85acaba2,
	0xdb95b487,
	0xc93a5a37,
	0x8dc67ef7,
	0x25791fdc,
	0x8e3336dd,
	0xd272d446,
	0xd272d446,
	0x8ce83585,
	0x236cf4b7,
	0x159ce1c6,
	0xc98698bb,
	0x1f404faf,
	0x830bc4f2,
	0x20f3799b,
	0xf46d5bf3,
	0xea7b2a90,
	0xf46d5bf3,
	0x5403c125,
	0x79fd4f39,
	0x71798f7e,
	0x02f9bbf0,
	0x65262862,
	0x70f6c319,
	0x9a65bb53,
	0x8296d21b,
	0xadcdd43e,
	0x830bc4f2,
	0x830bc4f2,
	0x0e17d635,
	0xce2de609,
	0x2dfd0b84,
	0x3252f2c7,
	0xf3c29232,
	0x32b32628,
	0x32b32628,
	0xa65a6eaa,
	0x9c25c67b,
	0x49ea22ee,
	0xc879cb50,
	0x830bc4f2,
	0x0040afbe,
	0x23ef80fb,
	0x3768e85d,
	0xd272d446,
	0xd272d446,
	0x5a844b26,
	0xadb55ac9,
	0x3fdc3369,
	0x95c7e581,
	0xa6c3b74d,
	0x8c18c8e2,
	0x553959eb,
	0x23f25c0a,
	0x0c8e9a2d,
	0xbd03ed67,
	0xfaabfe5e,
	0xc064623f,
	0x0c8e9a2d,
	0xe1e1f979,
	0x81a1a811,
	0xcb8b6ec6,
	0xee3afd5d,
	0xd0b2110c,
	0xde338d9a,
	0xde338d9a,
	0x2d88a3ab,
	0x8dc67ef7,
	0xfe9be5a6,
	0x8e3336dd,
	0xed869576,
	0xbd03ed67,
	0xd272d446,
	0xf76bbc40,
	0x4678b30f,
	0x553959eb,
	0xd2e1e487,
	0x67628f51,
	0x830bc4f2,
	0x269a4014,
	0x15e1fb79,
	0x18d43ede,
	0x7458fc7a,
	0xbfcb9b61,
	0x00cdaec8,
	0x0c7ef646,
	0xa8541370,
	0xbfcb9b61,
	0x934bd4a1,
	0x01f01dad,
	0x830bc4f2,
	0x9479a1e8,
	0xd70733be,
	0x3c8894c7,
	0x90a48d82,
	0xe54e0a6b,
	0x74f8d140,
	0xa8f96c6e,
	0xd710adbf,
	0x534ed5f3,
	0x8db9b6ac,
	0xe4de56b4,
	0xdfafb5b5,
	0x437e81c7,
	0x79069b8a,
	0x553959eb,
	0xed440e98,
	0xc5141901,
	0xed440e98,
	0xa7c6c8f7,
	0xa53f4e29,
	0x6c00f410,
	0xf7064e45,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"snprintf\0"
	"request_firmware\0"
	"release_firmware\0"
	"_dev_err\0"
	"usb_autopm_put_interface\0"
	"hci_unregister_dev\0"
	"gpiod_put\0"
	"hci_free_dev\0"
	"device_wakeup_disable\0"
	"skb_clone\0"
	"consume_skb\0"
	"hci_recv_frame\0"
	"system_wq\0"
	"queue_work_on\0"
	"__alloc_skb\0"
	"skb_put\0"
	"alloc_mtk_intr_urb\0"
	"cancel_delayed_work\0"
	"skb_queue_purge_reason\0"
	"btmtk_usb_subsys_reset\0"
	"usb_scuttle_anchored_urbs\0"
	"usb_get_from_anchor\0"
	"disable_irq\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"queue_delayed_work_on\0"
	"skb_queue_tail\0"
	"hci_recv_diag\0"
	"usb_set_interface\0"
	"hci_drv_cmd_status\0"
	"btmtk_usb_setup\0"
	"usb_ifnum_to_if\0"
	"mutex_lock\0"
	"usb_driver_claim_interface\0"
	"mutex_unlock\0"
	"__init_waitqueue_head\0"
	"devm_kmalloc\0"
	"delayed_work_timer_fn\0"
	"timer_init_key\0"
	"hci_alloc_dev_priv\0"
	"gpiod_get_optional\0"
	"btmtk_reset_sync\0"
	"btmtk_set_bdaddr\0"
	"btmtk_usb_recv_acl\0"
	"btmtk_usb_suspend\0"
	"btmtk_usb_resume\0"
	"hci_register_dev\0"
	"debugfs_create_file_full\0"
	"usb_match_id\0"
	"btintel_recv_event\0"
	"btintel_configure_setup\0"
	"btbcm_setup_apple\0"
	"btbcm_setup_patchram\0"
	"btbcm_set_bdaddr\0"
	"dmi_check_system\0"
	"hci_devcd_register\0"
	"btrtl_set_driver_name\0"
	"btrtl_shutdown_realtek\0"
	"param_ops_bool\0"
	"default_llseek\0"
	"simple_open\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__x86_indirect_thunk_rax\0"
	"usb_register_driver\0"
	"usb_alloc_urb\0"
	"usb_anchor_urb\0"
	"ktime_get_mono_fast_ns\0"
	"usb_submit_urb\0"
	"bt_err\0"
	"__dynamic_pr_debug\0"
	"usb_unanchor_urb\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"usb_free_urb\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"kfree\0"
	"sk_skb_reason_drop\0"
	"hci_cmd_sync_cancel\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"cancel_work_sync\0"
	"usb_kill_anchored_urbs\0"
	"irq_set_irq_wake\0"
	"enable_irq\0"
	"__hci_cmd_sync\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"usb_autopm_get_interface\0"
	"usb_queue_reset_device\0"
	"bt_info\0"
	"gpiod_set_value_cansleep\0"
	"msleep\0"
	"btrtl_setup_realtek\0"
	"__hci_cmd_sync_ev\0"
	"__hci_cmd_send\0"
	"skb_pull\0"
	"hci_devcd_init\0"
	"usb_disable_autosuspend\0"
	"hci_devcd_append\0"
	"hci_devcd_complete\0"
	"hci_devcd_append_pattern\0"
	"usb_enable_autosuspend\0"
	"dev_kfree_skb_irq_reason\0"
	"usb_driver_release_interface\0"
	"btmtk_usb_shutdown\0"
	"strnlen\0"
	"sized_strscpy\0"
	"hci_drv_cmd_complete\0"
	"__ubsan_handle_out_of_bounds\0"
	"__fortify_panic\0"
	"skb_dequeue\0"
	"usb_deregister\0"
	"__kmalloc_noprof\0"
	"__msecs_to_jiffies\0"
	"__usecs_to_jiffies\0"
	"__ubsan_handle_load_invalid_value\0"
	"kstrtobool_from_user\0"
	"simple_read_from_buffer\0"
	"skb_pull_data\0"
	"bt_warn\0"
	"pm_runtime_allow\0"
	"__pm_runtime_suspend\0"
	"pm_runtime_forbid\0"
	"device_set_wakeup_capable\0"
	"memcpy\0"
	"usb_control_msg\0"
	"usb_bulk_msg\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,btmtk,btintel,btbcm,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "91D289D1AD35F4FC12B9F28");
