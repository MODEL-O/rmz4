@ FUN_08016a98  entry 0x08016a98  size 190
.thumb
.org 0x16a98
FUN_08016a98:
	push {r4, r5, lr}	@ 00016a98 30b5
.org 0x16a9a
	adds r4, r0, #0	@ 00016a9a 041c
.org 0x16a9c
	ldr r0, [r4, #104]	@ 00016a9c a06e
.org 0x16a9e
	cmp r0, #0	@ 00016a9e 0028
.org 0x16aa0
	beq.n 0x16aaa	@ 00016aa0 03d0
.org 0x16aa2
	bl 0xe954c	@ 00016aa2 d2f053fd
.org 0x16aa6
	movs r0, #0	@ 00016aa6 0020
.org 0x16aa8
	str r0, [r4, #104]	@ 00016aa8 a066
.org 0x16aaa
	ldr r0, [r4, #108]	@ 00016aaa e06e
.org 0x16aac
	cmp r0, #0	@ 00016aac 0028
.org 0x16aae
	beq.n 0x16ab8	@ 00016aae 03d0
.org 0x16ab0
	bl 0xe954c	@ 00016ab0 d2f04cfd
.org 0x16ab4
	movs r0, #0	@ 00016ab4 0020
.org 0x16ab6
	str r0, [r4, #108]	@ 00016ab6 e066
.org 0x16ab8
	ldr r0, [r4, #112]	@ 00016ab8 206f
.org 0x16aba
	cmp r0, #0	@ 00016aba 0028
.org 0x16abc
	beq.n 0x16ac6	@ 00016abc 03d0
.org 0x16abe
	bl 0xe954c	@ 00016abe d2f045fd
.org 0x16ac2
	movs r0, #0	@ 00016ac2 0020
.org 0x16ac4
	str r0, [r4, #112]	@ 00016ac4 2067
.org 0x16ac6
	ldr r0, [r4, #116]	@ 00016ac6 606f
.org 0x16ac8
	cmp r0, #0	@ 00016ac8 0028
.org 0x16aca
	beq.n 0x16ad4	@ 00016aca 03d0
.org 0x16acc
	bl 0xe954c	@ 00016acc d2f03efd
.org 0x16ad0
	movs r0, #0	@ 00016ad0 0020
.org 0x16ad2
	str r0, [r4, #116]	@ 00016ad2 6067
.org 0x16ad4
	ldr r0, [r4, #120]	@ 00016ad4 a06f
.org 0x16ad6
	cmp r0, #0	@ 00016ad6 0028
.org 0x16ad8
	beq.n 0x16ae2	@ 00016ad8 03d0
.org 0x16ada
	bl 0xe954c	@ 00016ada d2f037fd
.org 0x16ade
	movs r0, #0	@ 00016ade 0020
.org 0x16ae0
	str r0, [r4, #120]	@ 00016ae0 a067
.org 0x16ae2
	ldr r0, [r4, #124]	@ 00016ae2 e06f
.org 0x16ae4
	cmp r0, #0	@ 00016ae4 0028
.org 0x16ae6
	beq.n 0x16af0	@ 00016ae6 03d0
.org 0x16ae8
	bl 0xe954c	@ 00016ae8 d2f030fd
.org 0x16aec
	movs r0, #0	@ 00016aec 0020
.org 0x16aee
	str r0, [r4, #124]	@ 00016aee e067
.org 0x16af0
	adds r5, r4, #0	@ 00016af0 251c
.org 0x16af2
	adds r5, #128	@ 00016af2 8035
.org 0x16af4
	ldr r0, [r5, #0]	@ 00016af4 2868
.org 0x16af6
	cmp r0, #0	@ 00016af6 0028
.org 0x16af8
	beq.n 0x16b02	@ 00016af8 03d0
.org 0x16afa
	bl 0xe954c	@ 00016afa d2f027fd
.org 0x16afe
	movs r0, #0	@ 00016afe 0020
.org 0x16b00
	str r0, [r5, #0]	@ 00016b00 2860
.org 0x16b02
	adds r4, #132	@ 00016b02 8434
.org 0x16b04
	ldr r0, [r4, #0]	@ 00016b04 2068
.org 0x16b06
	cmp r0, #0	@ 00016b06 0028
.org 0x16b08
	beq.n 0x16b12	@ 00016b08 03d0
.org 0x16b0a
	bl 0xe954c	@ 00016b0a d2f01ffd
.org 0x16b0e
	movs r0, #0	@ 00016b0e 0020
.org 0x16b10
	str r0, [r4, #0]	@ 00016b10 2060
.org 0x16b12
	ldr r4, [pc, #68]	@ 00016b12 114c
.org 0x16b14
	ldr r0, [pc, #68]	@ 00016b14 1148
.org 0x16b16
	adds r5, r4, r0	@ 00016b16 2518
.org 0x16b18
	ldr r0, [r5, #0]	@ 00016b18 2868
.org 0x16b1a
	cmp r0, #0	@ 00016b1a 0028
.org 0x16b1c
	beq.n 0x16b26	@ 00016b1c 03d0
.org 0x16b1e
	bl 0xe954c	@ 00016b1e d2f015fd
.org 0x16b22
	movs r0, #0	@ 00016b22 0020
.org 0x16b24
	str r0, [r5, #0]	@ 00016b24 2860
.org 0x16b26
	ldr r0, [pc, #56]	@ 00016b26 0e48
.org 0x16b28
	adds r5, r4, r0	@ 00016b28 2518
.org 0x16b2a
	ldr r0, [r5, #0]	@ 00016b2a 2868
.org 0x16b2c
	cmp r0, #0	@ 00016b2c 0028
.org 0x16b2e
	beq.n 0x16b38	@ 00016b2e 03d0
.org 0x16b30
	bl 0xe954c	@ 00016b30 d2f00cfd
.org 0x16b34
	movs r0, #0	@ 00016b34 0020
.org 0x16b36
	str r0, [r5, #0]	@ 00016b36 2860
.org 0x16b38
	ldr r0, [pc, #40]	@ 00016b38 0a48
.org 0x16b3a
	adds r4, r4, r0	@ 00016b3a 2418
.org 0x16b3c
	ldr r0, [r4, #0]	@ 00016b3c 2068
.org 0x16b3e
	cmp r0, #0	@ 00016b3e 0028
.org 0x16b40
	beq.n 0x16b4a	@ 00016b40 03d0
.org 0x16b42
	bl 0xe954c	@ 00016b42 d2f003fd
.org 0x16b46
	movs r0, #0	@ 00016b46 0020
.org 0x16b48
	str r0, [r4, #0]	@ 00016b48 2060
.org 0x16b4a
	movs r0, #116	@ 00016b4a 7420
.org 0x16b4c
	bl 0x2b5c	@ 00016b4c ecf706f8
.org 0x16b50
	pop {r4, r5}	@ 00016b50 30bc
.org 0x16b52
	pop {r0}	@ 00016b52 01bc
.org 0x16b54
	bx r0	@ 00016b54 0047
