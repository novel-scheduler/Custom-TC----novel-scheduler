#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf704969, "module_layout" },
	{ 0xa536af69, "unregister_qdisc" },
	{ 0x4b4af741, "kmem_cache_destroy" },
	{ 0xfb572139, "register_qdisc" },
	{ 0xa8b5e7f0, "kmem_cache_create" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfdff954, "qdisc_watchdog_init_clockid" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x46fbb90, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x65e5ba3d, "skb_copy_bits" },
	{ 0x4e372ccf, "qdisc_watchdog_schedule_range_ns" },
	{ 0xfef62dc5, "kmem_cache_alloc" },
	{ 0x21d7e1e9, "kmem_cache_free_bulk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x9bdd8ccd, "__skb_get_hash" },
	{ 0x92997ed8, "_printk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x98280002, "gnet_stats_copy_app" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xfacd8c28, "nla_put" },
	{ 0x4b881e76, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x63474cf, "kmem_cache_free" },
	{ 0x11435c9f, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A84BC4D8A92A27C108FA9D8");
