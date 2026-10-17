@ FUN_0808bcb8  entry 0x0808bcb8  size 160
.thumb
.org 0x8bcb8
FUN_0808bcb8:
	push {r4, r5, lr}	@ 0008bcb8 30b5
.org 0x8bcba
	sub sp, #8	@ 0008bcba 82b0
.org 0x8bcbc
	adds r4, r0, #0	@ 0008bcbc 041c
.org 0x8bcbe
	adds r5, r4, #0	@ 0008bcbe 251c
.org 0x8bcc0
	adds r5, #187	@ 0008bcc0 bb35
.org 0x8bcc2
	ldrb r0, [r5, #0]	@ 0008bcc2 2878
.org 0x8bcc4
	subs r0, #1	@ 0008bcc4 0138
.org 0x8bcc6
	strb r0, [r5, #0]	@ 0008bcc6 2870
.org 0x8bcc8
	lsls r0, r0, #24	@ 0008bcc8 0006
.org 0x8bcca
	cmp r0, #0	@ 0008bcca 0028
.org 0x8bccc
	bne.n 0x8bcf8	@ 0008bccc 14d1
.org 0x8bcce
	ldr r0, [pc, #128]	@ 0008bcce 2048
.org 0x8bcd0
	ldr r1, [r0, #4]	@ 0008bcd0 4168
.org 0x8bcd2
	ldr r0, [r0, #0]	@ 0008bcd2 0068
.org 0x8bcd4
	str r0, [sp, #0]	@ 0008bcd4 0090
.org 0x8bcd6
	str r1, [sp, #4]	@ 0008bcd6 0191
.org 0x8bcd8
	adds r2, r4, #0	@ 0008bcd8 221c
.org 0x8bcda
	adds r2, #186	@ 0008bcda ba32
.org 0x8bcdc
	ldrb r0, [r2, #0]	@ 0008bcdc 1078
.org 0x8bcde
	adds r0, #1	@ 0008bcde 0130
.org 0x8bce0
	movs r1, #1	@ 0008bce0 0121
.org 0x8bce2
	ands r0, r1	@ 0008bce2 0840
.org 0x8bce4
	strb r0, [r2, #0]	@ 0008bce4 1070
.org 0x8bce6
	ldrb r0, [r2, #0]	@ 0008bce6 1078
.org 0x8bce8
	lsls r0, r0, #2	@ 0008bce8 8000
.org 0x8bcea
	add r0, sp	@ 0008bcea 6844
.org 0x8bcec
	ldrh r1, [r0, #0]	@ 0008bcec 0188
.org 0x8bcee
	adds r0, r4, #0	@ 0008bcee 201c
.org 0x8bcf0
	bl 0x1cf00	@ 0008bcf0 91f706f9
.org 0x8bcf4
	movs r0, #4	@ 0008bcf4 0420
.org 0x8bcf6
	strb r0, [r5, #0]	@ 0008bcf6 2870
.org 0x8bcf8
	adds r0, r4, #0	@ 0008bcf8 201c
.org 0x8bcfa
	bl 0x1cff0	@ 0008bcfa 91f779f9
.org 0x8bcfe
	adds r0, r4, #0	@ 0008bcfe 201c
.org 0x8bd00
	adds r0, #116	@ 0008bd00 7430
.org 0x8bd02
	ldr r3, [pc, #80]	@ 0008bd02 144b
.org 0x8bd04
	ldrb r1, [r4, #30]	@ 0008bd04 a17f
.org 0x8bd06
	lsls r1, r1, #8	@ 0008bd06 0902
.org 0x8bd08
	adds r2, r4, #0	@ 0008bd08 221c
.org 0x8bd0a
	adds r2, #112	@ 0008bd0a 7032
.org 0x8bd0c
	ldrb r2, [r2, #0]	@ 0008bd0c 1278
.org 0x8bd0e
	orrs r1, r2	@ 0008bd0e 1143
.org 0x8bd10
	ldr r2, [pc, #68]	@ 0008bd10 114a
.org 0x8bd12
	adds r1, r1, r2	@ 0008bd12 8918
.org 0x8bd14
	lsls r1, r1, #2	@ 0008bd14 8900
.org 0x8bd16
	adds r1, r1, r3	@ 0008bd16 c918
.org 0x8bd18
	adds r2, r4, #0	@ 0008bd18 221c
.org 0x8bd1a
	adds r2, #113	@ 0008bd1a 7132
.org 0x8bd1c
	ldrb r2, [r2, #0]	@ 0008bd1c 1278
.org 0x8bd1e
	lsls r2, r2, #24	@ 0008bd1e 1206
.org 0x8bd20
	asrs r2, r2, #24	@ 0008bd20 1216
.org 0x8bd22
	ldr r1, [r1, #0]	@ 0008bd22 0968
.org 0x8bd24
	lsls r2, r2, #2	@ 0008bd24 9200
.org 0x8bd26
	adds r2, r2, r1	@ 0008bd26 5218
.org 0x8bd28
	ldr r1, [r2, #0]	@ 0008bd28 1168
.org 0x8bd2a
	ldrb r2, [r1, #0]	@ 0008bd2a 0a78
.org 0x8bd2c
	lsls r1, r2, #1	@ 0008bd2c 5100
.org 0x8bd2e
	adds r1, r1, r2	@ 0008bd2e 8918
.org 0x8bd30
	lsls r1, r1, #3	@ 0008bd30 c900
.org 0x8bd32
	ldr r2, [pc, #40]	@ 0008bd32 0a4a
.org 0x8bd34
	adds r1, r1, r2	@ 0008bd34 8918
.org 0x8bd36
	bl 0x5784	@ 0008bd36 79f725fd
.org 0x8bd3a
	adds r0, r4, #0	@ 0008bd3a 201c
.org 0x8bd3c
	adds r0, #186	@ 0008bd3c ba30
.org 0x8bd3e
	ldrb r0, [r0, #0]	@ 0008bd3e 0078
.org 0x8bd40
	cmp r0, #0	@ 0008bd40 0028
.org 0x8bd42
	bne.n 0x8bd60	@ 0008bd42 0dd1
.org 0x8bd44
	ldrb r0, [r5, #0]	@ 0008bd44 2878
.org 0x8bd46
	cmp r0, #1	@ 0008bd46 0128
.org 0x8bd48
	bne.n 0x8bd60	@ 0008bd48 0ad1
.org 0x8bd4a
	movs r0, #1	@ 0008bd4a 0120
.org 0x8bd4c
	b.n 0x8bd62	@ 0008bd4c 09e0
.org 0x8bd4e
	.byte 0x00	@ 0008bd4e data
.org 0x8bd4f
	.byte 0x00	@ 0008bd4f data
.org 0x8bd50
	.byte 0x40,0x9b,0x12,0x08	@ 0008bd50 data
.org 0x8bd54
	.byte 0xec,0xf6,0x85,0x08	@ 0008bd54 data
