// undefined FUN_080df39c(void)
// entry 0x80df39c


undefined4 FUN_080df39c(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cff0(param_1);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0x11) == -1) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_18 = *(int *)(param_1 + 0x58) + DAT_080df4a8;
      bVar2 = *(char *)(param_1 + 0x74) + 1;
      FUN_080d0dc4(0,&local_1c,0x200,bVar2 - (bVar2 & 0xfe));
      FUN_080df2ec(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),0,*(byte *)(param_1 + 10) >> 4 & 1
                   ,*(char *)(param_1 + 0x74));
      *(undefined1 *)(param_1 + 0x11) = 1;
      *(undefined1 *)(param_1 + 0x25) = 0x18;
    }
    else {
      local_18 = *(int *)(param_1 + 0x58) + DAT_080df430;
      FUN_080d0c88(1,&local_1c);
      FUN_08002b10(0x2a);
      iVar4 = param_1 + 0x54;
      puVar3 = (undefined1 *)(param_1 + 0x74);
      FUN_080df2ec(iVar4,*(undefined1 *)(param_1 + 0x10),3,*(byte *)(param_1 + 10) >> 4 & 1,*puVar3)
      ;
      FUN_080df2ec(iVar4,*(undefined1 *)(param_1 + 0x10),4,*(byte *)(param_1 + 10) >> 4 & 1,*puVar3)
      ;
      if (*(char *)(param_1 + 0x10) != '\x02') {
        FUN_080df2ec(iVar4,*(char *)(param_1 + 0x10),5,*(byte *)(param_1 + 10) >> 4 & 1,*puVar3);
      }
      *(undefined1 *)(param_1 + 0x11) = 2;
    }
  }
  *(undefined1 *)(param_1 + 0x75) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080df4ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_080df4b0(param_1);
  return in_lr;
}


