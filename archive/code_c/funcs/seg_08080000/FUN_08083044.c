// undefined FUN_08083044(void)
// entry 0x8083044


undefined4 FUN_08083044(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) goto LAB_08083168;
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808323c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  uVar7 = 0;
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 2) {
    uVar7 = DAT_080830b0;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar7 = 0x1800;
    }
  }
  else if (bVar1 < 3) {
    if ((bVar1 == 1) && (uVar7 = DAT_08083098, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
      uVar7 = 0x1200;
    }
  }
  else {
    if (bVar1 == 3) {
      bVar1 = *(byte *)(param_1 + 10);
      uVar7 = DAT_080830d4;
      if ((bVar1 & 0x20) != 0) {
        uVar7 = 0x2300;
      }
      bVar6 = ~(bVar1 >> 5) & 1;
      if (bVar6 == 0) {
LAB_080830fc:
        bVar1 = bVar1 & 0xdf;
      }
      else {
        bVar1 = bVar1 | 0x20;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_0808311c;
      bVar1 = *(byte *)(param_1 + 10);
      uVar7 = DAT_080830f8;
      if ((bVar1 & 0x20) != 0) {
        uVar7 = 0x2b00;
      }
      bVar6 = ~(bVar1 >> 5) & 1;
      if (bVar6 == 0) goto LAB_080830fc;
      bVar1 = bVar1 | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4d) = bVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar6 << 5;
  }
LAB_0808311c:
  FUN_0808368c(param_1,0,uVar7);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(uint *)(param_1 + 0x5c) = (uint)(0 < *(int *)(param_1 + 0xb4)) * -0x500 + 0x280;
  *(undefined4 *)(param_1 + 0x60) = DAT_08083200;
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08083168:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     (sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + 0x100;
    FUN_080d0c88(1,&local_14);
    FUN_080d621c(param_1,&local_14,0);
    FUN_08002b10(0x2a);
    FUN_0802ab88(4,8,param_1 + 0x54);
    if (*(ushort *)(DAT_08083204 + 0xc) <= DAT_08083208) {
      *(ushort *)(DAT_08083204 + 0xc) = *(ushort *)(DAT_08083204 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


