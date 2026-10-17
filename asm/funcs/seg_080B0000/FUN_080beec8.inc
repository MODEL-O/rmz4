@ FUN_080beec8  entry 0x080beec8  size 172
.thumb
.org 0xbeec8
FUN_080beec8:
	push {r4, r5, r6, lr}	@ 000beec8 70b5
.org 0xbeeca
	adds r6, r0, #0	@ 000beeca 061c
.org 0xbeecc
	ldrb r0, [r6, #16]	@ 000beecc 307c
.org 0xbeece
	cmp r0, #3	@ 000beece 0328
.org 0xbeed0
	bne.n 0xbef24	@ 000beed0 28d1
.org 0xbeed2
	adds r0, r6, #0	@ 000beed2 301c
.org 0xbeed4
	bl 0x1cc9c	@ 000beed4 5df7e2fe
.org 0xbeed8
	ldrb r1, [r6, #10]	@ 000beed8 b17a
.org 0xbeeda
	movs r0, #1	@ 000beeda 0120
.org 0xbeedc
	movs r5, #0	@ 000beedc 0025
.org 0xbeede
	orrs r0, r1	@ 000beede 0843
.org 0xbeee0
	movs r1, #2	@ 000beee0 0221
.org 0xbeee2
	orrs r0, r1	@ 000beee2 0843
.org 0xbeee4
	movs r1, #4	@ 000beee4 0421
.org 0xbeee6
	orrs r0, r1	@ 000beee6 0843
.org 0xbeee8
	strb r0, [r6, #10]	@ 000beee8 b072
.org 0xbeeea
	adds r4, r6, #0	@ 000beeea 341c
.org 0xbeeec
	adds r4, #116	@ 000beeec 7434
.org 0xbeeee
	ldr r1, [pc, #44]	@ 000beeee 0b49
.org 0xbeef0
	adds r2, r6, #0	@ 000beef0 321c
.org 0xbeef2
	adds r2, #84	@ 000beef2 5432
.org 0xbeef4
	adds r0, r4, #0	@ 000beef4 201c
.org 0xbeef6
	movs r3, #0	@ 000beef6 0023
.org 0xbeef8
	bl 0x5760	@ 000beef8 46f732fc
.org 0xbeefc
	str r6, [r4, #44]	@ 000beefc e662
.org 0xbeefe
	str r5, [r4, #36]	@ 000beefe 6562
.org 0xbef00
	ldr r1, [pc, #28]	@ 000bef00 0749
.org 0xbef02
	ldrb r0, [r6, #9]	@ 000bef02 707a
.org 0xbef04
	lsls r0, r0, #2	@ 000bef04 8000
.org 0xbef06
	adds r0, r0, r1	@ 000bef06 4018
.org 0xbef08
	movs r1, #1	@ 000bef08 0121
.org 0xbef0a
	str r1, [r6, #12]	@ 000bef0a f160
.org 0xbef0c
	ldr r0, [r0, #0]	@ 000bef0c 0068
.org 0xbef0e
	ldr r0, [r0, #4]	@ 000bef0e 4068
.org 0xbef10
	str r0, [r6, #20]	@ 000bef10 7061
.org 0xbef12
	adds r0, r6, #0	@ 000bef12 301c
.org 0xbef14
	bl 0xbef88	@ 000bef14 00f038f8
.org 0xbef18
	b.n 0xbef78	@ 000bef18 2ee0
.org 0xbef1a
	.byte 0x00	@ 000bef1a data
.org 0xbef1b
	.byte 0x00	@ 000bef1b data
.org 0xbef1c
	.byte 0xe4,0x4e,0x86,0x08	@ 000bef1c data
.org 0xbef20
	.byte 0xf4,0x49,0x86,0x08	@ 000bef20 data
.org 0xbef24
	adds r0, r6, #0	@ 000bef24 301c
.org 0xbef26
	bl 0x1cc9c	@ 000bef26 5df7b9fe
.org 0xbef2a
	adds r1, r6, #0	@ 000bef2a 311c
.org 0xbef2c
	adds r1, #80	@ 000bef2c 5031
.org 0xbef2e
	movs r5, #0	@ 000bef2e 0025
.org 0xbef30
	movs r0, #128	@ 000bef30 8020
.org 0xbef32
	lsls r0, r0, #1	@ 000bef32 4000
.org 0xbef34
	strh r0, [r1, #0]	@ 000bef34 0880
.org 0xbef36
	adds r1, #2	@ 000bef36 0231
.org 0xbef38
	strh r0, [r1, #0]	@ 000bef38 0880
.org 0xbef3a
	ldrb r1, [r6, #10]	@ 000bef3a b17a
.org 0xbef3c
	movs r0, #1	@ 000bef3c 0120
.org 0xbef3e
	orrs r0, r1	@ 000bef3e 0843
.org 0xbef40
	movs r1, #2	@ 000bef40 0221
.org 0xbef42
	orrs r0, r1	@ 000bef42 0843
.org 0xbef44
	movs r1, #4	@ 000bef44 0421
.org 0xbef46
	orrs r0, r1	@ 000bef46 0843
.org 0xbef48
	strb r0, [r6, #10]	@ 000bef48 b072
.org 0xbef4a
	adds r4, r6, #0	@ 000bef4a 341c
.org 0xbef4c
	adds r4, #116	@ 000bef4c 7434
.org 0xbef4e
	ldr r1, [pc, #48]	@ 000bef4e 0c49
.org 0xbef50
	adds r2, r6, #0	@ 000bef50 321c
.org 0xbef52
	adds r2, #84	@ 000bef52 5432
.org 0xbef54
	adds r0, r4, #0	@ 000bef54 201c
.org 0xbef56
	movs r3, #0	@ 000bef56 0023
.org 0xbef58
	bl 0x5760	@ 000bef58 46f702fc
.org 0xbef5c
	str r6, [r4, #44]	@ 000bef5c e662
.org 0xbef5e
	str r5, [r4, #36]	@ 000bef5e 6562
.org 0xbef60
	ldr r1, [pc, #32]	@ 000bef60 0849
.org 0xbef62
	ldrb r0, [r6, #9]	@ 000bef62 707a
.org 0xbef64
	lsls r0, r0, #2	@ 000bef64 8000
.org 0xbef66
	adds r0, r0, r1	@ 000bef66 4018
.org 0xbef68
	movs r1, #1	@ 000bef68 0121
.org 0xbef6a
	str r1, [r6, #12]	@ 000bef6a f160
.org 0xbef6c
	ldr r0, [r0, #0]	@ 000bef6c 0068
.org 0xbef6e
	ldr r0, [r0, #4]	@ 000bef6e 4068
.org 0xbef70
	str r0, [r6, #20]	@ 000bef70 7061
.org 0xbef72
	adds r0, r6, #0	@ 000bef72 301c
