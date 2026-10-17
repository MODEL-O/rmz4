// undefined FUN_0811f394(void)
// entry 0x811f394


undefined4 FUN_0811f394(int param_1)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + DAT_0811f3e4);
  uVar8 = 5;
  if ((*(char *)(iVar5 + 199) != '\x03') && (uVar8 = 7, *(char *)(iVar5 + 199) == '\x01')) {
    uVar8 = 0;
  }
  pbVar7 = (byte *)(iVar5 + 0xf0);
  if (*(char *)(param_1 + 3) == '\0') {
    if (*pbVar7 < uVar8) {
      if (*(ushort *)(iVar5 + 0xba) < *(ushort *)((uint)*pbVar7 * 2 + DAT_0811f404)) {
        FUN_08002b10(4);
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      FUN_08002b10(4);
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 3) = uVar4;
  }
  if (*pbVar7 < uVar8) {
    FUN_08118348(*(undefined2 *)((uint)*pbVar7 * 2 + DAT_0811f454),0x1c,0xd);
    FUN_08118348(*(undefined2 *)(iVar5 + 0xba),0x1c,0xf);
  }
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x01') {
    if (*pbVar7 < uVar8) {
      FUN_0810d85c((uint)*(ushort *)(DAT_0811f488 + 0x158) + DAT_0811f48c,0x11,7);
    }
    else {
      FUN_0810d85c((uint)*(ushort *)(DAT_0811f458 + 0x15a) + DAT_0811f45c,0x11,7);
    }
    if ((*(ushort *)(DAT_0811f490 + 4) & 3) != 0) {
LAB_0811f536:
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return in_lr;
    }
    goto LAB_0811f5ac;
  }
  uVar2 = *(ushort *)(DAT_0811f4ac + 4);
  bVar3 = (byte)uVar2 & 1;
  if ((uVar2 & 1) != 0) {
    if (cVar1 == '\x03') {
      FUN_08002b10(3);
    }
    else {
      iVar6 = param_1 + 0xdd0;
      FUN_0810b708(param_1,iVar6,1,*pbVar7);
      FUN_0810b708(param_1,iVar6,1,*pbVar7 | 0x10);
      FUN_0810b708(param_1,iVar6,1,*pbVar7 | 0x20);
      *(short *)(iVar5 + 0xba) =
           *(short *)(iVar5 + 0xba) - *(short *)((uint)*pbVar7 * 2 + DAT_0811f540);
      *pbVar7 = *pbVar7 + 1;
      *(undefined1 *)(iVar5 + 0xf6) = 2;
      FUN_080027b8(param_1 + DAT_0811f544,DAT_0811f548,*pbVar7 + 0x68,0,0);
      FUN_08001f1c(param_1 + DAT_0811f54c,(*DAT_0811f550 & 0x1f00) << 3,0x1000);
      FUN_08002b10(0x28);
    }
    goto LAB_0811f536;
  }
  if ((uVar2 & 2) != 0) {
    FUN_08002b10(3);
    *(byte *)(param_1 + 2) = bVar3;
    *(byte *)(param_1 + 3) = bVar3;
    return in_lr;
  }
  if ((*(ushort *)(DAT_0811f4ac + 6) & 0x80) == 0) {
    if (((*(ushort *)(DAT_0811f4ac + 6) & 0x40) != 0) && (cVar1 == '\x03')) {
      FUN_08002b10(1);
      uVar4 = 2;
      goto LAB_0811f594;
    }
  }
  else if (cVar1 == '\x02') {
    FUN_08002b10(1);
    uVar4 = 3;
LAB_0811f594:
    *(undefined1 *)(param_1 + 3) = uVar4;
  }
  FUN_0810d85c((uint)*(ushort *)(DAT_0811f5d4 + 0x156) + DAT_0811f5d8,0x11,7);
LAB_0811f5ac:
  FUN_0810d85c((uint)*(ushort *)(DAT_0811f5d4 + 0x15c) + DAT_0811f5d8,1,0x12);
  return in_lr;
}


