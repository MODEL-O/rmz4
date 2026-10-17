// undefined FUN_08082b68(void)
// entry 0x8082b68


undefined4 FUN_08082b68(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 0xbe);
    if (bVar1 == 2) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = iVar3 + DAT_08082bd8;
      *(int *)(param_1 + 0x58) = iVar4;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar4 = 0x1800;
LAB_08082bd0:
        iVar4 = iVar3 + iVar4;
      }
LAB_08082bd2:
      *(int *)(param_1 + 0x58) = iVar4;
    }
    else if (bVar1 < 3) {
      if (bVar1 == 1) {
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3 + DAT_08082bb4;
        *(int *)(param_1 + 0x58) = iVar4;
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          iVar4 = 0x1200;
          goto LAB_08082bd0;
        }
        goto LAB_08082bd2;
      }
    }
    else {
      if (bVar1 == 3) {
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3 + DAT_08082c0c;
        *(int *)(param_1 + 0x58) = iVar4;
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x20) != 0) {
          iVar4 = iVar3 + 0x2300;
        }
        *(int *)(param_1 + 0x58) = iVar4;
        bVar6 = ~(bVar1 >> 5) & 1;
        if (bVar6 == 0) {
LAB_08082c44:
          bVar1 = bVar1 & 0xdf;
        }
        else {
          bVar1 = bVar1 | 0x20;
        }
      }
      else {
        if (bVar1 != 4) goto LAB_08082c64;
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3 + DAT_08082c40;
        *(int *)(param_1 + 0x58) = iVar4;
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x20) != 0) {
          iVar4 = iVar3 + 0x2b00;
        }
        *(int *)(param_1 + 0x58) = iVar4;
        bVar6 = ~(bVar1 >> 5) & 1;
        if (bVar6 == 0) goto LAB_08082c44;
        bVar1 = bVar1 | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4d) = bVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar6 << 5;
    }
LAB_08082c64:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + DAT_08082ce0;
  FUN_080d0c88(1,&local_14);
  FUN_080d621c(param_1,&local_14,0);
  FUN_08002b10(0x2a);
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) goto LAB_08082cf6;
  iVar3 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 < 1) {
    if (iVar4 < 0) {
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    }
    else {
      if (iVar4 <= -iVar3) goto LAB_08082cf0;
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    }
  }
  else {
LAB_08082cf0:
    iVar3 = *(int *)(param_1 + 0x58) + iVar4;
  }
  *(int *)(param_1 + 0x58) = iVar3;
LAB_08082cf6:
  FUN_0802ab88(4,8,param_1 + 0x54);
  if (*(ushort *)(DAT_08082d34 + 0xc) <= DAT_08082d38) {
    *(ushort *)(DAT_08082d34 + 0xc) = *(ushort *)(DAT_08082d34 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08082d3c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  return in_lr;
}


