// undefined FUN_081134f4(void)
// entry 0x81134f4


undefined4 FUN_081134f4(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + DAT_08113560);
    if ((*(byte *)(DAT_08113564 + 0x15) & 1) != 0) {
      FUN_08112888();
    }
    FUN_08112ad8(param_1);
    FUN_08002464();
    *(undefined2 *)(param_1 + 4) = 0;
    uVar2 = FUN_0803891c(uVar5);
    FUN_0802b53c(uVar5,uVar2);
    if ((*(ushort *)(DAT_08113568 + 8) & 0x20) != 0) {
      *DAT_0811356c = (ushort)DAT_08113570 & *DAT_0811356c | 0x100;
      FUN_081126ac(param_1,0x800);
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  iVar4 = param_1 + 0x9a0;
  FUN_08003470(iVar4);
  FUN_0800560c();
  *DAT_0811364c = 0;
  local_18[0] = 0;
  FUN_08128be0(local_18,DAT_08113650,DAT_08113654);
  FUN_0801f2e0(1);
  FUN_0801ca0c(*DAT_08113658,iVar4);
  FUN_0801ca0c(*DAT_0811365c,iVar4);
  FUN_0801ca0c(*DAT_08113660,iVar4);
  FUN_0801ca0c(*DAT_08113664,iVar4);
  FUN_0801c924(*DAT_08113668,iVar4);
  FUN_0803a7dc(iVar4);
  FUN_0801c924(*DAT_0811366c,iVar4);
  FUN_0801c924(*DAT_08113670,iVar4);
  FUN_0801ca0c(*DAT_08113674,iVar4);
  FUN_0801f460(1);
  FUN_08114c18(param_1);
  FUN_0810e4cc();
  sVar3 = *(short *)(param_1 + 4) + 2;
  *(short *)(param_1 + 4) = sVar3;
  iVar1 = DAT_0811367c;
  iVar4 = DAT_08113678;
  uVar2 = (undefined1)sVar3;
  *(undefined1 *)(DAT_08113678 + DAT_0811367c) = uVar2;
  *(undefined1 *)(iVar4 + iVar1 + -1) = uVar2;
  *(undefined1 *)(iVar4 + 0x400) = uVar2;
  if (sVar3 == 0x20) {
    *(undefined2 *)(param_1 + DAT_08113680) = 0;
    if ((*(byte *)(DAT_08113684 + 8) & 0x80) == 0) {
      FUN_08002a50();
    }
    else {
      FUN_08002bcc(0x25);
      FUN_08002bcc(0x26);
    }
    FUN_081126ac(param_1,0x400);
  }
  return in_lr;
}


