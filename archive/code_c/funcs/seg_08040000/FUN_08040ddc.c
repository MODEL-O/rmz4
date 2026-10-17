// undefined FUN_08040ddc(void)
// entry 0x8040ddc


undefined4 FUN_08040ddc(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined2 *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040e68);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  bVar5 = *(byte *)(iVar6 + 0xc0);
  if (bVar5 < 3) {
    bVar5 = *(byte *)(iVar6 + 0xc1);
  }
  *(byte *)(iVar6 + DAT_08040e6c) = bVar5;
  puVar4 = (undefined2 *)
           ((uint)*(byte *)(iVar6 + 0xc3) * 0xc +
           *(int *)((uint)*(byte *)(iVar6 + DAT_08040e6c) * 4 + DAT_08040e70));
  uVar2 = *puVar4;
  uVar1 = *(undefined1 *)((int)puVar4 + 3);
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(puVar4 + 1);
  FUN_0801cd28(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,uVar2);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  FUN_08040d54(param_1);
  return in_lr;
}


