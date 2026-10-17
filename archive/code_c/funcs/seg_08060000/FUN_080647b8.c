// undefined FUN_080647b8(void)
// entry 0x80647b8


undefined4 FUN_080647b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_2c [3];
  
  if (*(byte *)(param_1 + 0xf) < 6) {
                    /* WARNING: Could not recover jumptable at 0x080647e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080647e8 + (uint)*(byte *)(param_1 + 0xf) * 4))();
    return uVar1;
  }
  if (*(byte *)(param_1 + 0x12) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080649b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080649b8 + (uint)*(byte *)(param_1 + 0x12) * 4))();
    return uVar1;
  }
  FUN_0801cff0(param_1,*(byte *)(param_1 + 10) >> 4 & 1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08064b04) * 4 +
                               DAT_08064b00)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08064b08))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((*(char *)(param_1 + 0xf) == '\x06') && (*(char *)(param_1 + 0x12) == '\x05')) {
    local_2c[0] = *DAT_08064b0c;
    local_2c[1] = DAT_08064b0c[1];
    local_2c[2] = DAT_08064b0c[2];
    iVar2 = FUN_08066160(param_1,&stack0xffffffe0);
    *(char *)(param_1 + 0xe0) = (char)local_2c[iVar2];
    *(undefined1 *)(param_1 + 0xd) = 0xd;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


