// undefined FUN_080f5bdc(void)
// entry 0x80f5bdc


undefined4 FUN_080f5bdc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_6c [96];
  
  FUN_08129258(auStack_6c,DAT_080f5c00,0x60);
  if (6 < *(byte *)(param_1 + 0xd)) {
    if (0xf000 < (uint)(*(int *)(*DAT_080f5d30 + 0x54) + DAT_080f5d34)) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f5d38);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f5bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080f5c04))();
  return uVar1;
}


