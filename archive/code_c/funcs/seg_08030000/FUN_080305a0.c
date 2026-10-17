// undefined FUN_080305a0(void)
// entry 0x80305a0


undefined4 FUN_080305a0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_08030638;
  if (*(char *)(param_1 + DAT_080305bc) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if ((*(uint *)(param_1 + 600) & 1) != 0) {
    FUN_0802b7f0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_080305f8,0);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 3;
    FUN_080383f0(param_1);
    return in_lr;
  }
  cVar2 = FUN_0802c670(param_1,DAT_08030638,0);
  if ((cVar2 != '\0') && (cVar3 = FUN_0802c62c(param_1,uVar1,0), cVar3 != '\0')) {
    return in_lr;
  }
  if (cVar2 == '\x01') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(param_1 + 0x54) + DAT_080306ac;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x54) + 0x800;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    FUN_0802b7f0(param_1,DAT_080306b0,0);
  }
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x500) {
    if (*(char *)(param_1 + 0x71) < '\x03') goto LAB_080306f6;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    bVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    if (bVar4 == 0) goto LAB_080306ee;
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    bVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    if (bVar4 == 0) {
LAB_080306ee:
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar4;
LAB_080306f6:
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


