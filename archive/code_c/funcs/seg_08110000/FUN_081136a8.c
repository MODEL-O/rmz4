// undefined FUN_081136a8(void)
// entry 0x81136a8


undefined4 FUN_081136a8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  if (6 < *(byte *)(param_1 + 2)) {
    if ((byte)(*(char *)(param_1 + 2) - 3U) < 2) {
      if (*(char *)(param_1 + 3) == '\0') {
        sVar3 = *(short *)(param_1 + 6) + 1;
      }
      else {
        sVar3 = *(short *)(param_1 + 6) + -1;
      }
      *(short *)(param_1 + 6) = sVar3;
      FUN_08002734(0x12,DAT_081139e4,
                   ((int)((uint)*(ushort *)(param_1 + 6) << 0x10) >> 0x11 & 3U) - 0x7e & 0xff,0,
                   (*(ushort *)(param_1 + 6) & 1) << 5);
      uVar4 = 0;
      if ((*(ushort *)(param_1 + 6) & 1) == 0) {
        uVar4 = 0x100;
      }
      *DAT_081139e8 = uVar4;
    }
    else {
      iVar6 = param_1 + 0x9a0;
      FUN_08003470(iVar6);
      FUN_0800560c();
      *DAT_08113a94 = 0;
      local_1c[0] = 0;
      FUN_08128be0(local_1c,DAT_08113a98,DAT_08113a9c);
      FUN_0801f2e0(1);
      puVar1 = DAT_08113aa0;
      FUN_0801c79c(*DAT_08113aa0);
      puVar2 = DAT_08113aa4;
      FUN_0801c7cc(*DAT_08113aa4);
      FUN_080d0be0();
      FUN_0801ca0c(*DAT_08113aa8,iVar6);
      FUN_0801ca0c(*DAT_08113aac,iVar6);
      FUN_0801ca0c(*DAT_08113ab0,iVar6);
      FUN_0801ca0c(*puVar1,iVar6);
      FUN_0801c924(*puVar2,iVar6);
      FUN_0803a7dc(iVar6);
      FUN_0801c924(*DAT_08113ab4,iVar6);
      FUN_0801c924(*DAT_08113ab8,iVar6);
      FUN_0801ca0c(*DAT_08113abc,iVar6);
      FUN_0801f460(1);
      FUN_08114c18(param_1);
      FUN_0810e4cc();
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x081136be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(PTR_PTR_081136c0 + (uint)*(byte *)(param_1 + 2) * 4))();
  return uVar5;
}


