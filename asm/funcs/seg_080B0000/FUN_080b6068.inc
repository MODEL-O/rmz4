@ FUN_080b6068  entry 0x080b6068  size 44
.thumb
.org 0xb6068
FUN_080b6068:
	push {r1, lr}	@ 000b6068 02b5
.org 0xb606a
	movs r0, r0	@ 000b606a 0000
.org 0xb606c
	blt.n 0xb60f0	@ 000b606c 40db
.org 0xb606e
	lsrs r5, r0, #2	@ 000b606e 8508
.org 0xb6070
	push {r4, lr}	@ 000b6070 10b5
.org 0xb6072
	adds r3, r0, #0	@ 000b6072 031c
.org 0xb6074
	ldr r0, [r3, #40]	@ 000b6074 986a
.org 0xb6076
	adds r1, r0, #0	@ 000b6076 011c
.org 0xb6078
	adds r1, #204	@ 000b6078 cc31
.org 0xb607a
	ldrh r2, [r1, #0]	@ 000b607a 0a88
.org 0xb607c
	movs r4, #0	@ 000b607c 0024
.org 0xb607e
	ldrsh r0, [r1, r4]	@ 000b607e 085f
.org 0xb6080
	cmp r0, #0	@ 000b6080 0028
.org 0xb6082
	beq.n 0xb6088	@ 000b6082 01d0
.org 0xb6084
	subs r0, r2, #1	@ 000b6084 501e
.org 0xb6086
	strh r0, [r1, #0]	@ 000b6086 0880
.org 0xb6088
	adds r0, r3, #0	@ 000b6088 181c
.org 0xb608a
	bl 0x7f8ec	@ 000b608a c9f72ffc
.org 0xb608e
	pop {r4}	@ 000b608e 10bc
.org 0xb6090
	pop {r0}	@ 000b6090 01bc
.org 0xb6092
	bx r0	@ 000b6092 0047
