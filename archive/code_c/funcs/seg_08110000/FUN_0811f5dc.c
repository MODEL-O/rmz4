// undefined FUN_0811f5dc(void)
// entry 0x811f5dc


undefined4 FUN_0811f5dc(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + DAT_0811f600);
  if ((*(ushort *)(DAT_0811f604 + 4) & 2) != 0) {
    FUN_08002b10(3);
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return in_lr;
  }
  uVar3 = *(ushort *)(DAT_0811f604 + 6);
  if ((uVar3 & 0x40) == 0) {
    if ((uVar3 & 0x80) != 0) {
      iVar6 = param_1 + DAT_0811f644;
      uVar4 = FUN_08129050(*(byte *)(iVar6 + 3) + 1,3);
      *(undefined1 *)(iVar6 + 3) = uVar4;
      goto LAB_0811f6c8;
    }
    if ((uVar3 & 0x20) == 0) {
      if ((uVar3 & 0x10) != 0) {
        cVar2 = *(char *)(param_1 + DAT_0811f6ac + 3);
        if (cVar2 == '\0') {
          pbVar5 = (byte *)(iVar7 + 0xf1);
        }
        else {
          if (cVar2 != '\x01') {
            bVar1 = *(byte *)(iVar7 + 0xf3);
            if (bVar1 < *(byte *)(iVar7 + 0xf0)) {
              *(byte *)(iVar7 + 0xf3) = bVar1 + 1;
              FUN_08002b10(1);
            }
            goto LAB_0811f6ea;
          }
          pbVar5 = (byte *)(iVar7 + 0xf2);
        }
        if (*pbVar5 < *(byte *)(iVar7 + 0xf0)) {
          *pbVar5 = *pbVar5 + 1;
          goto LAB_0811f6c8;
        }
      }
    }
    else {
      cVar2 = *(char *)(param_1 + DAT_0811f66c + 3);
      if (cVar2 == '\0') {
        cVar2 = *(char *)(iVar7 + 0xf1);
        if (cVar2 != '\0') {
          *(char *)(iVar7 + 0xf1) = cVar2 + -1;
          goto LAB_0811f6c8;
        }
      }
      else if (cVar2 == '\x01') {
        cVar2 = *(char *)(iVar7 + 0xf2);
        if (cVar2 != '\0') {
          *(char *)(iVar7 + 0xf2) = cVar2 + -1;
          goto LAB_0811f6c8;
        }
      }
      else {
        cVar2 = *(char *)(iVar7 + 0xf3);
        if (cVar2 != '\0') {
          *(char *)(iVar7 + 0xf3) = cVar2 + -1;
          goto LAB_0811f6c8;
        }
      }
    }
  }
  else {
    iVar6 = param_1 + DAT_0811f624;
    uVar4 = FUN_08129050(*(byte *)(iVar6 + 3) + 2,3);
    *(undefined1 *)(iVar6 + 3) = uVar4;
LAB_0811f6c8:
    FUN_08002b10(1);
  }
LAB_0811f6ea:
  cVar2 = *(char *)(param_1 + DAT_0811f700 + 3);
  if (cVar2 == '\0') {
    iVar6 = *(byte *)(iVar7 + 0xf1) + 0x8c;
    iVar7 = DAT_0811f704;
  }
  else {
    if (cVar2 != '\x01') {
      FUN_0810d85c((uint)*(ushort *)((*(byte *)(iVar7 + 0xf3) + 0xa0) * 2 + DAT_0811f768) +
                   DAT_0811f76c,0x11,7);
      goto LAB_0811f750;
    }
    iVar6 = *(byte *)(iVar7 + 0xf2) + 0x96;
    iVar7 = DAT_0811f72c;
  }
  FUN_0810d85c((uint)*(ushort *)(iVar6 * 2 + iVar7) + DAT_0811f730,0x11,7);
LAB_0811f750:
  FUN_0810d85c((uint)*(ushort *)(DAT_0811f768 + 0xfa) + DAT_0811f76c,1,0x12);
  return in_lr;
}


