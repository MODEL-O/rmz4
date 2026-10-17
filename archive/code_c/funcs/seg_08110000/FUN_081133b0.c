// undefined FUN_081133b0(void)
// entry 0x81133b0


undefined4 FUN_081133b0(int param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_08002a1c();
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sVar3 = *(short *)(param_1 + 4) + -2;
  *(short *)(param_1 + 4) = sVar3;
  iVar4 = DAT_08113420;
  puVar2 = DAT_0811341c;
  uVar1 = (undefined1)sVar3;
  *(undefined1 *)((int)DAT_0811341c + DAT_08113420) = uVar1;
  *(undefined1 *)((int)puVar2 + iVar4 + -1) = uVar1;
  *(undefined1 *)((int)puVar2 + iVar4 + -2) = uVar1;
  if (sVar3 == 0) {
    FUN_08112a24(param_1);
    *puVar2 = 0;
    *DAT_08113424 = (ushort)DAT_08113428 & *DAT_08113424;
    *DAT_0811342c = 0;
    FUN_0800243c();
    FUN_081128c0();
    FUN_081126ac(param_1,1);
  }
  else {
    iVar4 = param_1 + 0x9a0;
    FUN_08003470(iVar4);
    FUN_0800560c();
    *DAT_081134c8 = 0;
    local_18[0] = 0;
    FUN_08128be0(local_18,DAT_081134cc,DAT_081134d0);
    FUN_0801f2e0(1);
    FUN_0801ca0c(*DAT_081134d4,iVar4);
    FUN_0801ca0c(*DAT_081134d8,iVar4);
    FUN_0801ca0c(*DAT_081134dc,iVar4);
    FUN_0801ca0c(*DAT_081134e0,iVar4);
    FUN_0801c924(*DAT_081134e4,iVar4);
    FUN_0803a7dc(iVar4);
    FUN_0801c924(*DAT_081134e8,iVar4);
    FUN_0801c924(*DAT_081134ec,iVar4);
    FUN_0801ca0c(*DAT_081134f0,iVar4);
    FUN_0801f460(1);
    FUN_08114c18(param_1);
    FUN_0810e4cc();
  }
  return in_lr;
}


