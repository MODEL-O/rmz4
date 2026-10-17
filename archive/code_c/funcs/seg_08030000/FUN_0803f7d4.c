// undefined FUN_0803f7d4(void)
// entry 0x803f7d4


undefined4 FUN_0803f7d4(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfa) == '\x02') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803f800);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_0803f97c(param_1);
    return in_lr;
  }
  puVar7 = (uint *)(param_1 + 0x8c);
  if ((*puVar7 & 0x1000) != 0) {
    FUN_08002b10(0x2b);
  }
  if ((*puVar7 & 4) != 0) {
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\x03') {
    iVar6 = *(int *)(param_1 + 0x5c) >> 2;
    iVar4 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar4 + iVar6;
  iVar6 = DAT_0803f8a4;
  iVar4 = DAT_0803f8a0;
  puVar7 = DAT_0803f89c;
  uVar5 = *DAT_0803f89c * DAT_0803f8a0 + DAT_0803f8a4;
  uVar8 = uVar5 & 0x7fffffff;
  *DAT_0803f89c = uVar8;
  uVar5 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,3);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (1 - (uVar5 & 0xff)) * 0x100;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0803f8fc);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 4;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0803f8d4);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 4;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803f978);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_0803f97c(param_1);
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    uVar5 = uVar8 * iVar4 + iVar6;
    *puVar7 = uVar5 & 0x7fffffff;
    if (((uVar5 & 0x7fffffff) >> 0x10 & 1) == 0) {
      FUN_0801cf00(param_1,DAT_0803f948);
    }
    else {
      FUN_0801cf00(param_1,DAT_0803f92c);
    }
    FUN_0801cff0(param_1);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


