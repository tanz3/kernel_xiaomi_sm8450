/*
 * Copyright (c) 2021 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC: wlan_hdd_sysfs_bmiss.h
 *
 * implementation for creating sysfs file bmiss
 */

#ifndef _WLAN_HDD_SYSFS_BMISS_H
#define _WLAN_HDD_SYSFS_BMISS_H

#if defined(WLAN_SYSFS) && defined(CONFIG_WLAN_BMISS)
/**
 * hdd_sysfs_bmiss_create() - API to create bmiss
 * @adapter: pointer to adapter
 *
 * this file is created per adapter.
 * file path: /sys/class/net/wlanxx/bmiss
 * where wlanxx is adapter name
 *
 * usage:
 *      cat /sys/class/net/wlanxx/bmiss
 *
 * Return: 0 on success and errno on failure
 */
int hdd_sysfs_bmiss_create(struct hdd_adapter *adapter);

/**
 * hdd_sysfs_bmiss_destroy() - API to destroy bmiss sysfs file
 * @adapter: pointer to adapter
 *
 * Return: none
 */
void hdd_sysfs_bmiss_destroy(struct hdd_adapter *adapter);
#else
static inline int
hdd_sysfs_bmiss_create(struct hdd_adapter *adapter)
{
	return 0;
}

static inline void
hdd_sysfs_bmiss_destroy(struct hdd_adapter *adapter)
{
}
#endif
#endif /* #ifndef _WLAN_HDD_SYSFS_BMISS_H */

