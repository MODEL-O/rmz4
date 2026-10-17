@ FUN_08001178  entry 0x08001178  size 62
.thumb
.org 0x1178
FUN_08001178:
	push {lr}	@ 00001178 00b5
.org 0x117a
	sub sp, #4	@ 0000117a 81b0
.org 0x117c
	mov r1, sp	@ 0000117c 6946
.org 0x117e
	ldr r0, [pc, #56]	@ 0000117e 0e48
.org 0x1180
	ldrh r0, [r0, #0]	@ 00001180 0088
.org 0x1182
	strh r0, [r1, #0]	@ 00001182 0880
.org 0x1184
	mov r0, sp	@ 00001184 6846
.org 0x1186
	ldrh r0, [r0, #0]	@ 00001186 0088
.org 0x1188
	cmp r0, #159	@ 00001188 9f28
.org 0x118a
	bls.n 0x1194	@ 0000118a 03d9
.org 0x118c
	mov r0, sp	@ 0000118c 6846
.org 0x118e
	ldrh r0, [r0, #0]	@ 0000118e 0088
.org 0x1190
	cmp r0, #227	@ 00001190 e328
.org 0x1192
	bne.n 0x11b0	@ 00001192 0dd1
.org 0x1194
	ldr r1, [pc, #36]	@ 00001194 0949
.org 0x1196
	ldr r3, [r1, #4]	@ 00001196 4b68
.org 0x1198
	ldr r0, [r1, #12]	@ 00001198 c868
.org 0x119a
	ldrh r2, [r0, #0]	@ 0000119a 0288
.org 0x119c
	strh r2, [r3, #0]	@ 0000119c 1a80
.org 0x119e
	adds r0, #2	@ 0000119e 0230
.org 0x11a0
	str r0, [r1, #12]	@ 000011a0 c860
.org 0x11a2
	adds r1, #36	@ 000011a2 2431
.org 0x11a4
	ldr r3, [r1, #4]	@ 000011a4 4b68
.org 0x11a6
	ldr r0, [r1, #12]	@ 000011a6 c868
.org 0x11a8
	ldrh r2, [r0, #0]	@ 000011a8 0288
.org 0x11aa
	strh r2, [r3, #0]	@ 000011aa 1a80
.org 0x11ac
	adds r0, #2	@ 000011ac 0230
.org 0x11ae
	str r0, [r1, #12]	@ 000011ae c860
.org 0x11b0
	add sp, #4	@ 000011b0 01b0
.org 0x11b2
	pop {r0}	@ 000011b2 01bc
.org 0x11b4
	bx r0	@ 000011b4 0047
