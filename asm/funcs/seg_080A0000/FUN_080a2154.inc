@ FUN_080a2154  entry 0x080a2154  size 92
.thumb
.org 0xa2154
FUN_080a2154:
	push {r4, r5, lr}	@ 000a2154 30b5
.org 0xa2156
	adds r4, r0, #0	@ 000a2156 041c
.org 0xa2158
	ldr r0, [r4, #84]	@ 000a2158 606d
.org 0xa215a
	ldr r1, [r4, #88]	@ 000a215a a16d
.org 0xa215c
	bl 0x7c7c	@ 000a215c 65f78efd
.org 0xa2160
	lsls r0, r0, #16	@ 000a2160 0004
.org 0xa2162
	lsrs r5, r0, #16	@ 000a2162 050c
.org 0xa2164
	cmp r5, #0	@ 000a2164 002d
.org 0xa2166
	bne.n 0xa218c	@ 000a2166 11d1
.org 0xa2168
	ldr r1, [r4, #88]	@ 000a2168 a16d
.org 0xa216a
	ldr r0, [r4, #96]	@ 000a216a 206e
.org 0xa216c
	adds r1, r1, r0	@ 000a216c 0918
.org 0xa216e
	str r1, [r4, #88]	@ 000a216e a165
.org 0xa2170
	adds r0, #64	@ 000a2170 4030
.org 0xa2172
	str r0, [r4, #96]	@ 000a2172 2066
.org 0xa2174
	ldr r0, [r4, #84]	@ 000a2174 606d
.org 0xa2176
	bl 0x7c7c	@ 000a2176 65f781fd
.org 0xa217a
	lsls r0, r0, #16	@ 000a217a 0004
.org 0xa217c
	cmp r0, #0	@ 000a217c 0028
.org 0xa217e
	beq.n 0xa218c	@ 000a217e 05d0
.org 0xa2180
	ldr r0, [r4, #84]	@ 000a2180 606d
.org 0xa2182
	ldr r1, [r4, #88]	@ 000a2182 a16d
.org 0xa2184
	bl 0x8534	@ 000a2184 66f7d6f9
.org 0xa2188
	str r0, [r4, #88]	@ 000a2188 a065
.org 0xa218a
	str r5, [r4, #96]	@ 000a218a 2566
.org 0xa218c
	adds r5, r4, #0	@ 000a218c 251c
.org 0xa218e
	adds r5, #192	@ 000a218e c035
.org 0xa2190
	ldr r0, [r5, #0]	@ 000a2190 2868
.org 0xa2192
	bl 0x2b3e4	@ 000a2192 89f727f9
.org 0xa2196
	cmp r0, #0	@ 000a2196 0028
.org 0xa2198
	beq.n 0xa21aa	@ 000a2198 07d0
.org 0xa219a
	adds r0, r4, #0	@ 000a219a 201c
.org 0xa219c
	adds r0, #116	@ 000a219c 7430
.org 0xa219e
	ldr r1, [pc, #16]	@ 000a219e 0449
.org 0xa21a0
	bl 0x5784	@ 000a21a0 63f7f0fa
.org 0xa21a4
	movs r0, #0	@ 000a21a4 0020
.org 0xa21a6
	str r0, [r5, #0]	@ 000a21a6 2860
.org 0xa21a8
	strb r0, [r4, #14]	@ 000a21a8 a073
.org 0xa21aa
	pop {r4, r5}	@ 000a21aa 30bc
.org 0xa21ac
	pop {r0}	@ 000a21ac 01bc
.org 0xa21ae
	bx r0	@ 000a21ae 0047
