@ FUN_080ec8d8  entry 0x080ec8d8  size 70
.thumb
.org 0xec8d8
FUN_080ec8d8:
	push {r4, r5, lr}	@ 000ec8d8 30b5
.org 0xec8da
	adds r5, r0, #0	@ 000ec8da 051c
.org 0xec8dc
	ldrb r0, [r5, #15]	@ 000ec8dc e87b
.org 0xec8de
	cmp r0, #0	@ 000ec8de 0028
.org 0xec8e0
	bne.n 0xec8f2	@ 000ec8e0 07d1
.org 0xec8e2
	movs r1, #184	@ 000ec8e2 b821
.org 0xec8e4
	lsls r1, r1, #2	@ 000ec8e4 8900
.org 0xec8e6
	movs r0, #10	@ 000ec8e6 0a20
.org 0xec8e8
	bl 0x249c	@ 000ec8e8 15f7d8fd
.org 0xec8ec
	ldrb r0, [r5, #15]	@ 000ec8ec e87b
.org 0xec8ee
	adds r0, #1	@ 000ec8ee 0130
.org 0xec8f0
	strb r0, [r5, #15]	@ 000ec8f0 e873
.org 0xec8f2
	movs r0, #10	@ 000ec8f2 0a20
.org 0xec8f4
	bl 0x25d8	@ 000ec8f4 15f770fe
.org 0xec8f8
	adds r4, r0, #0	@ 000ec8f8 041c
.org 0xec8fa
	lsls r4, r4, #24	@ 000ec8fa 2406
.org 0xec8fc
	lsrs r4, r4, #24	@ 000ec8fc 240e
.org 0xec8fe
	adds r0, r5, #0	@ 000ec8fe 281c
.org 0xec900
	bl 0x1cff0	@ 000ec900 30f776fb
.org 0xec904
	subs r4, #3	@ 000ec904 033c
.org 0xec906
	cmp r4, #1	@ 000ec906 012c
.org 0xec908
	bhi.n 0xec918	@ 000ec908 06d8
.org 0xec90a
	movs r0, #10	@ 000ec90a 0a20
.org 0xec90c
	bl 0x2624	@ 000ec90c 15f78afe
.org 0xec910
	movs r0, #0	@ 000ec910 0020
.org 0xec912
	strb r0, [r5, #13]	@ 000ec912 6873
.org 0xec914
	strb r0, [r5, #14]	@ 000ec914 a873
.org 0xec916
	strb r0, [r5, #15]	@ 000ec916 e873
.org 0xec918
	pop {r4, r5}	@ 000ec918 30bc
.org 0xec91a
	pop {r0}	@ 000ec91a 01bc
.org 0xec91c
	bx r0	@ 000ec91c 0047
