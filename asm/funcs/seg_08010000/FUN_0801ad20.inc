@ FUN_0801ad20  entry 0x0801ad20  size 66
.thumb
.org 0x1ad20
FUN_0801ad20:
	push {r4, lr}	@ 0001ad20 10b5
.org 0x1ad22
	adds r3, r0, #0	@ 0001ad22 031c
.org 0x1ad24
	ldrb r4, [r3, #14]	@ 0001ad24 9c7b
.org 0x1ad26
	cmp r4, #0	@ 0001ad26 002c
.org 0x1ad28
	bne.n 0x1ad5c	@ 0001ad28 18d1
.org 0x1ad2a
	ldr r1, [pc, #56]	@ 0001ad2a 0e49
.org 0x1ad2c
	ldr r0, [pc, #56]	@ 0001ad2c 0e48
.org 0x1ad2e
	strh r0, [r1, #0]	@ 0001ad2e 0880
.org 0x1ad30
	ldr r1, [r3, #92]	@ 0001ad30 d96d
.org 0x1ad32
	lsrs r1, r1, #4	@ 0001ad32 0909
.org 0x1ad34
	lsls r1, r1, #1	@ 0001ad34 4900
.org 0x1ad36
	ldr r0, [pc, #52]	@ 0001ad36 0d48
.org 0x1ad38
	adds r1, r1, r0	@ 0001ad38 0918
.org 0x1ad3a
	ldrh r2, [r1, #0]	@ 0001ad3a 0a88
.org 0x1ad3c
	ldr r0, [pc, #48]	@ 0001ad3c 0c48
.org 0x1ad3e
	ands r0, r2	@ 0001ad3e 1040
.org 0x1ad40
	movs r2, #3	@ 0001ad40 0322
.org 0x1ad42
	orrs r0, r2	@ 0001ad42 1043
.org 0x1ad44
	strh r0, [r1, #0]	@ 0001ad44 0880
.org 0x1ad46
	movs r0, #240	@ 0001ad46 f020
.org 0x1ad48
	lsls r0, r0, #2	@ 0001ad48 8000
.org 0x1ad4a
	str r0, [r3, #76]	@ 0001ad4a d864
.org 0x1ad4c
	movs r0, #160	@ 0001ad4c a020
.org 0x1ad4e
	lsls r0, r0, #1	@ 0001ad4e 4000
.org 0x1ad50
	str r0, [r3, #80]	@ 0001ad50 1865
.org 0x1ad52
	str r4, [r3, #68]	@ 0001ad52 5c64
.org 0x1ad54
	str r4, [r3, #72]	@ 0001ad54 9c64
.org 0x1ad56
	ldrb r0, [r3, #14]	@ 0001ad56 987b
.org 0x1ad58
	adds r0, #1	@ 0001ad58 0130
.org 0x1ad5a
	strb r0, [r3, #14]	@ 0001ad5a 9873
.org 0x1ad5c
	pop {r4}	@ 0001ad5c 10bc
.org 0x1ad5e
	pop {r0}	@ 0001ad5e 01bc
.org 0x1ad60
	bx r0	@ 0001ad60 0047
