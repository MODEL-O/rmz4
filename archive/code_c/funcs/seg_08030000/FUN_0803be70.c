// undefined FUN_0803be70(void)
// entry 0x803be70


undefined4 FUN_0803be70(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = FUN_0803c1e4(param_1);
  if (cVar1 == '\x02') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803be98);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  else {
    cVar2 = FUN_0803c400(param_1);
    if (cVar2 != '\0') {
      FUN_080d1bcc(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08002b10(0x2b);
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    puVar4 = (undefined4 *)(param_1 + 0xb4);
    FUN_0804bc88(*puVar4,param_1,0,0);
    FUN_0804bc88(*puVar4,param_1,0,0x2a);
    FUN_0804bc88(*puVar4,param_1,0,0x55);
    FUN_0804bc88(*puVar4,param_1,0,0x80);
    FUN_0804bc88(*puVar4,param_1,0,0xaa);
    FUN_0804bc88(*puVar4,param_1,0,0xd5);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803bf38);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  return in_lr;
}


