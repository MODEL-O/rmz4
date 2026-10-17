// undefined FUN_0806e784(void)
// entry 0x806e784


undefined4 FUN_0806e784(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_lr;
  byte local_18 [3];
  byte bStack_15;
  int local_14;
  int local_10;
  
  FUN_08129258(local_18,DAT_0806e8a0,3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0800249c(0x76,0x2a0);
    FUN_08005784(param_1 + 0x74,DAT_0806e8a4);
    *(undefined1 *)(param_1 + 0x12) = 3;
    *(uint *)(param_1 + 100) = (uint)local_18[0] * 0xf;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_080025d8(0x76);
  if (*(int *)(param_1 + 100) < 1) {
    piVar5 = (int *)(param_1 + 200);
    if (*piVar5 != 0) {
      if (1 < *(byte *)(*piVar5 + 0xc)) {
        *piVar5 = 0;
      }
      if (*piVar5 != 0) {
        return in_lr;
      }
    }
    iVar2 = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0xe) = 1;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        *(uint *)(param_1 + 100) = (uint)(&bStack_15)[-(uint)*(byte *)(param_1 + 0x12)] * 0xf;
      }
    }
  }
  else {
    iVar2 = FUN_08129050(*(int *)(param_1 + 100),(&bStack_15)[-(uint)*(byte *)(param_1 + 0x12)]);
    if (iVar2 == 0) {
      uVar3 = *DAT_0806e8a8 * DAT_0806e8ac + DAT_0806e8b0;
      *DAT_0806e8a8 = uVar3 & 0x7fffffff;
      uVar3 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,0x16);
      iVar2 = (uVar3 & 0xff) * 8;
      local_14 = *(int *)(param_1 + 0xbc) + *(int *)(iVar2 + DAT_0806e8b4) + 0x6800;
      local_10 = *(int *)(param_1 + 0xb8) + *(int *)(iVar2 + DAT_0806e8b4 + 4) + DAT_0806e8b8;
      FUN_080a5888(param_1,&local_14,2,0);
    }
    iVar2 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar2;
    if (iVar2 == 0) {
      uVar3 = *DAT_0806e8a8 * DAT_0806e8ac + DAT_0806e8b0;
      *DAT_0806e8a8 = uVar3 & 0x7fffffff;
      uVar3 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,0x16);
      iVar2 = (uVar3 & 0xff) * 8;
      local_14 = *(int *)(param_1 + 0xbc) + *(int *)(iVar2 + DAT_0806e8b4) + 0x6800;
      local_10 = *(int *)(param_1 + 0xb8) + *(int *)(iVar2 + DAT_0806e8b4 + 4) + DAT_0806e8b8;
      uVar4 = FUN_080a5888(param_1,&local_14,0,0);
      *(undefined4 *)(param_1 + 200) = uVar4;
      *(undefined4 *)(param_1 + 0x68) = 0x50;
    }
  }
  return in_lr;
}


