@ FUN_0800ccd4  entry 0x0800ccd4  size 146
.thumb
.org 0xccd4
FUN_0800ccd4:
	push {r4, r5, lr}	@ 0000ccd4 30b5
.org 0xccd6
	adds r3, r0, #0	@ 0000ccd6 031c
.org 0xccd8
	ldr r0, [r3, #92]	@ 0000ccd8 d86d
.org 0xccda
	lsls r2, r0, #16	@ 0000ccda 0204
.org 0xccdc
	lsrs r4, r2, #16	@ 0000ccdc 140c
.org 0xccde
	adds r5, r4, #0	@ 0000ccde 251c
.org 0xcce0
	ldrb r0, [r3, #14]	@ 0000cce0 987b
.org 0xcce2
	cmp r0, #0	@ 0000cce2 0028
.org 0xcce4
	bne.n 0xcd00	@ 0000cce4 0cd1
.org 0xcce6
	lsrs r2, r2, #20	@ 0000cce6 120d
.org 0xcce8
	lsls r2, r2, #1	@ 0000cce8 5200
.org 0xccea
	ldr r0, [pc, #48]	@ 0000ccea 0c48
.org 0xccec
	adds r2, r2, r0	@ 0000ccec 1218
.org 0xccee
	ldrh r1, [r2, #0]	@ 0000ccee 1188
.org 0xccf0
	ldr r0, [pc, #44]	@ 0000ccf0 0b48
.org 0xccf2
	ands r0, r1	@ 0000ccf2 0840
.org 0xccf4
	movs r1, #3	@ 0000ccf4 0321
.org 0xccf6
	orrs r0, r1	@ 0000ccf6 0843
.org 0xccf8
	strh r0, [r2, #0]	@ 0000ccf8 1080
.org 0xccfa
	ldrb r0, [r3, #14]	@ 0000ccfa 987b
.org 0xccfc
	adds r0, #1	@ 0000ccfc 0130
.org 0xccfe
	strb r0, [r3, #14]	@ 0000ccfe 9873
.org 0xcd00
	ldr r1, [r3, #52]	@ 0000cd00 596b
.org 0xcd02
	ldr r0, [pc, #32]	@ 0000cd02 0848
.org 0xcd04
	cmp r1, r0	@ 0000cd04 8142
.org 0xcd06
	ble.n 0xcd34	@ 0000cd06 15dd
.org 0xcd08
	cmp r4, #36	@ 0000cd08 242c
.org 0xcd0a
	bne.n 0xcd2c	@ 0000cd0a 0fd1
.org 0xcd0c
	ldr r0, [pc, #24]	@ 0000cd0c 0648
.org 0xcd0e
	str r0, [r3, #76]	@ 0000cd0e d864
.org 0xcd10
	movs r0, #0	@ 0000cd10 0020
.org 0xcd12
	str r0, [r3, #80]	@ 0000cd12 1865
.org 0xcd14
	movs r0, #128	@ 0000cd14 8020
.org 0xcd16
	str r0, [r3, #68]	@ 0000cd16 5864
.org 0xcd18
	adds r0, #128	@ 0000cd18 8030
.org 0xcd1a
	b.n 0xcd76	@ 0000cd1a 2ce0
.org 0xcd1c
	.byte 0x04,0x0a,0x00,0x02	@ 0000cd1c data
.org 0xcd20
	.byte 0xfc,0xff,0x00,0x00	@ 0000cd20 data
.org 0xcd24
	.byte 0x70,0x17,0x00,0x00	@ 0000cd24 data
.org 0xcd28
	.byte 0x5c,0x0d,0x00,0x00	@ 0000cd28 data
.org 0xcd2c
	ldr r0, [pc, #0]	@ 0000cd2c 0048
.org 0xcd2e
	b.n 0xcd6a	@ 0000cd2e 1ce0
.org 0xcd30
	.byte 0x70,0x16,0x00,0x00	@ 0000cd30 data
.org 0xcd34
	movs r0, #135	@ 0000cd34 8720
.org 0xcd36
	lsls r0, r0, #5	@ 0000cd36 4001
.org 0xcd38
	cmp r1, r0	@ 0000cd38 8142
.org 0xcd3a
	ble.n 0xcd66	@ 0000cd3a 14dd
.org 0xcd3c
	cmp r5, #36	@ 0000cd3c 242d
.org 0xcd3e
	bne.n 0xcd54	@ 0000cd3e 09d1
.org 0xcd40
	ldr r0, [pc, #12]	@ 0000cd40 0348
.org 0xcd42
	str r0, [r3, #76]	@ 0000cd42 d864
.org 0xcd44
	movs r0, #200	@ 0000cd44 c820
.org 0xcd46
	lsls r0, r0, #1	@ 0000cd46 4000
.org 0xcd48
	str r0, [r3, #80]	@ 0000cd48 1865
.org 0xcd4a
	movs r0, #128	@ 0000cd4a 8020
.org 0xcd4c
	str r0, [r3, #68]	@ 0000cd4c 5864
.org 0xcd4e
	b.n 0xcd76	@ 0000cd4e 12e0
.org 0xcd50
	.byte 0x24,0x09,0x00,0x00	@ 0000cd50 data
.org 0xcd54
	movs r0, #150	@ 0000cd54 9620
.org 0xcd56
	lsls r0, r0, #5	@ 0000cd56 4001
.org 0xcd58
	str r0, [r3, #76]	@ 0000cd58 d864
.org 0xcd5a
	movs r0, #160	@ 0000cd5a a020
.org 0xcd5c
	lsls r0, r0, #2	@ 0000cd5c 8000
.org 0xcd5e
	str r0, [r3, #80]	@ 0000cd5e 1865
.org 0xcd60
	movs r0, #0	@ 0000cd60 0020
.org 0xcd62
	str r0, [r3, #68]	@ 0000cd62 5864
.org 0xcd64
	b.n 0xcd76	@ 0000cd64 07e0
