// undefined FUN_0807f3a4(void)
// entry 0x807f3a4


undefined4 FUN_0807f3a4(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807f3fc);
    puVar1 = DAT_0807f400;
    do {
      uVar4 = *puVar1 * DAT_0807f404 + DAT_0807f408;
      *puVar1 = uVar4 & 0x7fffffff;
      cVar2 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,6);
      *(char *)(param_1 + 0xd4) = cVar2;
    } while (*(char *)(param_1 + 0xd3) == cVar2);
    *(char *)(param_1 + 0xd3) = cVar2;
    FUN_08002b10(0x59);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_0807f41e:
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_0801cf00(param_1,DAT_0807f4ac);
    FUN_08002b10(0x59);
    goto LAB_0807f41e;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) != '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 3;
    uVar3 = 0;
    goto LAB_0807f558;
  }
  pcVar6 = (char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,(uint)*(byte *)(*pcVar6 + DAT_0807f4b0) * 0x18 + DAT_0807f4b4);
  if (*(int *)(param_1 + 0x54) <
      *(int *)(param_1 + 0xb4) + *(int *)((uint)*(byte *)(param_1 + 0xd4) * 4 + DAT_0807f4b8)) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    if (*(char *)(param_1 + 0x72) < '\x02') {
      iVar5 = *(int *)(param_1 + 0x54) + *(int *)(*pcVar6 * 4 + DAT_0807f4bc);
LAB_0807f4fc:
      *(int *)(param_1 + 0x54) = iVar5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (*(char *)(param_1 + 0x72) < '\x02') {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(*pcVar6 * 4 + DAT_0807f538);
      goto LAB_0807f4fc;
    }
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x54) ==
      *(int *)(param_1 + 0xb4) + *(int *)((uint)*(byte *)(param_1 + 0xd4) * 4 + DAT_0807f53c)) {
    FUN_0801cf00(param_1,0xc800);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(undefined1 *)(param_1 + 0xf) = 1;
    return in_lr;
  }
  uVar3 = 1;
LAB_0807f558:
  *(undefined1 *)(param_1 + 0xe) = uVar3;
  return in_lr;
}


