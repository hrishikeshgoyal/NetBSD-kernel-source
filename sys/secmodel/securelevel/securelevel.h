/* $NetBSD: securelevel.h,v 1.4 2011/12/04 19:25:00 jym Exp $ */
/*-
 * Copyright (c) 2006 Elad Efrat <elad@NetBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _SECMODEL_SECURELEVEL_SECURELEVEL_H_
#define	_SECMODEL_SECURELEVEL_SECURELEVEL_H_

#define SECMODEL_SECURELEVEL_ID   "org.netbsd.secmodel.securelevel"
#define SECMODEL_SECURELEVEL_NAME "Traditional NetBSD: Securelevel"

int secmodel_securelevel_sysctl(SYSCTLFN_PROTO);

void secmodel_securelevel_init(void);
void secmodel_securelevel_start(void);
void secmodel_securelevel_stop(void);

void sysctl_security_securelevel_setup(struct sysctllog **);

int secmodel_securelevel_system_cb(kauth_cred_t, kauth_action_t, void *,
    void *, void *, void *, void *);
int secmodel_securelevel_process_cb(kauth_cred_t, kauth_action_t, void *,
    void *, void *, void *, void *);
int secmodel_securelevel_network_cb(kauth_cred_t, kauth_action_t, void *,
    void *, void *, void *, void *);
int secmodel_securelevel_machdep_cb(kauth_cred_t, kauth_action_t, void *,
    void *, void *, void *, void *);
int secmodel_securelevel_device_cb(kauth_cred_t, kauth_action_t, void *,
    void *, void *, void *, void *);
int secmodel_securelevel_vnode_cb(kauth_cred_t, kauth_action_t, void *,
    void *, void *, void *, void *);

#endif /* !_SECMODEL_SECURELEVEL_SECURELEVEL_H_ */
