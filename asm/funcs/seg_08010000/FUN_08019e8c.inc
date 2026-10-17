@ FUN_08019e8c  entry 0x08019e8c  size 50
.thumb
.org 0x19e8c
FUN_08019e8c:
	push {lr}	@ 00019e8c 00b5
.org 0x19e8e
	adds r3, r0, #0	@ 00019e8e 031c
.org 0x19e90
	ldrb r0, [r3, #14]	@ 00019e90 987b
.org 0x19e92
	cmp r0, #0	@ 00019e92 0028
.org 0x19e94
	bne.n 0x19eba	@ 00019e94 11d1
.org 0x19e96
	ldr r1, [r3, #92]	@ 00019e96 d96d
.org 0x19e98
	lsrs r1, r1, #4	@ 00019e98 0909
.org 0x19e9a
	lsls r1, r1, #1	@ 00019e9a 4900
.org 0x19e9c
	ldr r0, [pc, #32]	@ 00019e9c 0848
.org 0x19e9e
	adds r1, r1, r0	@ 00019e9e 0918
.org 0x19ea0
	ldrh r2, [r1, #0]	@ 00019ea0 0a88
.org 0x19ea2
	ldr r0, [pc, #32]	@ 00019ea2 0848
.org 0x19ea4
	ands r0, r2	@ 00019ea4 1040
.org 0x19ea6
	movs r2, #3	@ 00019ea6 0322
.org 0x19ea8
	orrs r0, r2	@ 00019ea8 1043
.org 0x19eaa
	strh r0, [r1, #0]	@ 00019eaa 0880
.org 0x19eac
	movs r0, #120	@ 00019eac 7820
.org 0x19eae
	str r0, [r3, #80]	@ 00019eae 1865
.org 0x19eb0
	movs r0, #192	@ 00019eb0 c020
.org 0x19eb2
	str r0, [r3, #72]	@ 00019eb2 9864
.org 0x19eb4
	ldrb r0, [r3, #14]	@ 00019eb4 987b
.org 0x19eb6
	adds r0, #1	@ 00019eb6 0130
.org 0x19eb8
	strb r0, [r3, #14]	@ 00019eb8 9873
.org 0x19eba
	pop {r0}	@ 00019eba 01bc
.org 0x19ebc
	bx r0	@ 00019ebc 0047
