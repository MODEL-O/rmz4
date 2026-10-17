// undefined FUN_08060660(void)
// entry 0x8060660


undefined4 FUN_08060660(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080606a4);
    iVar4 = FUN_080dad0c(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar4;
    if (iVar4 == 0) {
      return in_lr;
    }
    if (*DAT_080606a8 == 0xb) {
      *(undefined1 *)(iVar4 + 0x78) = 0x39;
      iVar4 = *(int *)(param_1 + 0xc0);
      uVar3 = 6;
    }
    else {
      *(undefined1 *)(iVar4 + 0x78) = 0x35;
      iVar4 = *(int *)(param_1 + 0xc0);
      uVar3 = 10;
    }
    *(undefined1 *)(iVar4 + 0x79) = uVar3;
    iVar4 = DAT_08060760;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar7 = *(int *)(param_1 + 0xc0);
      *(int *)(iVar7 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08060760;
      iVar5 = *(int *)(param_1 + 0x54);
      iVar6 = DAT_08060764;
    }
    else {
      iVar7 = *(int *)(param_1 + 0xc0);
      iVar4 = 0x3000;
      *(int *)(iVar7 + 0x54) = *(int *)(param_1 + 0x54) + 0x3000;
      iVar5 = *(int *)(param_1 + 0x54);
      iVar6 = 0xf000;
    }
    *(int *)(iVar7 + 100) = iVar5 + iVar6;
    *(int *)(iVar7 + 0x5c) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(iVar7 + 0x7c) = *(int *)(param_1 + 0x54) + iVar4;
    FUN_080c639c(param_1,0);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x100;
    FUN_08002b10(0x11a);
    FUN_08002b10(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0x5d;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  FUN_0801fe64(4,param_1 + 0x54);
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    iVar6 = *(int *)(param_1 + 0x68) + 0x180;
    *(int *)(param_1 + 0x68) = iVar6;
    if (0xc00 < iVar6) {
      *(undefined4 *)(param_1 + 0x68) = 0xc00;
      *(undefined1 *)(param_1 + 0x12) = 8;
LAB_0806077a:
      *(char *)(param_1 + 0xf) = cVar1 + '\x01';
    }
  }
  else if (cVar1 == '\x01') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_0806077a;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x68) + DAT_080607b0;
    *(int *)(param_1 + 0x68) = iVar6;
    if (iVar6 < 0) {
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      FUN_08002b5c(0x5d);
      *(undefined2 *)(param_1 + 0xca) = 0;
      *(undefined1 *)(param_1 + 0xd) = 0xd;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  iVar6 = DAT_08060800;
  *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08060800;
  *(int *)(iVar4 + 0x68) = *(int *)(param_1 + 0x58) + iVar6;
  iVar6 = DAT_08060804;
  *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + DAT_08060804;
  piVar8 = (int *)(iVar4 + 0x80);
  *piVar8 = *(int *)(param_1 + 0x58) + iVar6;
  uVar3 = FUN_08129050(*(byte *)(param_1 + 0x13) + 1,3);
  *(undefined1 *)(param_1 + 0x13) = uVar3;
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar6 = *(int *)(param_1 + 0x68) / 2;
  }
  else {
    if (*(char *)(param_1 + 0x13) != '\x01') {
      iVar6 = *(int *)(param_1 + 0x68);
      *(undefined1 *)(iVar4 + 0x74) = 0;
      *(undefined1 *)(iVar4 + 0x75) = 0x19;
      goto LAB_0806082e;
    }
    iVar6 = FUN_08128fb8(*(int *)(param_1 + 0x68) * 9,10);
  }
  *(undefined1 *)(iVar4 + 0x74) = 0x1f;
  *(undefined1 *)(iVar4 + 0x75) = 0x1f;
LAB_0806082e:
  *(undefined1 *)(iVar4 + 0x76) = 0x1f;
  *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) - iVar6;
  *(int *)(iVar4 + 0x68) = *(int *)(iVar4 + 0x68) - iVar6;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + iVar6;
    iVar4 = *piVar8;
  }
  else {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 0x100 + iVar6;
    iVar4 = *piVar8 + 0x100;
  }
  *piVar8 = iVar4 + iVar6;
  return in_lr;
}


