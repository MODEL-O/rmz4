// undefined FUN_08112a24(void)
// entry 0x8112a24


undefined4 FUN_08112a24(int param_1)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_08112ab4;
  *(uint *)(param_1 + DAT_08112ab0) = (uint)*DAT_08112ab4;
  FUN_08006d3c();
  puVar2 = DAT_08112ab8;
  FUN_08128be0(DAT_08112ab8,param_1 + 0x1ee0,0);
  FUN_08128be4(puVar2,param_1 + 0x1ee0,DAT_08112abc);
  *puVar2 = 0;
  puVar2 = DAT_08112ac0;
  FUN_08128be0(DAT_08112ac0,param_1 + DAT_08112ac4,0);
  FUN_08128be4(puVar2,param_1 + DAT_08112ac4,DAT_08112ac8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 7) = 0xff;
  FUN_08128be0(DAT_08112acc,param_1 + DAT_08112ad0,0x1000);
  FUN_08128be0(puVar1 + 0x100,param_1 + DAT_08112ad4,0x80);
  return in_lr;
}


