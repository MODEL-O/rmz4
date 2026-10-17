// undefined FUN_08061a74(void)
// entry 0x8061a74


undefined4 FUN_08061a74(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = FUN_080dad0c(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar3;
    if (iVar3 == 0) {
      return in_lr;
    }
    if (*DAT_08061ab0 == 0xb) {
      *(undefined1 *)(iVar3 + 0x78) = 0x39;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar6 = 6;
    }
    else {
      *(undefined1 *)(iVar3 + 0x78) = 0x35;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar6 = 10;
    }
    *(undefined1 *)(iVar3 + 0x79) = uVar6;
    FUN_080c6434(param_1,0);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x10;
    FUN_08002b10(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0x5d;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801fe64(8,param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      FUN_0801cf00(param_1,DAT_08061b7c);
      FUN_08099f0c(param_1,4,0);
      FUN_08002b10(0x5b);
      *(undefined1 *)(param_1 + 0x12) = 0xa4;
LAB_08061b8e:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x68) + 0x100;
      *(int *)(param_1 + 0x68) = iVar3;
      if (0x1000 < iVar3) {
        *(undefined4 *)(param_1 + 0x68) = 0x1000;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        FUN_0801cf00(param_1,DAT_08061b50);
        goto LAB_08061b8e;
      }
    }
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_08061b8e;
  }
  else if ((bVar1 == 3) &&
          (iVar3 = *(int *)(param_1 + 0x68) + DAT_08061bcc, *(int *)(param_1 + 0x68) = iVar3,
          iVar3 <= DAT_08061bd0)) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    FUN_08002b5c(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0x23;
    *(undefined1 *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  FUN_0801cff0(param_1);
  uVar4 = *(int *)(param_1 + 100) + 1;
  *(uint *)(param_1 + 100) = uVar4;
  if ((uVar4 & 3) < 2) {
    iVar5 = *(int *)(param_1 + 0x58);
    iVar3 = DAT_08061c24;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x58);
    iVar3 = 0x100;
  }
  *(int *)(param_1 + 0x58) = iVar5 + iVar3;
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 == 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar5 = *(int *)(param_1 + 0x68) / 2;
  }
  else {
    if (*(char *)(param_1 + 0x13) != '\x01') {
      iVar5 = *(int *)(param_1 + 0x68);
      *(undefined1 *)(iVar3 + 0x74) = 0;
      *(undefined1 *)(iVar3 + 0x75) = 0x19;
      goto LAB_08061c4c;
    }
    iVar5 = FUN_08128fb8(*(int *)(param_1 + 0x68) << 3,10);
  }
  *(undefined1 *)(iVar3 + 0x74) = 0x1f;
  *(undefined1 *)(iVar3 + 0x75) = 0x1f;
LAB_08061c4c:
  *(undefined1 *)(iVar3 + 0x76) = 0x1f;
  *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0xb8) + 0x400;
  *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0xb8) + 0x400;
  *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0x1a00;
  *(int *)(iVar3 + 0x80) = *(int *)(param_1 + 0x58) + 0x1a00;
  iVar9 = DAT_08061ca4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + iVar5 + 0x700;
    iVar9 = iVar5 + DAT_08061d24;
    *(int *)(iVar3 + 100) = *(int *)(param_1 + 0x54) - iVar9;
    *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) - iVar9;
    *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + iVar5 + 0x700;
    iVar9 = *(int *)(param_1 + 0x54) + 0x600;
  }
  else {
    iVar7 = iVar5 + DAT_08061ca4;
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(iVar3 + 100) = *(int *)(param_1 + 0x54) - (iVar5 + 0x700);
    *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) - (iVar5 + 0x700);
    *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + iVar7;
    iVar9 = *(int *)(param_1 + 0x54) + iVar9;
  }
  cVar2 = FUN_08129050(*(byte *)(param_1 + 0x13) + 1,3);
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    uVar8 = DAT_08061d2c * *DAT_08061d28 + DAT_08061d30;
    uVar4 = DAT_08061d2c * (uVar8 & 0x7fffffff) + DAT_08061d30;
    *DAT_08061d28 = uVar4 & 0x7fffffff;
    iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,3);
    FUN_080c6480(iVar9 + ((uVar8 & 0xfffffff) >> 0x10),*(int *)(iVar3 + 0x58) + (1 - iVar5) * 0x100,
                 0);
  }
  else if (cVar2 == '\x01') {
    uVar8 = DAT_08061d7c * *DAT_08061d78 + DAT_08061d80;
    uVar4 = DAT_08061d7c * (uVar8 & 0x7fffffff) + DAT_08061d80;
    *DAT_08061d78 = uVar4 & 0x7fffffff;
    iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,3);
    FUN_080c6480(iVar9 - ((uVar8 & 0xfffffff) >> 0x10),*(int *)(iVar3 + 0x68) + (1 - iVar5) * 0x100,
                 1);
  }
  return in_lr;
}


