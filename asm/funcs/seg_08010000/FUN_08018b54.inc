@ FUN_08018b54  entry 0x08018b54  size 126
.thumb
.org 0x18b54
FUN_08018b54:
	push {lr}	@ 00018b54 00b5
.org 0x18b56
	adds r2, r0, #0	@ 00018b56 021c
.org 0x18b58
	ldrb r0, [r2, #14]	@ 00018b58 907b
.org 0x18b5a
	cmp r0, #0	@ 00018b5a 0028
.org 0x18b5c
	bne.n 0x18b90	@ 00018b5c 18d1
.org 0x18b5e
	ldr r1, [r2, #56]	@ 00018b5e 916b
.org 0x18b60
	movs r0, #240	@ 00018b60 f020
.org 0x18b62
	lsls r0, r0, #1	@ 00018b62 4000
.org 0x18b64
	cmp r1, r0	@ 00018b64 8142
.org 0x18b66
	ble.n 0x18b6e	@ 00018b66 02dd
.org 0x18b68
	movs r0, #135	@ 00018b68 8720
.org 0x18b6a
	lsls r0, r0, #4	@ 00018b6a 0001
.org 0x18b6c
	b.n 0x18b72	@ 00018b6c 01e0
.org 0x18b6e
	movs r0, #180	@ 00018b6e b420
.org 0x18b70
	lsls r0, r0, #4	@ 00018b70 0001
.org 0x18b72
	str r0, [r2, #76]	@ 00018b72 d064
.org 0x18b74
	movs r0, #0	@ 00018b74 0020
.org 0x18b76
	str r0, [r2, #80]	@ 00018b76 1065
.org 0x18b78
	movs r0, #128	@ 00018b78 8020
.org 0x18b7a
	str r0, [r2, #68]	@ 00018b7a 5064
.org 0x18b7c
	adds r0, #128	@ 00018b7c 8030
.org 0x18b7e
	str r0, [r2, #72]	@ 00018b7e 9064
.org 0x18b80
	ldr r1, [pc, #28]	@ 00018b80 0749
.org 0x18b82
	ldr r0, [pc, #32]	@ 00018b82 0848
.org 0x18b84
	strh r0, [r1, #0]	@ 00018b84 0880
.org 0x18b86
	ldr r0, [pc, #32]	@ 00018b86 0848
.org 0x18b88
	strh r0, [r1, #2]	@ 00018b88 4880
.org 0x18b8a
	ldrb r0, [r2, #14]	@ 00018b8a 907b
.org 0x18b8c
	adds r0, #1	@ 00018b8c 0130
.org 0x18b8e
	strb r0, [r2, #14]	@ 00018b8e 9073
.org 0x18b90
	ldr r1, [r2, #56]	@ 00018b90 916b
.org 0x18b92
	movs r0, #240	@ 00018b92 f020
.org 0x18b94
	lsls r0, r0, #1	@ 00018b94 4000
.org 0x18b96
	cmp r1, r0	@ 00018b96 8142
.org 0x18b98
	ble.n 0x18bb4	@ 00018b98 0cdd
.org 0x18b9a
	ldr r0, [pc, #16]	@ 00018b9a 0448
.org 0x18b9c
	ldr r1, [pc, #16]	@ 00018b9c 0449
.org 0x18b9e
	b.n 0x18bb8	@ 00018b9e 0be0
.org 0x18ba0
	.byte 0x40,0x0a,0x00,0x02	@ 00018ba0 data
.org 0x18ba4
	.byte 0x48,0x37,0x00,0x00	@ 00018ba4 data
.org 0x18ba8
	.byte 0x08,0x10,0x00,0x00	@ 00018ba8 data
.org 0x18bac
	.byte 0xb0,0x0a,0x00,0x02	@ 00018bac data
.org 0x18bb0
	.byte 0x2c,0xd0,0x02,0x00	@ 00018bb0 data
.org 0x18bb4
	ldr r0, [pc, #48]	@ 00018bb4 0c48
.org 0x18bb6
	ldr r1, [pc, #52]	@ 00018bb6 0d49
.org 0x18bb8
	adds r0, r0, r1	@ 00018bb8 4018
.org 0x18bba
	ldrh r0, [r0, #0]	@ 00018bba 0088
.org 0x18bbc
	lsls r2, r0, #16	@ 00018bbc 0204
.org 0x18bbe
	asrs r1, r2, #16	@ 00018bbe 1114
.org 0x18bc0
	ldr r0, [pc, #44]	@ 00018bc0 0b48
.org 0x18bc2
	cmp r1, r0	@ 00018bc2 8142
.org 0x18bc4
	ble.n 0x18be2	@ 00018bc4 0ddd
.org 0x18bc6
	ldr r3, [pc, #44]	@ 00018bc6 0b4b
.org 0x18bc8
	asrs r0, r2, #20	@ 00018bc8 1015
.org 0x18bca
	cmp r0, #0	@ 00018bca 0028
.org 0x18bcc
	bge.n 0x18bd0	@ 00018bcc 00da
.org 0x18bce
	adds r0, #3	@ 00018bce 0330
.org 0x18bd0
	asrs r0, r0, #2	@ 00018bd0 8010
