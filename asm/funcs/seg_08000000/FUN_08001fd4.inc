@ FUN_08001fd4  entry 0x08001fd4  size 64
.thumb
.org 0x1fd4
FUN_08001fd4:
	push {r4, lr}	@ 00001fd4 10b5
.org 0x1fd6
	sub sp, #4	@ 00001fd6 81b0
.org 0x1fd8
	lsls r3, r3, #16	@ 00001fd8 1b04
.org 0x1fda
	ldr r4, [pc, #56]	@ 00001fda 0e4c
.org 0x1fdc
	mov ip, r4	@ 00001fdc a446
.org 0x1fde
	adds r4, #200	@ 00001fde c834
.org 0x1fe0
	str r0, [r4, #0]	@ 00001fe0 2060
.org 0x1fe2
	mov r4, ip	@ 00001fe2 6446
.org 0x1fe4
	adds r4, #204	@ 00001fe4 cc34
.org 0x1fe6
	str r1, [r4, #0]	@ 00001fe6 2160
.org 0x1fe8
	mov r1, ip	@ 00001fe8 6146
.org 0x1fea
	adds r1, #196	@ 00001fea c431
.org 0x1fec
	str r2, [r1, #0]	@ 00001fec 0a60
.org 0x1fee
	adds r4, #4	@ 00001fee 0434
.org 0x1ff0
	lsrs r1, r3, #16	@ 00001ff0 190c
.org 0x1ff2
	orrs r1, r3	@ 00001ff2 1943
.org 0x1ff4
	str r1, [r4, #0]	@ 00001ff4 2160
.org 0x1ff6
	str r1, [sp, #0]	@ 00001ff6 0091
.org 0x1ff8
	ldr r1, [pc, #28]	@ 00001ff8 0749
.org 0x1ffa
	mov r3, sp	@ 00001ffa 6b46
.org 0x1ffc
	str r3, [r1, #0]	@ 00001ffc 0b60
.org 0x1ffe
	str r0, [r1, #4]	@ 00001ffe 4860
.org 0x2000
	lsrs r2, r2, #2	@ 00002000 9208
.org 0x2002
	movs r0, #133	@ 00002002 8520
.org 0x2004
	lsls r0, r0, #24	@ 00002004 0006
.org 0x2006
	orrs r2, r0	@ 00002006 0243
.org 0x2008
	str r2, [r1, #8]	@ 00002008 8a60
.org 0x200a
	ldr r0, [r1, #8]	@ 0000200a 8868
.org 0x200c
	add sp, #4	@ 0000200c 01b0
.org 0x200e
	pop {r4}	@ 0000200e 10bc
.org 0x2010
	pop {r0}	@ 00002010 01bc
.org 0x2012
	bx r0	@ 00002012 0047
