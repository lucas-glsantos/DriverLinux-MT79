#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btmtk_fw_get_filename, "_gpl", "");
KSYMTAB_FUNC(btmtk_setup_firmware_79xx, "_gpl", "");
KSYMTAB_FUNC(btmtk_setup_firmware, "_gpl", "");
KSYMTAB_FUNC(btmtk_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btmtk_reset_sync, "_gpl", "");
KSYMTAB_FUNC(btmtk_register_coredump, "_gpl", "");
KSYMTAB_FUNC(btmtk_process_coredump, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_subsys_reset, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_recv_acl, "_gpl", "");
KSYMTAB_FUNC(alloc_mtk_intr_urb, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_resume, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_suspend, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_setup, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_shutdown, "_gpl", "");

SYMBOL_CRC(btmtk_fw_get_filename, 0xb9536939, "_gpl");
SYMBOL_CRC(btmtk_setup_firmware_79xx, 0xf7c3517a, "_gpl");
SYMBOL_CRC(btmtk_setup_firmware, 0xf7c3517a, "_gpl");
SYMBOL_CRC(btmtk_set_bdaddr, 0x8296d21b, "_gpl");
SYMBOL_CRC(btmtk_reset_sync, 0x9a65bb53, "_gpl");
SYMBOL_CRC(btmtk_register_coredump, 0x5902e4fa, "_gpl");
SYMBOL_CRC(btmtk_process_coredump, 0xadcdd43e, "_gpl");
SYMBOL_CRC(btmtk_usb_subsys_reset, 0xc93a5a37, "_gpl");
SYMBOL_CRC(btmtk_usb_recv_acl, 0xadcdd43e, "_gpl");
SYMBOL_CRC(alloc_mtk_intr_urb, 0x78346761, "_gpl");
SYMBOL_CRC(btmtk_usb_resume, 0x830bc4f2, "_gpl");
SYMBOL_CRC(btmtk_usb_suspend, 0x830bc4f2, "_gpl");
SYMBOL_CRC(btmtk_usb_setup, 0x830bc4f2, "_gpl");
SYMBOL_CRC(btmtk_usb_shutdown, 0x830bc4f2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0x40a621c5, "snprintf" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x6a2c70b4, "request_firmware" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0x553959eb, "bt_err" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x553959eb, "bt_info" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x67628f51, "msleep" },
	{ 0xed869576, "__hci_cmd_sync" },
	{ 0xee3afd5d, "sk_skb_reason_drop" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x0f82d919, "hci_cmd_sync_queue" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x49ea22ee, "hci_devcd_register" },
	{ 0x15e1fb79, "__hci_cmd_send" },
	{ 0x3fdc3369, "usb_alloc_urb" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0x95c7e581, "usb_anchor_urb" },
	{ 0x8c18c8e2, "usb_submit_urb" },
	{ 0x0c8e9a2d, "usb_free_urb" },
	{ 0x23f25c0a, "__dynamic_pr_debug" },
	{ 0x0c8e9a2d, "usb_unanchor_urb" },
	{ 0x8dc67ef7, "usb_kill_anchored_urbs" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xf76bbc40, "usb_autopm_get_interface" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xfaabfe5e, "kmalloc_caches" },
	{ 0xc064623f, "__kmalloc_cache_noprof" },
	{ 0x208da9f5, "usb_autopm_put_interface" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x29d12a64, "bit_wait_timeout" },
	{ 0x0297537d, "out_of_line_wait_on_bit_timeout" },
	{ 0x00cdaec8, "hci_devcd_append" },
	{ 0x0c7ef646, "hci_devcd_complete" },
	{ 0x7458fc7a, "hci_devcd_init" },
	{ 0xaef1f20d, "system_wq" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0xbfcb9b61, "usb_disable_autosuspend" },
	{ 0xfb3bad2b, "skb_clone" },
	{ 0x159ce1c6, "hci_recv_diag" },
	{ 0x159ce1c6, "hci_recv_frame" },
	{ 0x05488d63, "__skb_pad" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x95221fe6, "__alloc_skb" },
	{ 0x18d43ede, "skb_put" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x6c00f410, "usb_control_msg" },
	{ 0x97acb853, "ktime_get" },
	{ 0xc98698bb, "usb_set_interface" },
	{ 0xd0b2110c, "hci_cmd_sync_cancel" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0x40a621c5,
	0xd272d446,
	0xbd03ed67,
	0x6a2c70b4,
	0x5a844b26,
	0x553959eb,
	0x1abc7887,
	0x0feb1e94,
	0xd272d446,
	0x553959eb,
	0x5a844b26,
	0x67628f51,
	0xed869576,
	0xee3afd5d,
	0xf46d5bf3,
	0x0f82d919,
	0xf46d5bf3,
	0x49ea22ee,
	0x15e1fb79,
	0x3fdc3369,
	0xd710adbf,
	0xa6c3b74d,
	0x95c7e581,
	0x8c18c8e2,
	0x0c8e9a2d,
	0x23f25c0a,
	0x0c8e9a2d,
	0x8dc67ef7,
	0xe54e0a6b,
	0xa53f4e29,
	0xf76bbc40,
	0xbd03ed67,
	0xfaabfe5e,
	0xc064623f,
	0x208da9f5,
	0x7851be11,
	0xcb8b6ec6,
	0x29d12a64,
	0x0297537d,
	0x00cdaec8,
	0x0c7ef646,
	0x7458fc7a,
	0xaef1f20d,
	0x8ce83585,
	0xbfcb9b61,
	0xfb3bad2b,
	0x159ce1c6,
	0x159ce1c6,
	0x05488d63,
	0xcbae5412,
	0x95221fe6,
	0x18d43ede,
	0xe8e0a5a9,
	0x6c00f410,
	0x97acb853,
	0xc98698bb,
	0xd0b2110c,
	0xe1e1f979,
	0x81a1a811,
	0xe4de56b4,
	0x9479a1e8,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"snprintf\0"
	"__x86_return_thunk\0"
	"__ref_stack_chk_guard\0"
	"request_firmware\0"
	"__x86_indirect_thunk_r13\0"
	"bt_err\0"
	"release_firmware\0"
	"usleep_range_state\0"
	"__stack_chk_fail\0"
	"bt_info\0"
	"__x86_indirect_thunk_rax\0"
	"msleep\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"mutex_lock\0"
	"hci_cmd_sync_queue\0"
	"mutex_unlock\0"
	"hci_devcd_register\0"
	"__hci_cmd_send\0"
	"usb_alloc_urb\0"
	"__kmalloc_noprof\0"
	"ktime_get_mono_fast_ns\0"
	"usb_anchor_urb\0"
	"usb_submit_urb\0"
	"usb_free_urb\0"
	"__dynamic_pr_debug\0"
	"usb_unanchor_urb\0"
	"usb_kill_anchored_urbs\0"
	"__fortify_panic\0"
	"memcpy\0"
	"usb_autopm_get_interface\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"usb_autopm_put_interface\0"
	"__SCT__might_resched\0"
	"kfree\0"
	"bit_wait_timeout\0"
	"out_of_line_wait_on_bit_timeout\0"
	"hci_devcd_append\0"
	"hci_devcd_complete\0"
	"hci_devcd_init\0"
	"system_wq\0"
	"queue_delayed_work_on\0"
	"usb_disable_autosuspend\0"
	"skb_clone\0"
	"hci_recv_diag\0"
	"hci_recv_frame\0"
	"__skb_pad\0"
	"__const_udelay\0"
	"__alloc_skb\0"
	"skb_put\0"
	"wake_up_bit\0"
	"usb_control_msg\0"
	"ktime_get\0"
	"usb_set_interface\0"
	"hci_cmd_sync_cancel\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__ubsan_handle_load_invalid_value\0"
	"strnlen\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "CDBDDC823AD88314A6658EA");
