// undefined FUN_0802f0b4(void)
// entry 0x802f0b4


undefined4 FUN_0802f0b4(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x1d0);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  if (3 < *(byte *)(param_1 + 199)) {
    *(undefined1 *)(param_1 + 0x254) = 1;
  }
  return in_lr;
}


