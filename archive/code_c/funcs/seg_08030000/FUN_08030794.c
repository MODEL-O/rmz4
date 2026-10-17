// undefined FUN_08030794(void)
// entry 0x8030794


undefined4 FUN_08030794(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xe) != '\0') || (*(char *)(param_1 + 0xfc) != '\0')) ||
     (sVar3 = *(short *)(param_1 + 0xa4), uVar2 = FUN_0802b61c(param_1),
     (short)(uVar2 & 0xff) <= sVar3)) {
    *(undefined2 *)(param_1 + 0x140) = 0;
    goto LAB_0803082e;
  }
  puVar6 = (ushort *)(param_1 + 0x140);
  if (*(char *)(param_1 + 0x100) == '\x03') {
    *puVar6 = 0;
  }
  if ((*(ushort *)(param_1 + DAT_080307f8) & 0x8000) == 0) {
    *puVar6 = *puVar6 + 1;
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  if (cVar1 == '\x01') {
    if (*puVar6 < 0xd3) goto LAB_0803082e;
LAB_08030812:
    *DAT_08030820 = *DAT_08030820 + 4;
  }
  else {
    if (cVar1 == '\x02') {
      if (*puVar6 < 0xb5) goto LAB_0803082e;
      goto LAB_08030812;
    }
    if (cVar1 == '\x03') {
      if (*puVar6 < 0x97) goto LAB_0803082e;
      goto LAB_08030812;
    }
  }
  *puVar6 = 0;
LAB_0803082e:
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
  *(undefined1 *)(param_1 + DAT_080308c8) = 1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_080308cc));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = DAT_080308d0;
  pbVar7 = (byte *)(param_1 + 0x174);
  FUN_0802b7f0(param_1,(uint)*pbVar7 * 8 + DAT_080308d0,0);
  FUN_0802b7f0(param_1,(uint)*pbVar7 * 8 + iVar5,1);
  FUN_0802baf0(param_1,(uint)*pbVar7 * 8 + iVar5,0);
  uVar4 = FUN_0802c2d4(param_1,(uint)*pbVar7 * 8 + iVar5,0);
  if ((uVar4 & 0xf) == 0) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar3 = FUN_080386d4(param_1);
        iVar5 = -(int)sVar3;
      }
      else {
        sVar3 = FUN_080386d4(param_1);
        iVar5 = (int)sVar3;
      }
      *(int *)(param_1 + 0x5c) = iVar5;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


