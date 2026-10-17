@ FUN_080debc8  entry 0x080debc8  size 96
.thumb
.org 0xdebc8
FUN_080debc8:
	push {r4, r5, r6, r7, lr}	@ 000debc8 f0b5
.org 0xdebca
	mov r7, r8	@ 000debca 4746
.org 0xdebcc
	push {r7}	@ 000debcc 80b4
.org 0xdebce
	adds r6, r0, #0	@ 000debce 061c
.org 0xdebd0
	adds r7, r1, #0	@ 000debd0 0f1c
.org 0xdebd2
	mov r8, r2	@ 000debd2 9046
.org 0xdebd4
	ldr r0, [sp, #24]	@ 000debd4 0698
.org 0xdebd6
	lsls r3, r3, #24	@ 000debd6 1b06
.org 0xdebd8
	lsrs r5, r3, #24	@ 000debd8 1d0e
.org 0xdebda
	lsls r0, r0, #24	@ 000debda 0006
.org 0xdebdc
	lsrs r4, r0, #24	@ 000debdc 040e
.org 0xdebde
	ldr r0, [pc, #72]	@ 000debde 1248
.org 0xdebe0
	ldr r0, [r0, #0]	@ 000debe0 0068
.org 0xdebe2
	bl 0x5500	@ 000debe2 26f78dfc
.org 0xdebe6
	adds r3, r0, #0	@ 000debe6 031c
.org 0xdebe8
	cmp r3, #0	@ 000debe8 002b
.org 0xdebea
	beq.n 0xdec1c	@ 000debea 17d0
.org 0xdebec
	adds r1, r3, #0	@ 000debec 191c
.org 0xdebee
	adds r1, #37	@ 000debee 2531
.org 0xdebf0
	movs r2, #0	@ 000debf0 0022
.org 0xdebf2
	movs r0, #1	@ 000debf2 0120
.org 0xdebf4
	strb r0, [r1, #0]	@ 000debf4 0870
.org 0xdebf6
	ldr r0, [pc, #52]	@ 000debf6 0d48
.org 0xdebf8
	movs r1, #51	@ 000debf8 3321
.org 0xdebfa
	strb r1, [r3, #9]	@ 000debfa 5972
.org 0xdebfc
	adds r0, #204	@ 000debfc cc30
.org 0xdebfe
	ldr r0, [r0, #0]	@ 000debfe 0068
.org 0xdec00
	ldr r0, [r0, #0]	@ 000dec00 0068
.org 0xdec02
	str r0, [r3, #20]	@ 000dec02 5861
.org 0xdec04
	movs r0, #0	@ 000dec04 0020
.org 0xdec06
	strh r2, [r3, #32]	@ 000dec06 1a84
.org 0xdec08
	adds r1, r3, #0	@ 000dec08 191c
.org 0xdec0a
	adds r1, #34	@ 000dec0a 2231
.org 0xdec0c
	strb r0, [r1, #0]	@ 000dec0c 0870
.org 0xdec0e
	str r6, [r3, #40]	@ 000dec0e 9e62
.org 0xdec10
	str r7, [r3, #84]	@ 000dec10 5f65
.org 0xdec12
	mov r1, r8	@ 000dec12 4146
.org 0xdec14
	str r1, [r3, #88]	@ 000dec14 9965
.org 0xdec16
	strb r0, [r3, #16]	@ 000dec16 1874
.org 0xdec18
	strb r5, [r3, #17]	@ 000dec18 5d74
.org 0xdec1a
	strb r4, [r3, #18]	@ 000dec1a 9c74
.org 0xdec1c
	adds r0, r3, #0	@ 000dec1c 181c
.org 0xdec1e
	pop {r3}	@ 000dec1e 08bc
.org 0xdec20
	mov r8, r3	@ 000dec20 9846
.org 0xdec22
	pop {r4, r5, r6, r7}	@ 000dec22 f0bc
.org 0xdec24
	pop {r1}	@ 000dec24 02bc
.org 0xdec26
	bx r1	@ 000dec26 0847
