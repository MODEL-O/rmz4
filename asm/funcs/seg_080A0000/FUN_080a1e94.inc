@ FUN_080a1e94  entry 0x080a1e94  size 72
.thumb
.org 0xa1e94
FUN_080a1e94:
	push {r4, r5, r6, lr}	@ 000a1e94 70b5
.org 0xa1e96
	adds r4, r0, #0	@ 000a1e96 041c
.org 0xa1e98
	ldr r0, [r4, #20]	@ 000a1e98 6069
.org 0xa1e9a
	movs r6, #1	@ 000a1e9a 0126
.org 0xa1e9c
	ands r0, r6	@ 000a1e9c 3040
.org 0xa1e9e
	cmp r0, #0	@ 000a1e9e 0028
.org 0xa1ea0
	beq.n 0xa1ed6	@ 000a1ea0 19d0
.org 0xa1ea2
	ldr r5, [r4, #44]	@ 000a1ea2 e56a
.org 0xa1ea4
	movs r0, #10	@ 000a1ea4 0a20
.org 0xa1ea6
	bl 0x6984	@ 000a1ea6 64f76dfd
.org 0xa1eaa
	ldr r1, [r4, #20]	@ 000a1eaa 6169
.org 0xa1eac
	movs r0, #128	@ 000a1eac 8020
.org 0xa1eae
	lsls r0, r0, #2	@ 000a1eae 8000
.org 0xa1eb0
	ands r0, r1	@ 000a1eb0 0840
.org 0xa1eb2
	cmp r0, #0	@ 000a1eb2 0028
.org 0xa1eb4
	beq.n 0xa1ed6	@ 000a1eb4 0fd0
.org 0xa1eb6
	movs r0, #128	@ 000a1eb6 8020
.org 0xa1eb8
	lsls r0, r0, #10	@ 000a1eb8 8002
.org 0xa1eba
	ands r1, r0	@ 000a1eba 0140
.org 0xa1ebc
	cmp r1, #0	@ 000a1ebc 0029
.org 0xa1ebe
	beq.n 0xa1ed6	@ 000a1ebe 0ad0
.org 0xa1ec0
	adds r0, r5, #0	@ 000a1ec0 281c
.org 0xa1ec2
	adds r0, #182	@ 000a1ec2 b630
.org 0xa1ec4
	strb r6, [r0, #0]	@ 000a1ec4 0670
.org 0xa1ec6
	ldr r0, [pc, #20]	@ 000a1ec6 0548
.org 0xa1ec8
	ldr r0, [r0, #0]	@ 000a1ec8 0068
.org 0xa1eca
	cmp r0, #0	@ 000a1eca 0028
.org 0xa1ecc
	beq.n 0xa1ed6	@ 000a1ecc 03d0
.org 0xa1ece
	movs r1, #6	@ 000a1ece 0621
.org 0xa1ed0
	movs r2, #7	@ 000a1ed0 0722
.org 0xa1ed2
	bl 0x3a578	@ 000a1ed2 98f751fb
.org 0xa1ed6
	pop {r4, r5, r6}	@ 000a1ed6 70bc
.org 0xa1ed8
	pop {r0}	@ 000a1ed8 01bc
.org 0xa1eda
	bx r0	@ 000a1eda 0047
