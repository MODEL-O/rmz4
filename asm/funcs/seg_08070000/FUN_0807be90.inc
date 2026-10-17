@ FUN_0807be90  entry 0x0807be90  size 128
.thumb
.org 0x7be90
FUN_0807be90:
	push {r4, r5, lr}	@ 0007be90 30b5
.org 0x7be92
	adds r4, r0, #0	@ 0007be92 041c
.org 0x7be94
	ldrb r0, [r4, #15]	@ 0007be94 e07b
.org 0x7be96
	cmp r0, #0	@ 0007be96 0028
.org 0x7be98
	bne.n 0x7beac	@ 0007be98 08d1
.org 0x7be9a
	adds r0, r4, #0	@ 0007be9a 201c
.org 0x7be9c
	movs r1, #9	@ 0007be9c 0921
.org 0x7be9e
	bl 0x7e8c8	@ 0007be9e 02f013fd
.org 0x7bea2
	movs r0, #24	@ 0007bea2 1820
.org 0x7bea4
	strb r0, [r4, #18]	@ 0007bea4 a074
.org 0x7bea6
	ldrb r0, [r4, #15]	@ 0007bea6 e07b
.org 0x7bea8
	adds r0, #1	@ 0007bea8 0130
.org 0x7beaa
	strb r0, [r4, #15]	@ 0007beaa e073
.org 0x7beac
	adds r5, r4, #0	@ 0007beac 251c
.org 0x7beae
	adds r5, #188	@ 0007beae bc35
.org 0x7beb0
	ldrb r0, [r5, #0]	@ 0007beb0 2878
.org 0x7beb2
	cmp r0, #0	@ 0007beb2 0028
.org 0x7beb4
	beq.n 0x7bebc	@ 0007beb4 02d0
.org 0x7beb6
	adds r0, r4, #0	@ 0007beb6 201c
.org 0x7beb8
	bl 0x1cff0	@ 0007beb8 a1f79af8
.org 0x7bebc
	adds r0, r4, #0	@ 0007bebc 201c
.org 0x7bebe
	adds r0, #116	@ 0007bebe 7430
.org 0x7bec0
	ldr r3, [pc, #76]	@ 0007bec0 134b
.org 0x7bec2
	ldr r2, [pc, #80]	@ 0007bec2 144a
.org 0x7bec4
	ldrb r1, [r5, #0]	@ 0007bec4 2978
.org 0x7bec6
	lsls r1, r1, #1	@ 0007bec6 4900
.org 0x7bec8
	adds r1, r1, r2	@ 0007bec8 8918
.org 0x7beca
	ldrh r2, [r1, #0]	@ 0007beca 0a88
.org 0x7becc
	lsls r2, r2, #2	@ 0007becc 9200
.org 0x7bece
	adds r2, r2, r3	@ 0007bece d218
.org 0x7bed0
	adds r1, r4, #0	@ 0007bed0 211c
.org 0x7bed2
	adds r1, #113	@ 0007bed2 7131
.org 0x7bed4
	ldrb r1, [r1, #0]	@ 0007bed4 0978
.org 0x7bed6
	lsls r1, r1, #24	@ 0007bed6 0906
.org 0x7bed8
	asrs r1, r1, #24	@ 0007bed8 0916
.org 0x7beda
	ldr r2, [r2, #0]	@ 0007beda 1268
.org 0x7bedc
	lsls r1, r1, #2	@ 0007bedc 8900
.org 0x7bede
	adds r1, r1, r2	@ 0007bede 8918
.org 0x7bee0
	ldr r1, [r1, #0]	@ 0007bee0 0968
.org 0x7bee2
	bl 0x5784	@ 0007bee2 89f74ffc
.org 0x7bee6
	ldrb r0, [r4, #18]	@ 0007bee6 a07c
.org 0x7bee8
	cmp r0, #0	@ 0007bee8 0028
.org 0x7beea
	beq.n 0x7bef6	@ 0007beea 04d0
.org 0x7beec
	subs r0, #1	@ 0007beec 0138
.org 0x7beee
	strb r0, [r4, #18]	@ 0007beee a074
.org 0x7bef0
	lsls r0, r0, #24	@ 0007bef0 0006
.org 0x7bef2
	cmp r0, #0	@ 0007bef2 0028
.org 0x7bef4
	bne.n 0x7bf0a	@ 0007bef4 09d1
.org 0x7bef6
	adds r0, r4, #0	@ 0007bef6 201c
.org 0x7bef8
	adds r0, #115	@ 0007bef8 7330
.org 0x7befa
	ldrb r0, [r0, #0]	@ 0007befa 0078
.org 0x7befc
	cmp r0, #3	@ 0007befc 0328
.org 0x7befe
	bne.n 0x7bf0a	@ 0007befe 04d1
.org 0x7bf00
	ldrb r0, [r4, #14]	@ 0007bf00 a07b
.org 0x7bf02
	adds r0, #1	@ 0007bf02 0130
.org 0x7bf04
	movs r1, #0	@ 0007bf04 0021
.org 0x7bf06
	strb r0, [r4, #14]	@ 0007bf06 a073
.org 0x7bf08
	strb r1, [r4, #15]	@ 0007bf08 e173
.org 0x7bf0a
	pop {r4, r5}	@ 0007bf0a 30bc
.org 0x7bf0c
	pop {r0}	@ 0007bf0c 01bc
.org 0x7bf0e
	bx r0	@ 0007bf0e 0047
