@ FUN_080cec78  entry 0x080cec78  size 278
.thumb
.org 0xcec78
FUN_080cec78:
	push {r4, r5, r6, r7, lr}	@ 000cec78 f0b5
.org 0xcec7a
	mov r7, r9	@ 000cec7a 4f46
.org 0xcec7c
	mov r6, r8	@ 000cec7c 4646
.org 0xcec7e
	push {r6, r7}	@ 000cec7e c0b4
.org 0xcec80
	sub sp, #12	@ 000cec80 83b0
.org 0xcec82
	adds r5, r0, #0	@ 000cec82 051c
.org 0xcec84
	ldr r1, [pc, #264]	@ 000cec84 4249
.org 0xcec86
	mov r0, sp	@ 000cec86 6846
.org 0xcec88
	movs r2, #3	@ 000cec88 0322
.org 0xcec8a
	bl 0x129258	@ 000cec8a 5af0e5fa
.org 0xcec8e
	add r7, sp, #4	@ 000cec8e 01af
.org 0xcec90
	ldr r1, [pc, #256]	@ 000cec90 4049
.org 0xcec92
	adds r0, r7, #0	@ 000cec92 381c
.org 0xcec94
	movs r2, #8	@ 000cec94 0822
.org 0xcec96
	bl 0x129258	@ 000cec96 5af0dffa
.org 0xcec9a
	adds r6, r5, #0	@ 000cec9a 2e1c
.org 0xcec9c
	adds r6, #180	@ 000cec9c b436
.org 0xcec9e
	ldrb r0, [r6, #0]	@ 000cec9e 3078
.org 0xceca0
	lsls r0, r0, #2	@ 000ceca0 8000
.org 0xceca2
	ldrb r1, [r5, #16]	@ 000ceca2 297c
.org 0xceca4
	adds r0, r0, r1	@ 000ceca4 4018
.org 0xceca6
	lsls r0, r0, #24	@ 000ceca6 0006
.org 0xceca8
	lsrs r0, r0, #24	@ 000ceca8 000e
.org 0xcecaa
	mov r8, r0	@ 000cecaa 8046
.org 0xcecac
	adds r0, r5, #0	@ 000cecac 281c
.org 0xcecae
	bl 0x1cc9c	@ 000cecae 4df7f5ff
.org 0xcecb2
	ldrb r1, [r5, #10]	@ 000cecb2 a97a
.org 0xcecb4
	movs r0, #1	@ 000cecb4 0120
.org 0xcecb6
	movs r2, #0	@ 000cecb6 0022
.org 0xcecb8
	mov r9, r2	@ 000cecb8 9146
.org 0xcecba
	orrs r0, r1	@ 000cecba 0843
.org 0xcecbc
	movs r1, #2	@ 000cecbc 0221
.org 0xcecbe
	orrs r0, r1	@ 000cecbe 0843
.org 0xcecc0
	strb r0, [r5, #10]	@ 000cecc0 a872
.org 0xcecc2
	movs r1, #128	@ 000cecc2 8021
.org 0xcecc4
	lsls r1, r1, #1	@ 000cecc4 4900
.org 0xcecc6
	adds r0, r5, #0	@ 000cecc6 281c
.org 0xcecc8
	bl 0x1cf00	@ 000cecc8 4ef71af9
.org 0xceccc
	ldr r1, [pc, #200]	@ 000ceccc 3249
.org 0xcecce
	ldrb r0, [r5, #9]	@ 000cecce 687a
.org 0xcecd0
	lsls r0, r0, #2	@ 000cecd0 8000
.org 0xcecd2
	adds r0, r0, r1	@ 000cecd2 4018
.org 0xcecd4
	movs r1, #1	@ 000cecd4 0121
.org 0xcecd6
	str r1, [r5, #12]	@ 000cecd6 e960
.org 0xcecd8
	ldr r0, [r0, #0]	@ 000cecd8 0068
.org 0xcecda
	ldr r0, [r0, #4]	@ 000cecda 4068
.org 0xcecdc
	str r0, [r5, #20]	@ 000cecdc 6861
.org 0xcecde
	ldrb r0, [r5, #17]	@ 000cecde 687c
.org 0xcece0
	cmp r0, #0	@ 000cece0 0028
.org 0xcece2
	bne.n 0xced08	@ 000cece2 11d1
.org 0xcece4
	adds r4, r5, #0	@ 000cece4 2c1c
.org 0xcece6
	adds r4, #84	@ 000cece6 5434
.org 0xcece8
	ldrb r1, [r5, #16]	@ 000cece8 297c
.org 0xcecea
	lsls r1, r1, #8	@ 000cecea 0902
.org 0xcecec
	movs r0, #1	@ 000cecec 0120
.org 0xcecee
	orrs r1, r0	@ 000cecee 0143
.org 0xcecf0
	ldrb r2, [r6, #0]	@ 000cecf0 3278
.org 0xcecf2
	adds r0, r4, #0	@ 000cecf2 201c
.org 0xcecf4
	bl 0xcec18	@ 000cecf4 fff790ff
.org 0xcecf8
	ldrb r1, [r5, #16]	@ 000cecf8 297c
.org 0xcecfa
	lsls r1, r1, #8	@ 000cecfa 0902
.org 0xcecfc
	movs r0, #2	@ 000cecfc 0220
.org 0xcecfe
	orrs r1, r0	@ 000cecfe 0143
.org 0xced00
	ldrb r2, [r6, #0]	@ 000ced00 3278
.org 0xced02
	adds r0, r4, #0	@ 000ced02 201c
.org 0xced04
	bl 0xcec18	@ 000ced04 fff788ff
.org 0xced08
	ldrb r0, [r5, #17]	@ 000ced08 687c
.org 0xced0a
	mov r3, sp	@ 000ced0a 6b46
.org 0xced0c
	adds r1, r3, r0	@ 000ced0c 1918
.org 0xced0e
	mov r2, r8	@ 000ced0e 4246
.org 0xced10
	adds r0, r7, r2	@ 000ced10 b818
.org 0xced12
	ldrb r0, [r0, #0]	@ 000ced12 0078
.org 0xced14
	ldrb r3, [r1, #0]	@ 000ced14 0b78
.org 0xced16
	adds r0, r0, r3	@ 000ced16 c018
.org 0xced18
	strb r0, [r1, #0]	@ 000ced18 0870
.org 0xced1a
	ldr r2, [pc, #128]	@ 000ced1a 204a
.org 0xced1c
	ldrb r0, [r5, #17]	@ 000ced1c 687c
.org 0xced1e
	add r0, sp	@ 000ced1e 6844
.org 0xced20
	ldrb r0, [r0, #0]	@ 000ced20 0078
.org 0xced22
	adds r0, #64	@ 000ced22 4030
.org 0xced24
	lsls r0, r0, #24	@ 000ced24 0006
.org 0xced26
	lsrs r0, r0, #23	@ 000ced26 c00d
.org 0xced28
	adds r0, r0, r2	@ 000ced28 8018
.org 0xced2a
	movs r3, #0	@ 000ced2a 0023
.org 0xced2c
	ldrsh r1, [r0, r3]	@ 000ced2c c15e
.org 0xced2e
	lsls r0, r1, #1	@ 000ced2e 4800
.org 0xced30
	adds r0, r0, r1	@ 000ced30 4018
.org 0xced32
	str r0, [r5, #92]	@ 000ced32 e865
.org 0xced34
	ldrb r0, [r5, #17]	@ 000ced34 687c
.org 0xced36
	add r0, sp	@ 000ced36 6844
.org 0xced38
	ldrb r0, [r0, #0]	@ 000ced38 0078
.org 0xced3a
	lsls r0, r0, #1	@ 000ced3a 4000
.org 0xced3c
	adds r0, r0, r2	@ 000ced3c 8018
.org 0xced3e
	movs r2, #0	@ 000ced3e 0022
.org 0xced40
	ldrsh r1, [r0, r2]	@ 000ced40 815e
.org 0xced42
	lsls r0, r1, #1	@ 000ced42 4800
.org 0xced44
	adds r0, r0, r1	@ 000ced44 4018
.org 0xced46
	str r0, [r5, #96]	@ 000ced46 2866
.org 0xced48
	lsls r0, r0, #8	@ 000ced48 0002
.org 0xced4a
	negs r0, r0	@ 000ced4a 4042
.org 0xced4c
	cmp r0, #0	@ 000ced4c 0028
.org 0xced4e
	bge.n 0xced52	@ 000ced4e 00da
.org 0xced50
	adds r0, #255	@ 000ced50 ff30
.org 0xced52
	asrs r0, r0, #8	@ 000ced52 0012
.org 0xced54
	str r0, [r5, #96]	@ 000ced54 2866
.org 0xced56
	movs r0, #180	@ 000ced56 b420
.org 0xced58
	strb r0, [r5, #18]	@ 000ced58 a874
.org 0xced5a
	ldrb r0, [r5, #10]	@ 000ced5a a87a
.org 0xced5c
	movs r1, #4	@ 000ced5c 0421
.org 0xced5e
	orrs r0, r1	@ 000ced5e 0843
.org 0xced60
	strb r0, [r5, #10]	@ 000ced60 a872
.org 0xced62
	adds r4, r5, #0	@ 000ced62 2c1c
.org 0xced64
	adds r4, #116	@ 000ced64 7434
.org 0xced66
	ldr r1, [pc, #56]	@ 000ced66 0e49
.org 0xced68
	adds r2, r5, #0	@ 000ced68 2a1c
.org 0xced6a
	adds r2, #84	@ 000ced6a 5432
.org 0xced6c
	adds r0, r4, #0	@ 000ced6c 201c
.org 0xced6e
	movs r3, #255	@ 000ced6e ff23
.org 0xced70
	bl 0x5760	@ 000ced70 36f7f6fc
.org 0xced74
	str r5, [r4, #44]	@ 000ced74 e562
.org 0xced76
	movs r0, #0	@ 000ced76 0020
.org 0xced78
	str r0, [r4, #36]	@ 000ced78 6062
.org 0xced7a
	adds r0, r5, #0	@ 000ced7a 281c
.org 0xced7c
	bl 0xceda4	@ 000ced7c 00f012f8
.org 0xced80
	add sp, #12	@ 000ced80 03b0
.org 0xced82
	pop {r3, r4}	@ 000ced82 18bc
.org 0xced84
	mov r8, r3	@ 000ced84 9846
.org 0xced86
	mov r9, r4	@ 000ced86 a146
.org 0xced88
	pop {r4, r5, r6, r7}	@ 000ced88 f0bc
.org 0xced8a
	pop {r0}	@ 000ced8a 01bc
.org 0xced8c
	bx r0	@ 000ced8c 0047
