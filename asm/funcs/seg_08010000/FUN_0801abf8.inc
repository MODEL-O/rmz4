@ FUN_0801abf8  entry 0x0801abf8  size 184
.thumb
.org 0x1abf8
FUN_0801abf8:
	push {r4, r5, r6, lr}	@ 0001abf8 70b5
.org 0x1abfa
	ldr r5, [pc, #180]	@ 0001abfa 2d4d
.org 0x1abfc
	ldr r1, [pc, #180]	@ 0001abfc 2d49
.org 0x1abfe
	adds r0, r5, r1	@ 0001abfe 6818
.org 0x1ac00
	ldrh r1, [r0, #0]	@ 0001ac00 0188
.org 0x1ac02
	lsrs r0, r1, #8	@ 0001ac02 080a
.org 0x1ac04
	cmp r0, #15	@ 0001ac04 0f28
.org 0x1ac06
	bne.n 0x1ac48	@ 0001ac06 1fd1
.org 0x1ac08
	movs r0, #255	@ 0001ac08 ff20
.org 0x1ac0a
	ands r0, r1	@ 0001ac0a 0840
.org 0x1ac0c
	cmp r0, #0	@ 0001ac0c 0028
.org 0x1ac0e
	bne.n 0x1ac48	@ 0001ac0e 1bd1
.org 0x1ac10
	ldr r6, [pc, #164]	@ 0001ac10 294e
.org 0x1ac12
	ldr r0, [pc, #168]	@ 0001ac12 2a48
.org 0x1ac14
	adds r5, r5, r0	@ 0001ac14 2d18
.org 0x1ac16
	ldrb r0, [r5, #0]	@ 0001ac16 2878
.org 0x1ac18
	lsrs r0, r0, #2	@ 0001ac18 8008
.org 0x1ac1a
	lsls r1, r0, #2	@ 0001ac1a 8100
.org 0x1ac1c
	adds r1, r1, r0	@ 0001ac1c 0918
.org 0x1ac1e
	lsls r1, r1, #2	@ 0001ac1e 8900
.org 0x1ac20
	ldr r4, [pc, #156]	@ 0001ac20 274c
.org 0x1ac22
	adds r1, r1, r4	@ 0001ac22 0919
.org 0x1ac24
	ldr r0, [r6, #0]	@ 0001ac24 3068
.org 0x1ac26
	adds r0, r0, r1	@ 0001ac26 4018
.org 0x1ac28
	movs r1, #128	@ 0001ac28 8021
.org 0x1ac2a
	lsls r1, r1, #7	@ 0001ac2a c901
.org 0x1ac2c
	bl 0x1ea4	@ 0001ac2c e7f73af9
.org 0x1ac30
	ldrb r0, [r5, #0]	@ 0001ac30 2878
.org 0x1ac32
	lsrs r0, r0, #2	@ 0001ac32 8008
.org 0x1ac34
	lsls r1, r0, #2	@ 0001ac34 8100
.org 0x1ac36
	adds r1, r1, r0	@ 0001ac36 0918
.org 0x1ac38
	lsls r1, r1, #2	@ 0001ac38 8900
.org 0x1ac3a
	adds r1, r1, r4	@ 0001ac3a 0919
.org 0x1ac3c
	ldr r0, [r6, #0]	@ 0001ac3c 3068
.org 0x1ac3e
	adds r0, r0, r1	@ 0001ac3e 4018
.org 0x1ac40
	adds r0, #12	@ 0001ac40 0c30
.org 0x1ac42
	movs r1, #0	@ 0001ac42 0021
.org 0x1ac44
	bl 0x2208	@ 0001ac44 e7f7e0fa
.org 0x1ac48
	ldr r5, [pc, #100]	@ 0001ac48 194d
.org 0x1ac4a
	ldr r1, [pc, #120]	@ 0001ac4a 1e49
.org 0x1ac4c
	adds r0, r5, r1	@ 0001ac4c 6818
.org 0x1ac4e
	ldrh r1, [r0, #0]	@ 0001ac4e 0188
.org 0x1ac50
	lsrs r0, r1, #8	@ 0001ac50 080a
.org 0x1ac52
	cmp r0, #15	@ 0001ac52 0f28
.org 0x1ac54
	bne.n 0x1acaa	@ 0001ac54 29d1
.org 0x1ac56
	movs r0, #255	@ 0001ac56 ff20
.org 0x1ac58
	ands r0, r1	@ 0001ac58 0840
.org 0x1ac5a
	cmp r0, #3	@ 0001ac5a 0328
.org 0x1ac5c
	beq.n 0x1ac62	@ 0001ac5c 01d0
.org 0x1ac5e
	cmp r0, #6	@ 0001ac5e 0628
.org 0x1ac60
	bne.n 0x1acaa	@ 0001ac60 23d1
.org 0x1ac62
	ldr r6, [pc, #84]	@ 0001ac62 154e
.org 0x1ac64
	ldr r0, [pc, #96]	@ 0001ac64 1848
.org 0x1ac66
	adds r5, r5, r0	@ 0001ac66 2d18
.org 0x1ac68
	ldrb r0, [r5, #0]	@ 0001ac68 2878
.org 0x1ac6a
	movs r1, #5	@ 0001ac6a 0521
.org 0x1ac6c
	bl 0x129120	@ 0001ac6c 0ef158fa
.org 0x1ac70
	lsls r0, r0, #24	@ 0001ac70 0006
.org 0x1ac72
	lsrs r0, r0, #24	@ 0001ac72 000e
.org 0x1ac74
	lsls r1, r0, #2	@ 0001ac74 8100
.org 0x1ac76
	adds r1, r1, r0	@ 0001ac76 0918
.org 0x1ac78
	lsls r1, r1, #2	@ 0001ac78 8900
.org 0x1ac7a
	ldr r4, [pc, #80]	@ 0001ac7a 144c
.org 0x1ac7c
	adds r1, r1, r4	@ 0001ac7c 0919
.org 0x1ac7e
	ldr r0, [r6, #0]	@ 0001ac7e 3068
.org 0x1ac80
	adds r0, r0, r1	@ 0001ac80 4018
.org 0x1ac82
	movs r1, #128	@ 0001ac82 8021
.org 0x1ac84
	lsls r1, r1, #7	@ 0001ac84 c901
.org 0x1ac86
	bl 0x1ea4	@ 0001ac86 e7f70df9
.org 0x1ac8a
	ldrb r0, [r5, #0]	@ 0001ac8a 2878
.org 0x1ac8c
	movs r1, #5	@ 0001ac8c 0521
.org 0x1ac8e
	bl 0x129120	@ 0001ac8e 0ef147fa
.org 0x1ac92
	lsls r0, r0, #24	@ 0001ac92 0006
.org 0x1ac94
	lsrs r0, r0, #24	@ 0001ac94 000e
.org 0x1ac96
	lsls r1, r0, #2	@ 0001ac96 8100
.org 0x1ac98
	adds r1, r1, r0	@ 0001ac98 0918
.org 0x1ac9a
	lsls r1, r1, #2	@ 0001ac9a 8900
.org 0x1ac9c
	adds r1, r1, r4	@ 0001ac9c 0919
.org 0x1ac9e
	ldr r0, [r6, #0]	@ 0001ac9e 3068
.org 0x1aca0
	adds r0, r0, r1	@ 0001aca0 4018
.org 0x1aca2
	adds r0, #12	@ 0001aca2 0c30
.org 0x1aca4
	movs r1, #0	@ 0001aca4 0021
.org 0x1aca6
	bl 0x2208	@ 0001aca6 e7f7affa
.org 0x1acaa
	pop {r4, r5, r6}	@ 0001acaa 70bc
.org 0x1acac
	pop {r0}	@ 0001acac 01bc
.org 0x1acae
	bx r0	@ 0001acae 0047
