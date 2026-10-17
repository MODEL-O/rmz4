// undefined FUN_0801f924(void)
// entry 0x801f924


undefined4 FUN_0801f924(int param_1,char *param_2)

{
  undefined4 in_lr;
  
  if (param_2 == (char *)0x0) {
    FUN_0801f908(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_0801f908(param_1,*param_2);
    *(char *)(param_1 + 0x19) = param_2[1];
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*param_2 == '\x01') {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 8);
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x10);
    *(int *)(param_1 + 0x4c) = (int)*(short *)(param_2 + 0x14);
    *(int *)(param_1 + 0x50) = (int)*(short *)(param_2 + 0x16);
    *(int *)(param_1 + 0x54) = (int)*(short *)(param_2 + 0x18);
    *(int *)(param_1 + 0x58) = (int)*(short *)(param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x28);
  }
  return in_lr;
}


