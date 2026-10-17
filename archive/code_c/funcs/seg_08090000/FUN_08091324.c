// undefined FUN_08091324(void)
// entry 0x8091324


undefined4 FUN_08091324(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if (CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70)) == DAT_0809138c) {
      FUN_0801cfc8(param_1,DAT_0809138c + 1,(short)*(char *)(iVar3 + 0x71),
                   (short)*(char *)(iVar3 + 0x72));
    }
    else {
      FUN_0801cfc8(param_1,DAT_080913bc,(short)*(char *)(iVar3 + 0x71),
                   (short)*(char *)(iVar3 + 0x72));
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809134c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08090f70(param_1);
  }
  return in_lr;
}


