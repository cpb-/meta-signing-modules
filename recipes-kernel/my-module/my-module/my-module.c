// SPDX-License-Identifier: GPL-2.0
//
// (c) 2024 Christophe Blaess
//    https://www.logilin.fr/

#include <linux/module.h>

static int __init my_module_init(void)
{
        pr_info("%s: Hello guys!\n", THIS_MODULE->name);
        return 0;
}

static void __exit my_module_exit(void)
{
        pr_info("%s: That's all folk!\n", THIS_MODULE->name);
}

module_init(my_module_init);
module_exit(my_module_exit);

MODULE_DESCRIPTION("My custom module.");
MODULE_AUTHOR("Christophe Blaess <christophe.blaess@logilin.fr>");
MODULE_LICENSE("GPL v2");
