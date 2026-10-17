// undefined FUN_081038fc(void)
// entry 0x81038fc


undefined4 FUN_081038fc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 6;
    FUN_08005760(param_1 + 0x74,DAT_08103954,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08103958;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810395c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    FUN_08103984(param_1);
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103980);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08103994(param_1,2,0);
  }
  return in_lr;
}


