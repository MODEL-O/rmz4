// undefined FUN_0811bf94(void)
// entry 0x811bf94


undefined4 FUN_0811bf94(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + DAT_0811bfc8);
  cVar3 = FUN_08118248(param_1);
  if (cVar3 != '\0') {
    return in_lr;
  }
  uVar1 = *(ushort *)(DAT_0811bfcc + 6);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x80) != 0) {
      pbVar6 = (byte *)(param_1 + DAT_0811bff8);
      iVar5 = *pbVar6 + 1;
      goto LAB_0811bfe4;
    }
    if (*(char *)(iVar7 + 0xf5) != -1) {
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x10) != 0) {
          if (*(char *)(param_1 + DAT_0811c068) == '\0') {
            pbVar6 = (byte *)(iVar7 + 0xf1);
          }
          else {
            if (*(char *)(param_1 + DAT_0811c068) != '\x01') {
              bVar4 = *(byte *)(iVar7 + 0xf3);
              if (bVar4 < *(byte *)(iVar7 + 0xf0)) {
                *(byte *)(iVar7 + 0xf3) = bVar4 + 1;
                FUN_08002b10(1);
              }
              goto LAB_0811c09a;
            }
            pbVar6 = (byte *)(iVar7 + 0xf2);
          }
          if (*pbVar6 < *(byte *)(iVar7 + 0xf0)) {
            bVar4 = *pbVar6 + 1;
LAB_0811c07c:
            *pbVar6 = bVar4;
            FUN_08002b10(1);
          }
        }
      }
      else if (*(char *)(param_1 + DAT_0811c02c) == '\0') {
        pbVar6 = (byte *)(iVar7 + 0xf1);
        if (*pbVar6 != 0) {
          bVar4 = *pbVar6 - 1;
          goto LAB_0811c07c;
        }
      }
      else if (*(char *)(param_1 + DAT_0811c02c) == '\x01') {
        pbVar6 = (byte *)(iVar7 + 0xf2);
        if (*pbVar6 != 0) {
          bVar4 = *pbVar6 - 1;
          goto LAB_0811c07c;
        }
      }
      else {
        pbVar6 = (byte *)(iVar7 + 0xf3);
        if (*pbVar6 != 0) {
          bVar4 = *pbVar6 - 1;
          goto LAB_0811c07c;
        }
      }
      goto LAB_0811c09a;
    }
  }
  else {
    pbVar6 = (byte *)(param_1 + DAT_0811bfd0);
    iVar5 = *pbVar6 + 2;
LAB_0811bfe4:
    bVar4 = FUN_08129050(iVar5,3);
    *pbVar6 = bVar4;
    FUN_08002b10(1);
LAB_0811c09a:
    iVar2 = DAT_0811c0e0;
    iVar5 = DAT_0811c0dc;
    if (*(byte *)(iVar7 + 0xf5) != 0xff) {
      FUN_0810d85c((uint)*(ushort *)((*(byte *)(iVar7 + 0xf5) + 0x5a) * 2 + DAT_0811c0dc) +
                   DAT_0811c0e0,0x15,1);
      FUN_0810d85c((uint)*(ushort *)(iVar5 + 0xfa) + iVar2,1,0x12);
      if (*(char *)(param_1 + DAT_0811c0e4) == '\0') {
        iVar7 = *(byte *)(iVar7 + 0xf1) + 0x8c;
      }
      else if (*(char *)(param_1 + DAT_0811c0e4) == '\x01') {
        iVar7 = *(byte *)(iVar7 + 0xf2) + 0x96;
      }
      else {
        iVar7 = *(byte *)(iVar7 + 0xf3) + 0xa0;
      }
      FUN_0810d85c((uint)*(ushort *)(iVar7 * 2 + iVar5) + iVar2,0x11,8);
      goto LAB_0811c132;
    }
  }
  iVar5 = DAT_0811c148;
  iVar7 = DAT_0811c144;
  FUN_0810d85c((uint)*(ushort *)(DAT_0811c144 + 0xfc) + DAT_0811c148,1,0x12);
  FUN_0810d85c((uint)*(ushort *)(iVar7 + 0xfe) + iVar5,0x11,8);
LAB_0811c132:
  FUN_0811c1e4(param_1);
  FUN_080025d8(0x41);
  return in_lr;
}


