@ FUN_0809ef8c  entry 0x0809ef8c  size 56
.thumb
.org 0x9ef8c
FUN_0809ef8c:
	push {r4, lr}	@ 0009ef8c 10b5
.org 0x9ef8e
	adds r1, r0, #0	@ 0009ef8e 011c
.org 0x9ef90
	ldr r2, [r1, #20]	@ 0009ef90 4a69
.org 0x9ef92
	movs r0, #1	@ 0009ef92 0120
.org 0x9ef94
	ands r0, r2	@ 0009ef94 1040
.org 0x9ef96
	cmp r0, #0	@ 0009ef96 0028
.org 0x9ef98
	beq.n 0x9efbe	@ 0009ef98 11d0
.org 0x9ef9a
	ldr r4, [r1, #44]	@ 0009ef9a cc6a
.org 0x9ef9c
	ldr r0, [pc, #36]	@ 0009ef9c 0948
.org 0x9ef9e
	ldr r1, [r0, #0]	@ 0009ef9e 0168
.org 0x9efa0
	movs r0, #128	@ 0009efa0 8020
.org 0x9efa2
	lsls r0, r0, #10	@ 0009efa2 8002
.org 0x9efa4
	ands r2, r0	@ 0009efa4 0240
.org 0x9efa6
	cmp r2, #0	@ 0009efa6 002a
.org 0x9efa8
	beq.n 0x9efbe	@ 0009efa8 09d0
.org 0x9efaa
	cmp r1, #0	@ 0009efaa 0029
.org 0x9efac
	beq.n 0x9efbe	@ 0009efac 07d0
.org 0x9efae
	adds r0, r1, #0	@ 0009efae 081c
.org 0x9efb0
	movs r1, #5	@ 0009efb0 0521
.org 0x9efb2
	movs r2, #3	@ 0009efb2 0322
.org 0x9efb4
	bl 0x3a578	@ 0009efb4 9bf7e0fa
.org 0x9efb8
	adds r1, r4, #0	@ 0009efb8 211c
.org 0x9efba
	adds r1, #180	@ 0009efba b431
.org 0x9efbc
	strb r0, [r1, #0]	@ 0009efbc 0870
.org 0x9efbe
	pop {r4}	@ 0009efbe 10bc
.org 0x9efc0
	pop {r0}	@ 0009efc0 01bc
.org 0x9efc2
	bx r0	@ 0009efc2 0047
